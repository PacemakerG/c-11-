//#include<iostream>
//#include<thread>
//using namespace std;
//
//void print(int& i)
//{
//	cout <<i<<"号子线程：" << "helloworld!" << endl;
//	i++;
//}
//
//int main()
//{
//	int a = 1;
//	/*创建线程*/
//	thread thread1(print,ref(a));
//
//	/*分离当前线程*/
//	//thread1.detach();
//
//	/*joinable()判断能否对线程进行jion操作*/
//	bool isjoin = thread1.joinable();
//
//	if (isjoin) {
//
//		/*阻塞当前线程，直到thread1运行结束*/
//		thread1.join();
//	}
//
//	
//	cout << "主线程正在运行！" << endl;
//
//	cout << a << endl;
//
//	cout << "主线程执行结束！" << endl;
//	
//	return 0;
//}