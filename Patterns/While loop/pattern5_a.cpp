#include<iostream>
using namespace std;

// FEDCBA
// FEDCB
// FEDC
// FED
// FE
// F

int main(){
    int a,b,c;
    cin>>a;

    b = 0;
    while(b<a){
        c = 0;
        b++;
        while(c<(a-b+1)){
            cout<<char(64+a-c);
            c++;
        }
        cout<<"\n";
        
    }

}