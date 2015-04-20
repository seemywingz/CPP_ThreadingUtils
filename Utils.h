#ifndef UTILS_H


#include <thread>
#include <chrono>


    void sleepMills(int mills){
     	std::this_thread::sleep_for (std::chrono::milliseconds(mills));
    }//..

    class Logic{
        public:
          virtual ~Logic(){}
          virtual void apply() = 0;
    };

    void applyLogic(Logic * logic){
        try {
            logic->apply();
        }catch(){}
    }//..

    void startThread(Logic * logic){
        std::thread t(applyLogic,logic);
        t.join();
    }//..

#endif