//#include <iostream>
//#include <thread>
//#include <mutex>
//#include <condition_variable>
//#include <queue>
//std::mutex g_mutex;
//std::condition_variable g_cv;
//std::queue<int> g_queue;
//
//void Producer() {
//    for (int i = 0; i < 10; i++) {
//        {
//            std::unique_lock<std::mutex> lock(g_mutex);
//            g_queue.push(i);
//            std::cout << "Producer: produced " << i << std::endl;
//        }
//        g_cv.notify_one();  //notify()只会会发送消息，与锁无关
//        std::this_thread::sleep_for(std::chrono::seconds(1));
//    }
//}
//void Consumer() {
//    while (true) {
//        std::unique_lock<std::mutex> lock(g_mutex);
//
///*wait()时阻塞式函数，在等待期间会自动释放锁，并在条件满足时重新获取锁。条件可以时参数变为true，也可以时收到notify的消息*/
//
//        g_cv.wait(lock, []() { return !g_queue.empty(); }); 
//        int value = g_queue.front();
//        g_queue.pop();
//        std::cout << "Consumer: consumed " << value << std::endl;
//    }
//}
//int main() {
//    std::thread producer_thread(Producer);
//    std::thread consumer_thread(Consumer);
//    producer_thread.join();
//    consumer_thread.join();
//    return 0;
//}