#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a,b,c,d,e;
    cin>>a;
    for(b=a,d=e=a=0;b>0;b=b>>1,d++){
        c = b%2;
        if(c==1)c=0;
        else c=1;
        e = e+c*pow(10,d);
        a = a+c*pow(2,d);
    }
    cout<<"The compliment in Decimal is given by : "<<a<<endl;
    cout<<"The compliment in Binary is given by : "<<e<<endl;

}

