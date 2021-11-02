#include<iostream>
#include "queue.h"
usinf namespace std;


int main(){
    Queue myqueue(7);

    myqueue.push(1);
    myqueue.push(2);
    myqueue.push(3);
    myqueue.push(4);
    myqueue.push(5);
    myqueue.push(6);
    myqueue.push(7);

    while(!myqueue.empty){
        cout<<myqueue.getFront()<<endl;
        myqueue.pop();
    }

    return 0;

}