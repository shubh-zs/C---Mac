#include<iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a;
    b = 0;
    while(b<a){
        c = 0;
        b++;
        while(c<b){
            d=a;
            cout<<char(64+d-c) ;
            c++;
            d--;
        }
        cout<<"\n";
    }
}