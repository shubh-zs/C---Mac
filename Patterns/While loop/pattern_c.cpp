#include<iostream>
using namespace std;

// *****
// ****
// ***
// **
// *


int main(){
    int a,b,c;
    cout<<"Provide the number of R-C :";
    cin>>a;
    b = 0;
    while(b<a){
        c = b;
        while(c<a){
            cout<<"*";
            c +=1;
        }
        cout<<"\n";
        b+=1;
    }

}