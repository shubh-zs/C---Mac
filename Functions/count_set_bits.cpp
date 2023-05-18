#include<iostream>
using namespace std;

int count(int a){
    int c=0;
    for(;a>0;a=a>>1){
        if((a&1)==1)c++;
    }
    return c;
}
int main(){
    int a,b,c;
    cout<<"Input the values : ";
    cin>>a>>b;
    c = count(a);
    a = c+count(b);
    cout<<"The total number of bits are : "<<a;

}