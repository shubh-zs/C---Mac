#include<iostream>
using namespace std;

int main(){
    int a,b,c,d,e;
    cin>>a;
    c = 0;
    d = 1;
    for(b=0;a>0;a=a/10){
        b = a%10;
        c = c+b;
        d = d*b;
    }
    e = d-c;
    cout<<d<<" "<<c<<" "<<e;
    return 0;
}

