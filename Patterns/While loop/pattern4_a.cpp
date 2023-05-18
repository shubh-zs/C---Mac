#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a;
    b = 0;
    while(b<a){
        c = 0;
        b++;
        while(c<a){
            cout<<char(64+b);
            c++;
        }
        cout<<"\n";
    }

}