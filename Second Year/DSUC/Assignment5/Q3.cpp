#include<iostream>
using namespace std;

// Write a program in C to implement multiplication of two natural numbers using recursion
// Assuming b>1

long int mul(long int a,long int b){
    if(a==0||b==0) return 0;
    return a+mul(a,b-1);
}

int main(){
    long int a,b,c;
    cout<<"Input the number to become the Multiplicand : ";cin>>a;
    cout<<"Input the number to become the Multiplier : ";cin>>b;
    cout<<"The Product is given by : "<<mul(a,b)<<endl;
}

