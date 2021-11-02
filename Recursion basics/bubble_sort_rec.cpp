#include<iostream>
using namespace std;

void bubble_sort(int a, int n){
    //base case
    if(n==1){
        return;
    }

    for(int j=0;j<n-1;j++){
        if(a[j]<a[j+1]){
            swap(a[j],a[j+1]);
        }
    }
    bubble_sort(a,n-1);
}
void bubble_sort_2(int a, int n){
    //base case
    if(n==1){
        return;
    }
    if(j==n-1){
        //reduce the problem size, and reset j to 0
        bubble_sort_2(a,n-1,0);
        return;
    }
    
    if(a[j]<a[j+1]){
        swap(a[j],a[j+1]);
    }
    
    bubble_sort_2(a,n-1,j+1);
}
int main(){
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);

    bubble_sort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}