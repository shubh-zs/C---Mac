#include<iostream>
using namespace std;

//This programme is for to print even numbers
//The complexity is given by O(n)

int main(){
    int a;
    cout<<"Give the input the till which you wnt the roll nubers : ";
    cin>>a;
    for(int b=0;b<=a;b++){
        if((b&1)==0) cout<<b<<"\n";
    }
}