#include<iostream>
#include<string>
using namespace std;

string compressString(string s){
    int n = s.length();
    
    string output;
    for(int i=0;i<n;i++){
        int count = 1;
        while(i<n-1 and s[i]==s[i+1]){
            count++;
            j++;
        }
        output += s[i];
        output += to_string(count);
    }
    return output;
}

int main(){
    string s = "aabbccdd";
    cout<<compressString(s);
}