#include<iostream>
using namespace std;

// 11111
//  2222
//   333
//    44
//     5
//     1
//    22
//   333
//  4444
// 55555

int main(){
    int a,b,c,d;
    cin>>a;
    b = 0;
    while(b<a){
        b++;
        c=0;
        d=0;
        while(d<b-1){
            cout<<" ";
            d++;
        }
        while(c<a-b+1){
            cout<<b;
            c++;
        }
        cout<<"\n";
    }
    b = 0;
    while(b<a){
        b++;
        c=0;
        d=0;
        while(d<a-b){
            cout<<" ";
            d++;
        }
        while(c<b){
            cout<<b;
            c++;
        }
        cout<<"\n";
    }
}