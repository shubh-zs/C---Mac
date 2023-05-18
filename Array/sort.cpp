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

void sort(int arr[],int s){
    int a,b,c,d,e[100];
    for(a=0,b=s-1,c=0;c<s;c++){
        if(arr[c]==0) {e[a]=0;a++;}
        if(arr[c]==1){e[b]=1; b--;}
    }
    print(e,s);


}

int main(){ 
    int ar1[6]={0,1,0,1,0,1};
    sort(ar1,6);
}