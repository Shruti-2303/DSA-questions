#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    // string s = "hello world"; //DECLARATION
    // cout<<s<<endl;

    // string str;
    // getline(cin,str,'.'); //taking input using getline function
    // cout<<str<<endl;

    // for(char ch:str){
    //     cout<<ch<<",";   // can iterate over the string just like in arrays
    // }
    int n=5;
    vector<string> sarr;

    string temp;
    while(n--){
        getline(cin,temp);
        sarr.push_back(temp);
    }
    for(string ch: sarr){
        cout<<ch<<",";
    }
    
}