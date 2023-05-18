#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a;
    b = 0;
    c = a;
    while(b<a){
        b++;
        while(0<c){
            cout<<b;
            c--;
        }
        c=a-b;
        cout<<"\n";
    }
}