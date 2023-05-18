#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int dec = 6,a,b;
    for(a=0,b=0;dec>0;dec=(dec/2)-(dec%2)/2,a++){
        cout<<" dec%2 : "<<dec%2<<"\n";
        b = b + (dec%2)*pow(10,a);
    }
    cout<<b;

}
