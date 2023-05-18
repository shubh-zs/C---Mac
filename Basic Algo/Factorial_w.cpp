#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Provide the value of factorial : ";
    cin>>b;
    c = b;
    a = 1;
    while(b>0){
        a = b*a;
        b-=1;
    }
    cout<<"Factorial of "<<c<<" : "<<a<<endl;


}