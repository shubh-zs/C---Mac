#include<iostream>
#include<cmath>
using namespace std;

int main(){
    
    int temp=0,it1=1,c=1,N,a; //c=1 because then 0th element will be -1
    cin>>N;
    if(N<0){ N = -1*N; it1=-1;}
    int l=int(log10(double(N)))+1+1,arr[l];
    arr[0] = it1;
    for(temp=N;temp!=0;c++,temp=temp/10){
        it1=temp%10;
        arr[c] = it1;
    }
    temp=0;
    for(a=1;a<l;a++){
        temp = temp*10+arr[a];
    }
    temp = temp*arr[0];

    cout<<temp;
}