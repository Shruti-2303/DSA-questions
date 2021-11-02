#include<iostream>
#include<cstring>
using namespace std;
int main(){
    // Declaring a character array
    char a[] = {'a','b','c','d'}; // this method ends giving a garbage value at the end.

    char b[] = {'e','f','g','h','i','\0'}; // correct declaration
    // OR 

    char c[] = "efghij";//correct

    cout<< a <<endl;
    cout<< b <<endl;
    cout<< c <<endl;

    cout<< strlen(c) <<endl; //number of visible characters
    cout<< sizeof(c) <<endl; //number of characters(+1)

    char x[1000]="apple";
    char y[1000];
    // to copy x to y we have an in-built function
    // strcpy(destination,source)
    
    strcpy(y,x);
    
    cout<<y<<endl;
    //to compare x and y we have strcmp

    cout<<strcmp(x,y)<<endl;  //if these are equal then it will return 0;

    //to concatenate two strings
    char web[]="www.";
    char domain[]="google.com";
    strcpy(y,strcat(web,domain));
    cout<<y<<endl;
    cout<<strcat(web,domain)<<endl;
    
    return 0;

}
