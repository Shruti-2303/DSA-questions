#include<iostream>
using namespace std;
//pass by value
//in this the value of income variable is different in the function block and main block.
void applyTax(int income){
    float tax = 0.10;
    income = income - income*0.10;
}
//pass by reference by using reference variables
//now both are same so change in one will be reflected in both
void appTax(int & income){
    float tax = 0.10;
    income = income - income*0.10;
}

void watchVideo(int *viewsPtr){
    *viewsPtr = *viewsPtr + 1;
}
int main(){
    int income;
    int views = 100;
    cin>>income;

    // applyTax(income);
    appTax(income);
    watchVideo(&views);
    cout<<views<<endl;
    cout<<income<<endl;
}