#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a;
    c=1;
    for(b=1;b<=a;b++){
        c=c*b;
    }
    cout<<"Factoiral of "<<a<<" : "<<c;
}