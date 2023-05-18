#include<iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a;
    b = 0;
    d = 0;
    while(b<a){
        c= 0;
        b++;
        while(c<a){
            cout<<char(65+d);
            d++;
            c++;
        }
        cout<<"\n";
    }
}