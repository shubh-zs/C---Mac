#include<iostream>
#include<math.h>
using namespace std;

//Write a program in C to convert a decimal number to binary using recursion.

int conv(int d,int a,int r){
    if(d==0) return r;
    r = r + (d%2)*pow(10,a);
    d=(d/2)-(d%2)/2;
    a=a+1;
    return conv(d,a,r);
}

int main(){
    int dec;
    cout<<"Input in Decimal : ";cin>>dec;
    if(dec>=0)
    cout<<"Output in Binary : "<<conv(dec,0,0)<<"\n";
    else cout<<"Invalid Input.";

}


