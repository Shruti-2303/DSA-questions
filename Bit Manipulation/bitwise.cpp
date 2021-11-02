#include<iostream>
using namespace std;

int main(){
    //write an expression to check whether a number is odd or even using bitwise operators
    //all the odd numbers have 1 in the last place 
    //and all the even nmbers have 0 at the last place

    int x;
    cin>>x;

    if(x&1){
        cout<<"Odd";
    }
    else{
        cout<<"Even"
    }
    return 0;
}