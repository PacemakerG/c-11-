//#include<iostream>
//#include<thread>
//#include<memory>
//#include<mutex>
//using namespace std;
//
//int num = 0;
//mutex mutx1, mutx2; //定义两个锁
//
//void func1()
//{
//	for (int i = 0; i < 50000; i++) {
//		mutx1.lock();
//		mutx2.lock();
//		num++;
//		mutx2.unlock();
//		mutx1.unlock();
//	}
//}
//
//void func2()
//{
//	for (int i = 0; i < 500000; i++) {
//		mutx1.lock();
//		mutx2.lock();
//		num++;
//		mutx2.unlock();
//		mutx1.unlock();
//	}
//	
//}
//
//
//int main()
//{
//	thread t1(func1);
//	thread t2(func1);
//
//	t1.join();
//	t2.join();
//
//	cout << "主线程正在运行！" << endl;
//
//	cout << "主线程执行结束！" << endl;
//	cout << num << endl;
//
//	return 0;
//}