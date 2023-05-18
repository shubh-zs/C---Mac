#include<iostream>
using namespace std;

//Write a program in C to find Fibonacci series using iterative and recursive methods both.


int r_fibb(int a){
    if(a==0||a==1) return a;
    a=a-1;
    return r_fibb(a)+r_fibb(a-1);
}

int i_fibb(int a){
    int l=0,r=1,t;
    for(l=0,r=1;a!=0;a--){
        t=r;
        r=r+l;
        l=t;
    }
    return l;
}

int main(){
    int a,b,c,d;
    cout<<"Input the value for which the factorial is to be calculated : ";cin>>a;
    if(a>=0){    
        cout<<"\nThe recursive factorial function : "<<r_fibb(a);
        cout<<"\nThe Iterative factorial function : "<<i_fibb(a);
    }
}

