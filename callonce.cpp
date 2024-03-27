//#include <iostream>
//#include <thread>
//#include <mutex>
//
//std::once_flag flag;
//
//void initialize_resource() {
//    std::cout << "Initializing resource..." << std::endl;
//    // 在这里执行资源的初始化操作
//}
//
//void lazy_initialize() {
//    std::call_once(flag, initialize_resource);
//}
//
//int main() {
//    // 创建多个线程，并在每个线程中调用 lazy_initialize 函数
//    std::thread t1(lazy_initialize);
//    std::thread t2(lazy_initialize);
//    std::thread t3(lazy_initialize);
//
//    // 等待线程执行完毕
//    t1.join();
//    t2.join();
//    t3.join();
//
//    std::cout << "All threads finished." << std::endl;
//
//    return 0;
//}