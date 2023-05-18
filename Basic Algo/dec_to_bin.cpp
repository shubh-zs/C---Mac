#include<iostream>
using namespace std;
#include<math.h>
int main(){
    int a,b,c,d,e,f;
    cin>>a;
    e=0;
    for(b=a,d=0;b>0;b=b>>1,d++){
        c = b%2;
        f = pow(10,d);
        e = e+c*f;
        // cout<<f<<"\n";
    }
        cout<<e;

    


}