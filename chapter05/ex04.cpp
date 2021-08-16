#include <iostream>
using namespace std;

class Time{
public:
    int hour;
    int minute;

    Time(int h=0, int m=0): hour(h), minute(m){     // 멤버 초기화 리스트
    }
    
    void print(){
        cout << hour << ":"<<minute<<endl;
    }
};

int main(){
    Time a(10,20);
    a.print();

    return 0;
}