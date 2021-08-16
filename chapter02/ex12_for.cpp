#include <iostream>
using namespace std;

// cpp 지역변수 : {} 블록 안에 선언된 변수
// 자신이 속한 {}블록 안에서만 사용 가능
int main(){
    
    int sum = 0;
    for (int i=0; i<=10;i++){
        sum += i;
    }
    cout << "1부터 10까지 정수의합 : "<< sum << endl;
    
    return 0;
}