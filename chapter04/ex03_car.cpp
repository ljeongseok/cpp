#include <iostream>
#include <string>
using namespace std;

class Car{
    public:
        int speed;      // 속도
        int gear;       // 기어
        string color;   // 색상

    void speedUp(){
        speed += 10;
    }
    void speedDown(){
        speed -= 10;
    }
};

int main(){
    Car mycar;
    mycar.speed = 100;
    mycar.gear = 3;
    mycar.color = "red";
    
    cout<<"speed : "<< mycar.speed<<endl;
    
    mycar.speedUp();
    cout<<"speed : "<< mycar.speed<<endl;
    
    mycar.speedDown();
    cout<<"speed : "<< mycar.speed<<endl;

    
    return 0;
}