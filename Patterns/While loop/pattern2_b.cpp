#include<iostream>
using namespace std;

// 1
// 22
// 333
// 4444
// 55555

int main(){
    int a,b,c;
    cin>>a;
    b = 0;
    while(b<a){
        c = 0;
        b++;
        while(c<b){
        cout<<b;
        c++;
        }
        cout<<"\n";
    }
}