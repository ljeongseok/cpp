#include <iostream>
using namespace std;

int main(){
    for (int i=0; i<5;i++){
        cout << "continue 전에 있는 문장"<<endl;
        continue;
        cout << "continue 후에 있는 문장"<<endl;
    }
    return 0;
}