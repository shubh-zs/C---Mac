#include<iostream>
using namespace std;

int fac(int i){
    int a,b;
    for(a=b=1;a<=i;a++)b=b*a;
    return b;
}
int ncr(int i,int j){
    return fac(i)/(fac(j)*fac(i-j));
}
int main(){
    int a,b,c,d,e,f;
    cout<<"Provide with the inputs : ";
    cin>>a>>b;
    d = ncr(a,b);
    cout<<"The answer is given by : "<<d;

}