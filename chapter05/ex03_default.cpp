#include <iostream>
using namespace std;

class Time{
public:
    int hour;
    int minute;

    Time(int h=0, int m=0){
        hour = h;
        minute = m;
    }
    void print(){
        cout << hour <<":"<<minute<<endl;
    }
};

int main(){
    Time a;
    Time b(10);
    // Time c(10,20,30);  // 에러

    a.print();
    b.print();

    return 0;
}