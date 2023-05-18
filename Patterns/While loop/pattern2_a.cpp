#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a;
    b=0;
    while(b<a){
        b++;
        c = 0;
        while(c<a){
            cout<<b;
            c++;
        }
        cout<<"\n";
    }
}