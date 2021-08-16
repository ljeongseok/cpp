#include <iostream>
using namespace std;

int main(){

    const int STUDENT = 5;

    int scores[STUDENT]={100,200,300,400,500};
    int sum = 0;
    int i, avg;
    for(i=0;i<STUDENT;i++){
        sum += scores[i];
    }
    avg= sum/STUDENT;
    cout<<"성적 평균 : "<< avg<<endl;
    return 0;
}