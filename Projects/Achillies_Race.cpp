#include<iostream>
using namespace std;
#include <cmath>

int main(){
    int a=0,b=0,d;
    long double c=100.0;
    while(a==0){
        d=0;
        if(c>0&&c/2>0){
            b +=1;
            cout<<c<<"-"<<(c/2);
            c = c-c/2;
            cout<<"="<<c<<"\n";
            if(remainder(b,2)==0) cout<<"     Even   ";
            else cout<<"     Odd   ";
            cout<<"\n";
            
        }   
        else break;
    }
    // (d==0)?(cout<<"Even"):(cout<<"Odd");
}