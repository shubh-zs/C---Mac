#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a;
    c = b = 0;
    while(b<=a){
        c = c+b;
        b = b+2;   
    }
    cout<<c<<endl;
    
}