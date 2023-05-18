#include<iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a;
    for(b = 0;a>0;a=a/10){
        b = a%10;
        cout<<b;
    }
}