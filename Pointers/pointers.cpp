#include<iostream>
using namespace std;
//Address of operator
//let's assume x is a variable to which we have assigned a value and now we want the address of x
// cout<<&x; this statement will give the address of the block where x is stored in hexadecimal numbers.

int main(){
    int x = 10;
    cout<<&x<<endl;   //output:0x28fecc

    //Pointers
    int *y = &x;  //assignment
    int * a;  //valid syntax
    int* b;  //valid syntax

    //adress of a pointer variable
    cout<<&y<<endl; //output:0x28fec8

    //Pointer to a pointer
    int **yy = &y;
    cout<<&yy<<endl; //output:0x28fec4

    // &Bucket ==> Address
    // *Address ==> Bucket  -------------> Dereference operator
    cout<<*y<<endl; //this will give back the value of x
    cout<<*(&x)<<endl; //same as above

    //NULL pointer
    int *p = 0;
    int *q = NULL;
    //we cannot dereference a null pointer , we may end up getting a segmentation fault

    //Reference Variable creates an alias for the same object
    int &z = x;
    z++;
    cout<<x<<endl;  //they both point to the same block so the value will be same for both
    cout<<z<<endl;

}