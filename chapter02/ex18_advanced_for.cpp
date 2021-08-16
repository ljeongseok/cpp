#include <iostream>
using namespace std;

// 전역변수 선언 위치
int main(){

    int list[]={1,2,3,4,5,6,7,8,9,10};
    int sum =0;
    for(int i:list){    // int i -> 지역변수
        sum += i;
    }
    cout << sum << endl<<endl;

    for(int& i: list){
        cout<<i<<" ";
    }
    cout << endl;

    for(auto& i : list){
        cout << i << " ";
    }
    return 0;
}