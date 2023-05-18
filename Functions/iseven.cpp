#include<iostream>
using namespace std;

int iseven(){
    int i;
    cin>>i;
    (i&1)?
    (cout<<"Is not Even"):
    (cout<<"Is Even");
    return 0;
}
int main(){
    iseven();
}