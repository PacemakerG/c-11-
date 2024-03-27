//#include<iostream>
//#include<thread>
//#include<memory>
//#include<mutex>
//using namespace std;
//
//once_flag flag;
//
//class Singleton {
//public:
//    void initialize() {
//        call_once(flag,getInstance);
//    }
//    static Singleton& getInstance() {
//        static Singleton instance;
//        cout << "µ÷ÓÃÁË...." << endl;
//        return instance;
//    }
//    void setData(int data) {
//        m_data = data;
//    }
//    int getData() const {
//        return m_data;
//    }private:
//        Singleton() {}
//        Singleton(const Singleton&) = delete;
//        Singleton& operator=(const Singleton&) = delete;
//        int m_data = 0;
//};
//
//int main()
//{
//    Singleton& Instance = Singleton::getInstance();
//    thread t1(&Singleton::initialize, &Instance);
//    thread t2(&Singleton::initialize, &Instance);
//    thread t3(&Singleton::initialize, &Instance);
//
//    t1.join();
//    t2.join();
//    t3.join();
//}