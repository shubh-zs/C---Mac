#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    c = 0;
    b = 0;
    cout<<"Provide a number to A : ";
    cin>>a;
    while(b<a){
        b += 1;
        c = c+b;

    }
    cout <<"The sum till N numbers is : "<<c<<endl; 

}