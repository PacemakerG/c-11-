//#include<iostream>
//#include<thread>
//#include<memory>
//#include<mutex>
//using namespace std;
//
//int num = 0;
//mutex mutx1, mutx2; //����������
//
//void func1()
//{
//	for (int i = 0; i < 5000; i++) {
//		unique_lock<mutex> lock(mutx1,defer_lock);  //����defer_lock�����Ȳ����ż���������.lock�������ټ���
//		lock.try_lock_for(chrono::seconds(2));   //���Ի�ȡ�����ȴ�������
//		num++;
//	}
//}
//
//void func2()
//{
//	for (int i = 0; i < 5000; i++) {
//		lock_guard<mutex> my_lock(mutx2);  //��lock_guard<mutex> my_lock(mutx2)Ч����ͬ
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
//	cout << "���߳��������У�" << endl;
//
//	cout << "���߳�ִ�н�����" << endl;
//	cout << num << endl;
//
//	return 0;
//}