#include<iostream>
#include<climits>
using namespace std;

//Largest Element
int largest_ele(int arr[],int n){
    int max = INT_MIN  //or arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
//Maximum Subarray Sum(Kadane's Method)
int maximum_subarray_sum(int arr[],int n){
    int cs = 0;
    int ls = 0;
    for(int i=0;i<n;i++){
        cs = cs+arr[i];
        if(cs<0){
            cs=0;
        }
        ls = max(ls,cs);
    }
    return ls;
}

int main(){
    int arr[]={23,78,90,101,67};
    int n = sizeof(arr)/sizeof(int);
    // cout<<largest_ele(arr,n);
    cout<<maximum_subarray_sum(arr,n);
}