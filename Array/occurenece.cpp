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

void occ(int arr[], int s){
    int a,b,c,d,e;
    int ar1[100];
    for(a=0;a<s;a++){
        ar1[a]=a;
    }
    b = 0;
    for(a=0;a<s;a++){
        b = b^ar1[a];
    }
    print(ar1,s);
    for(a=0;a<s;a++){
        b = b^arr[a];
    }
    print(arr,s);

    cout<<b;
    

}

int main(){
    int arr[6]={1,2,2,3,4,5};
    occ(arr,6);
    // print(arr,6);
}