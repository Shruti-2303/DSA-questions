#include<iostream>
using namespace std;

int main(){
    char ch[][10] = {   //declaring 2d character array
        "one",
        "two",
        "three",
        "four",
        "five"
    };
    int i = 3; 
    cout<<ch[i]<<endl; //accessing elements
    
    for(i=0;i<5;i++){
        cout<<ch[i]<<endl;  //this prints the whole character array.
    }
}