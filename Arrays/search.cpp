#include<iostream>
using namespace std;
//Linear Search

// int linear_search(int arr[], int n, int key){
//     for(int i = 0;i<n;i++){
//         if(arr[i]==key){
//             return i;
//         }
//     }
//     return -1;
// }

//Binary Search

int binary_search(int arr[], int n, int key){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid = (s+e)/2;
        for(int i=0;i<n;i++){
            if(arr[mid]==key){
                return mid;
            }
            else if (arr[mid]<key)
            {
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            
        }
    }
    return -1;
}
int main(){
    int arr[] = {5,10,34,40,52,60,100};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    int index = binary_search(arr,n,key);

    if(index!=-1){
        cout<<key<<" is found at "<<index;
    }
    else{
        cout<<key<<" not found";
    }
}