#include<iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a;
    // b=false;
    if((a%10)%2!=0||a==0)cout<<"Not pow of 2";
    else{
        for(;a>1;a=a/2){
            c = a%2;
            if(c!=0){cout<<"Not pow of 2";break;}
        }
        cout<<"Is power of 2. ";
    }
}