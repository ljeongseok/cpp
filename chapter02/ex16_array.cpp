#include <iostream>
using namespace std;

int main(){

    const int STUDENT = 5;
    int score[STUDENT];
    int sum = 0;
    int i, avg;
    for (i=0;i<STUDENT;i++){
        cout<<"학생들의 성적을 입력하세요 : ";
        cin>>score[i];
    }

    for (i=0;i<STUDENT;i++){
        sum += score[i];
    }
    avg = sum/STUDENT;
    cout<<"평균 : "<<avg<<endl;
    return 0;
}