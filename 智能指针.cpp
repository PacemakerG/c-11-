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
//	/*����ָ�룬��������Ҫʱ����ϵͳ�Զ��ͷ�ָ��ռ�*/
//	shared_ptr<A> a = make_shared<A>();//����ʽ����ָ��
//
//	thread t(print, a.get());
//
//	if(t.joinable())
//	t.join();
//
//	cout << "���߳��������У�" << endl;
//
//	cout << "���߳�ִ�н�����" << endl;
//
//	return 0;
//}