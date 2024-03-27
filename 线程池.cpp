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
//	//���캯��
//	threadpool(int num):stop(false) 
//	{
//		for (int i = 0; i < num; i++) {
//			threads.emplace_back([this] {    //emplace_back��lambda���ʽһ��ֱ��ʵ�����̣߳��������߳�����
//				while (1) {
//					unique_lock<mutex> lock(mtx);
//					condition.wait(lock, [this] {return (stop || !tasks.empty()); });    //task����Ϊ�գ�����stopΪfalse���ͳ����ȴ�
//
//					if (stop && tasks.empty())
//						return;               //���stop�����������Ϊ�վ��˳��߳�
//																 //functionҲ��ֱ�ӷ�װ�����õ���ʵ����
//					function<void()> task(move(tasks.front()));  //���ڿ�ȡ�õ�task����move����ͷ��task
//					tasks.pop();              //������ͷԪ��
//					lock.unlock();            //����
//				}
//				});
//		}
//	}
//
//	~threadpool()
//	{
//		{
//			unique_lock<mutex> lock(mtx);    //����
//			stop = true;
//		}
//		condition.notify_all();
//		for (auto& it : threads) {      //�ȴ�ÿ���߳���ɣ���������Դ
//			it.join();
//		}
//
//}
//
//	template<class F,class...Args>   //ģ�������,���Դ�����������Ĳ���
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
//	vector<thread> threads;  //�߳�����
//	queue < function<void()>> tasks;  //function��װһ��void����
//
//	mutex mtx;               //������
//	condition_variable condition;    //��Ϣ����
//
//	bool stop;               //��־ʲôʱ�����
//};
//
//int main()
//{
//	threadpool pool(2);
//
//	for (int i = 0; i < 10; i++) {
//		pool.enqueue([i] {
//			cout << "����" << i << "���ڱ�ִ��" << endl;
//			this_thread::sleep_for(chrono::seconds(1));
//			cout << "����" << i << "�Ѿ������" << endl;
//			});
//	}
//}