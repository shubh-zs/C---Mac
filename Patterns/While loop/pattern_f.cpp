#include<iostream>
using namespace std;
// 123*321 12**21 123**321
// 12***21 1****1 12****21  
// 1*****1 ****** 1******1
// *******        ********


int main(){
    int a,b,c,d;
    cin>>a;
    b = 0;
    while(b<a){
        c = 0;
        d = 0;
        while(d<a-b){
            cout<<" ";
            d++;
        }
        while(c<2*b+1){
            cout<<"*";
            c++;
        }
        cout<<"\n";
        b++;
    }
}