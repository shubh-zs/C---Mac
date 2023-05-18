#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a;
    b = 0;
    while(b<a){
        b++;
        c = 1;
        while(c<a+1){
            cout<<c;
            c++;
        }
        cout<<"\n";
    }
}