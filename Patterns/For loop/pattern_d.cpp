// 1234*
// 123* *
// 12*   *
// 1*     *
// *********
// *
#include<iostream>
using namespace std;

int main(){
    int a,b,c,d,e;
    cin>>a;
    for(b=0;b<a;b++){
        c = 0;
        d = 0;
        for(;c<a-b;c++){
            cout<<" ";
        }
        if(c==a-b){
            cout<<"*";
        }
        for(;d<b;d++){
            cout<<" ";
        }
        for(d=0;d<b;d++){
            cout<<" ";
        }
        if(d==b){
            cout<<"*";
        }
        cout<<"\n";
    }
    if(b==a){
        for(b=0;b<2*a+2;b++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
