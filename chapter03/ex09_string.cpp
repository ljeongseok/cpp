#include <iostream>
#include <string>
using namespace std;

int main(){
    string list[] = {"홍길동","고길동","둘리"};

    for(auto& name : list){     // 참조 변수  -> 주소 참조 작업만 발생 속도가 빠름
        cout << name<<endl;
    }


    for(auto name : list){      // 복사 list의 각 요소를 name 변수로 복사
        cout << name<<endl;
    }

    return 0;
}