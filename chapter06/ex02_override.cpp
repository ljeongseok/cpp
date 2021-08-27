#include <iostream>
#include <string>
using namespace std;

class Animal{
public:
    void speak(){
        cout << "동물소리"<<endl;
    }
};

class Dog: public Animal{
public:
    void speak(){
        cout<<"개소리"<<endl;
    }
};

int main(){
    Dog a;
    a.speak();
    Animal b;
    b.speak();
    
    return 0;
}