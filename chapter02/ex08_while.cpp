#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){

    int n;
    int i = 1;

    cout << "구구단 중에 출력하고 싶은 단 : ";
    cin>> n;

    while(i<10){
        cout << n<<" X "<<i <<" = "<< n*i <<endl;
        i++;    // 단독으로 사용시 i++, ++i 상관없음
    } 
    return 0;
}