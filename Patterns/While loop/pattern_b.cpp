#include<iostream>
using namespace std;

// *
// **
// ***
// ****
// *****

int main(){
    int a,b,c;
    cout<<"Provide the number of R-C :";
    cin>>a;
    b = 0;
    while(b<a){
        c = 0;
        b += 1;
        while(c<b){
            cout<<"*";
        c +=1;
        }
        cout<<"\n";
    }
}