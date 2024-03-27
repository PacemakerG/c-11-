//#include <iostream>
//#include<string>
//#include <thread>
//#include <mutex>
//#include <condition_variable>
//#include <queue>
//#include<vector>
//#include<functional>
//
//
//using namespace std;
//
//class threadpool
//{
//public:
//
//	//构造函数
//	threadpool(int num):stop(false) 
//	{
//		for (int i = 0; i < num; i++) {
//			threads.emplace_back([this] {    //emplace_back和lambda表达式一起直接实例化线程，并放入线程数组
//				while (1) {
//					unique_lock<mutex> lock(mtx);
//					condition.wait(lock, [this] {return (stop || !tasks.empty()); });    //task队列为空，或者stop为false，就持续等待
//
//					if (stop && tasks.empty())
//						return;               //如果stop或者任务队列为空就退出线程
//																 //function也是直接封装，不用单独实例化
//					function<void()> task(move(tasks.front()));  //存在可取用的task，就move掉队头的task
//					tasks.pop();              //弹出队头元素
//					lock.unlock();            //解锁
//				}
//				});
//		}
//	}
//
//	~threadpool()
//	{
//		{
//			unique_lock<mutex> lock(mtx);    //加锁
//			stop = true;
//		}
//		condition.notify_all();
//		for (auto& it : threads) {      //等待每个线程完成，并回收资源
//			it.join();
//		}
//
//}
//
//	template<class F,class...Args>   //模版参数包,可以传入任意个数的参数
//	void enqueue(F&& f , Args&&... args){
//		function<void()>task = bind(forward<F>(f), forward<Args>(args)...);
//		{
//			unique_lock<mutex> lock(mtx);
//			tasks.emplace(move(task));
//		}
//		condition.notify_one();
//	}
//
//
//private:
//	vector<thread> threads;  //线程数组
//	queue < function<void()>> tasks;  //function封装一个void函数
//
//	mutex mtx;               //互斥锁
//	condition_variable condition;    //消息变量
//
//	bool stop;               //标志什么时候结束
//};
//
//int main()
//{
//	threadpool pool(2);
//
//	for (int i = 0; i < 10; i++) {
//		pool.enqueue([i] {
//			cout << "任务" << i << "正在被执行" << endl;
//			this_thread::sleep_for(chrono::seconds(1));
//			cout << "任务" << i << "已经被完成" << endl;
//			});
//	}
//}