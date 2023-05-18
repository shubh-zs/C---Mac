#include<iostream>
using namespace std;

void print(int arr[],int s){
    int a,b,c;
    cout<<"[";
    for(a=0;a<s;a++){
        cout<<arr[a];
        if(a!=s-1)cout<<","; 
    }
    cout<<"]\n";
}

void alt_rev(int arr[],int s){
    int i,a,b,c;
    for(a=0;a<s&&a+1<s;a+=2){
        if(c==0)c=2;
        arr[a] = arr[a]+arr[a+1];
        arr[a+1] = arr[a]-arr[a+1];
        arr[a] = arr[a]-arr[a+1];
    }
    cout<<"Alt reverse list is given by : ";
    print(arr,s);
}

int main(){
    int s,a;
    int arr[6]={1,2,3,4,5,6};
    print(arr,6);
    alt_rev(arr,6);
}