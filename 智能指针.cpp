//#include<iostream>
//#include<thread>
//#include<memory>
//using namespace std;
//
//class A
//{
//	friend	void print(A* a);
//private:
//	void func() {
//		cout << "helloworld!" << endl;
//	}
//};
//
//void print(A* a)
//{
//	a->func();
//	
//}
//
//int main()
//{
//	/*智能指针，当不再需要时操作系统自动释放指针空间*/
//	shared_ptr<A> a = make_shared<A>();//共享式智能指针
//
//	thread t(print, a.get());
//
//	if(t.joinable())
//	t.join();
//
//	cout << "主线程正在运行！" << endl;
//
//	cout << "主线程执行结束！" << endl;
//
//	return 0;
//}