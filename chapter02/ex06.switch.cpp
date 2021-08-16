#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){

    int num;
    cout << "숫자를 입력하세요 : ";
    cin >> num;
    switch(num){
        case 0:
            cout <<"zero\n";
            break;
        case 1:
            cout << "one\n";
            break;
        case 2:
            cout << "two" <<endl;
            break;
        default:
            cout << "many" <<endl;
            break;
        // break; 없으면 계속 실행
        // ex) num = 1; 
        // one two many 
    }
    return 0;
}