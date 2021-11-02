#include<iostream>
using namespace std;
//Bubble Sort
void bubble_sort(int arr[],int n){
    for(int t=1;t<n;t++){
        for(int j=0;j<=n-t-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
//Insertion sort
void ins_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int current = arr[i];
        int prev = i-1;
        while(prev>=0 and arr[prev]>current){
            arr[prev+1] = arr[prev];
            prev = prev - 1;
        }
        arr[prev+1] = current;
    }
}
//Selection Sort
void sel_sort(int arr[],int n){
    for(int pos=0;pos<=n-2;pos++){
        int current = arr[pos];
        int min_pos = pos;
        for(int j=pos;j<n;j++){
            if(arr[j]<arr[min_pos]){
                min_pos = j;
            }
            swap(arr[min_pos],arr[pos]);
        }
    }
}
int main(){
    int arr[]={78,56,23,10,6};
    int n = sizeof(arr)/sizeof(int);
    // bubble_sort(arr,n);
    // ins_sort(arr,n);
    sel_sort(arr,n);
    for(auto x:arr){
        cout<<x<<",";
    }
    return 0;
}