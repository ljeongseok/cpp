#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "When in Rome, do as the Romes.";

    int size = s.size();
    int index = s.find("Rome");

    cout <<size<<endl;
    cout <<index<<endl;
    return 0;
}