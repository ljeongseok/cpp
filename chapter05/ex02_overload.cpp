#include <iostream>
using namespace std;

class Time{
public:
    int hour;
    int minute;

    Time(){
        hour = 0;
        minute = 0;
    }
    Time(int h, int m){
        hour = h;
        minute = m;
    }
    void print(){
        cout << hour<<" : "<<minute<<endl;
    }
};

int main(){
    Time a;
    Time b (3,26);

    // Time c(10);         // 에러 
    // Time d(10,20,30);   // 에러

    a.print();
    b.print();
    
    return 0;
}