//#include<iostream>
//#include<thread>
//using namespace std;
//
//void print(int& i)
//{
//	cout <<i<<"�����̣߳�" << "helloworld!" << endl;
//	i++;
//}
//
//int main()
//{
//	int a = 1;
//	/*�����߳�*/
//	thread thread1(print,ref(a));
//
//	/*���뵱ǰ�߳�*/
//	//thread1.detach();
//
//	/*joinable()�ж��ܷ���߳̽���jion����*/
//	bool isjoin = thread1.joinable();
//
//	if (isjoin) {
//
//		/*������ǰ�̣߳�ֱ��thread1���н���*/
//		thread1.join();
//	}
//
//	
//	cout << "���߳��������У�" << endl;
//
//	cout << a << endl;
//
//	cout << "���߳�ִ�н�����" << endl;
//	
//	return 0;
//}