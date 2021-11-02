#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    vector<int> arr = {10,11,2,3,4,6,7,8};

    int key;
    cin>>key;

    vector<int>::iterator it = find(arr.begin(),arr.end(),key);  //it gives the address of the element 

    if(it!=arr.end()){
        cout<<"present at index"<< it - arr.begin()<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }

}