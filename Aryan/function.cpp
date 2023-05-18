#include<iostream>
using namespace std;

int f(int p){
    int a=p;
    for(;a>0;a--){
        cout<<"a is of value :"<<p<<endl;
    }
    return a;
}

void f2(){
    int aryan = f(8);
    cout<<"\n  aryan : "<<aryan;
}

int main(){
    int a = 9;
    f(a);
    f2();
}
