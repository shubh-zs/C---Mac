#include<iostream>
using namespace std;
#include<math.h>
int main(){
    int a,b,c,d,e,f,g;
    cin>>a;
    f=g=0;
    if(a<0){a = -1*a;f=1;}
    for(b=a,d=e=0;b>0;b=b>>1,d++){
        c = b%2;
        e = e+c*pow(10,d);
        if(c==1){++f;}
        else{++g;}
    }
    cout<<e<<"\n"/*" "<<f<<" "<<g*/;
    for(;e>0;e=e/10){
        if(e%10==1)++f;
        else++g;
    }
    cout<<f<<" "<<g;
}