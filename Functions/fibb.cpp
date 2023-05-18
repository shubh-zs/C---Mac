#include<iostream>
using namespace std;

void fib(int n){
    int a=0,b=1,c;
    for(c=0;c<n;c=a+b){
        cout<<c<<" ";
        a =b;
        b = c; 
    }
}
int main(){
    int n;
    cout<<"Write the numbers of terms : ";
    cin>>n;
    fib(n);
}