#include <iostream>
#include <array>
#include "Utils.h"
using namespace std;

const int mills = 500;
array<char,5> toPrint = {'H','e','l','l','o'};

void printArray(){

    for (int i = 0; i < toPrint.size(); ++i) {
        cout<<toPrint[i];
        sleepMills(mills);
    }
    cout<<endl;
}

int main() {


    class p:public Logic{
        void apply(){
            cout<<"Almost an Interface!"<<endl;
            printArray();
        }
    };

    startThread(new p());

    return 0;

}//..