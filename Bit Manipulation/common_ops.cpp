#include<iostream>
using namespace std;

int getIthBit(int n,int i){
    int mask = 1<<i;
    return (n & mask) > 0 ? 1:0;
}

void clearIthBit(int n,int i){
    int mask = ~(1<<i);
    n = n & mask;
}

void getIthBit(int n,int i){
    int mask = (1<<i);
    n = (n | mask);
}
int updateIthBit(int &n,int i, int v){
    
    clearIthBit(n,i);
    int mask = v<<i;
    n = n | mask;
}
int clearLastIBits(int &n,int i){
    int mask = (-1<<i);
    n = n & mask;
}
void clearBitsInRange(int &n,int i,int j){
    int a = (~0) << (j+1);
    int b = (1<<i)-1;
    int mask = a|b;
    n = n & mask;

}

int main(){

    int n=5;
    int i;
    cin>>i;

    cout<<getIthBit(n,i)<<endl;


    return 0;
}