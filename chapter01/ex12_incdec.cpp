#include <iostream>
#include <string>
using namespace std;

int main(int argc,char const *argv[]){

    int x = 100;
    x++;
    cout << x << endl;  // 101;

    x--;
    cout << x << endl;  // 100;
                            // ++x -> x 값을 읽기 전 증가
                            // x++ -> x 값을 읽은 후 증가
    cout << ++x << endl;    // 101;
    cout << x++ << endl;    // 101;
    cout << x << endl;      // 102;
    cout << --x << endl;    // 101;
    cout << x-- << endl;    // 101;
    cout << x << endl;      // 100;

    return 0;
}