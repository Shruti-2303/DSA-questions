#include<iostream>
using namespace std;

int main(){

    int n = 16;

    if((n & (n-1))==0){
        cout<<"Power of 2";
    }
    else{
        cout<<"No";
    }

    return 0;
}