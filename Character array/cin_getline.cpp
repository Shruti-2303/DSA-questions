#include<iostream>
using namespace std;

int main(){
    // char sentence[1000];
    // cin.getline(sentence,1000,'.');
    // cout<<sentence<<endl;

    char route[1000];
    cin.getline(route,1000);
    int x = 0;
    int y = 0;
    for(int i=0;route[i]!='\0';i++){
        switch (route[i])
        {
        case 'N':
            y++;
            break;
        
        case 'S':
            y--;
            break;
        case 'E':
            x++;
            break;
        case 'W':
            x--;
            break;
        }

    }
    if(x>=0 and y>=0){
        while(y--){
            cout<<"N";
        }
        while(x--){
            cout<<"E";
        }
    }
    else if(x<=0 and y<=0){
        while(x--){
            cout<<"W";
        }
        while(y--){
            cout<<"S";
        }
    }
    return 0;
}