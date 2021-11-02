#include<iostream>
using namespace std;

// void printsub(int arr[], int n){
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             for(int k=i;k<j;k++){
//                 cout<<arr[k]<<" ";
//             }
//             cout<<endl;
//         }
//         cout<<endl;
//     }
// }

// //SUM1
// int largest_sum1(int arr[], int n){
//     int largest = 0;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             int subsum = 0;
//             for(int k=i;k<j;k++){
//                 subsum += arr[k];
//             }
//             largest = max(largest,subsum);
//         }
   
//     }
//     return largest;
// }

//SUM2
int largest_sum2(int arr[],int n){

    int prefix[n]={0};
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix[i] = prefix[i-1]+arr[i];
    }
    
    int largest = 0;
    for(int i=0;i<n;i++){
        int subsum = 0;
        for(int j=i;j<n;j++){
            subsum = i>0 ? prefix[j] - prefix[i-1]:prefix[j];
        }
        largest = max(largest,subsum);
    }
    return largest;
}
int main(){
    int arr[] = {10,20,30,40,50};
    int n= sizeof(arr)/sizeof(int);
    cout<<largest_sum2(arr,n);

    return 0;
}