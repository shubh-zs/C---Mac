#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int i,a,b,c,d,e,f,g;
    cout<<"******************Base convertor******************"<<"\n"<<"1. Dec to Bin \n"<<"2. Bin to Dec\n";
    cout<<"Whats the base of convertant :";
    cin>>i;
    cout<<"Provide the number : ";
    cin>>a;
    if(i==1){
        for(b=a,d=e=0;b>0;b=b>>1,d++){
            c = b%2;
            e = e+c*pow(10,d);
        }
        cout<<"The number in binary is : "<<e;
    }
    else if(i==2){
        for(b=a,d=e=0;b>0;b=b/10,d++){
            c = b%10;
            e = e+c*pow(2,d);
        }
        if(c!=0&&c!=1)cout<<"Provide a appropiate input. ";
        else cout<<"The number in decimal is : "<<e;
    }
}