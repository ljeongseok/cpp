#include <iostream>
using namespace std;

// 선언문의 변수명 앞에 &가 붙은 경우
// referece 변수가 됨
void swap(int& x,int &y){
    int t;
    t=x;
    x=y;
    y=t;
}

int main(){
    int a =100, b = 200;

    printf("a=%d , b=%d\n",a,b);
    swap(a,b);
    printf("a=%d , b=%d",a,b);
    
    return 0;
}