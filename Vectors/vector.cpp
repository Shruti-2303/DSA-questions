#include<iostream>
#include<vector>
using namespace std;

int main(){
    //Demo Vector
    vector<int> arr = {1,2,10,21,15};
    
    //Fill Contructor(this is another way of initializing a vector)
    vector<int> arr(10,7);  //it will print 7 for 10 times.
    
    //Pop_back
    arr.pop_back();  //this removes the last element in the array by default.
    
    //Push_Back
    arr.push_back(16);

    //Print all elemnets
    for (int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
    //Size of the vector(No of elements)
    cout<<arr.size()<<endl;

    //Capacity of the vector
    cout<<arr.capacity()<<endl;  //the capacity becomes double of size whenever somthing new is added.
}