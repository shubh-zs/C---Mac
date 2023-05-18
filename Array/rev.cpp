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

void rev(int arr[],int s){
    int a,b,c,d;
    int ar1[100];
    for(a=0,b=s-1;a<s;a++,b--){
        c = arr[a];
        ar1[b]=c;
    }
    print(ar1,s);
}

int main(){
    int i,s,a,b,c,d;
    int arr[100];
    cout<<"Size ;";
    cin>>s;
    cout<<"Elements ; \n";
    for(a=0;a<s;a++){
        cin>>b;
        arr[a]=b;
    }
    cout<<"The given list is : ";
    print(arr,s);
    cout<<"The reverse of list is : ";
    rev(arr,s);
    
}