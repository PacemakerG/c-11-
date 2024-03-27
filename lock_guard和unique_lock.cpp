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
//	for (int i = 0; i < 5000; i++) {
//		unique_lock<mutex> lock(mutx1,defer_lock);  //加入defer_lock表明先不急着加锁，调用.lock（）后再加锁
//		lock.try_lock_for(chrono::seconds(2));   //尝试获取锁，等待两秒钟
//		num++;
//	}
//}
//
//void func2()
//{
//	for (int i = 0; i < 5000; i++) {
//		lock_guard<mutex> my_lock(mutx2);  //与lock_guard<mutex> my_lock(mutx2)效果相同
//		num++;
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