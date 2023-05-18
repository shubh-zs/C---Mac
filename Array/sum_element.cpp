#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    int arr[100];
    cin>>a;
    for(b=0;b<a;b++){
        cin>>c;
        arr[b]=c;
    }
    for(b=c=0;b<a;b++)c=c+arr[b];
    cout<<"The sum is given by : "<<c;
}