#include<iostream>
using namespace std;

//      *
//     **
//    ***
//   ****
//  *****
//   ****
//    ***
//     **
//      *


int main(){
    int a,b,c,d;
    cin>>a;
    b=0;
    while(b<a){
        c=0;
        d=0;
        b++;
        while(d<a-b+1){
                cout<<" ";
                d++;
        }
        while(c<b){
            cout<<"*";
            c++;
        }
        cout<<"\n";
    }
    if(b>=a){
        while(b>0){
            c=0;
            d=0;
            b--;
            while(d<a-b+1){
                    cout<<" ";
                    d++;
            }
            while(c<b){
                cout<<"*";
                c++;
            }
            cout<<"\n";

        }
    }

}
