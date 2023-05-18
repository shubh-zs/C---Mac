#include<iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a;
    b = 0;
    while(b<a){
        c = 0;
        b++;
        d = b;
        while(c<a){
            cout<<char(64+d);
            c++;
            d++;
        }
        cout<<"\n";
    }
}
// abc
// bcd
// def