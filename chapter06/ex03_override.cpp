#include <iostream>
#include <string>
using namespace std;

class SuperClass{
public:
    void print(){
        cout<< "SuperClass의 print()"<<endl;
    }
};

class ChildCalss : public SuperClass{
public:
    void print(){
        SuperClass::print();
        cout << "ChileClass의 print()"<<endl;
    }
};

int main(){
    ChildCalss c;
    c.print();
    return 0;
}