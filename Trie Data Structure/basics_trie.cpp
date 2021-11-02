//Prefix Trie
// - generic tree like data structure
// - efficient information retrieval data structure
// - searches in optimal time O(key length) but uses extra storage

#include<iostream>
#include "trie.h"
using namespace std;

int main(){

    string words[] = {"hello","he","apple","ape","news"};
    Trie t;

    for(auto word:words){
        t.insert(word);
    }

    string key;
    cin>>key;

    cout<< t.search(key) <<endl;

    return 0;
}
