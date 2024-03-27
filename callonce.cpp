//#include <iostream>
//#include <thread>
//#include <mutex>
//
//std::once_flag flag;
//
//void initialize_resource() {
//    std::cout << "Initializing resource..." << std::endl;
//    // ������ִ����Դ�ĳ�ʼ������
//}
//
//void lazy_initialize() {
//    std::call_once(flag, initialize_resource);
//}
//
//int main() {
//    // ��������̣߳�����ÿ���߳��е��� lazy_initialize ����
//    std::thread t1(lazy_initialize);
//    std::thread t2(lazy_initialize);
//    std::thread t3(lazy_initialize);
//
//    // �ȴ��߳�ִ�����
//    t1.join();
//    t2.join();
//    t3.join();
//
//    std::cout << "All threads finished." << std::endl;
//
//    return 0;
//}