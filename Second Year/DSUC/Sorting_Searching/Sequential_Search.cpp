#include<iostream>
using namespace std;

int main(){
    int a,b,d,l;bool c;
    cout<<"Input the lenght of the array : ";cin>>l;
    int arr[l];
    cout<<"Input the values stored in array : \n";
    for(a=0;a<l;a++) cin>>arr[a];

    cout<<"Input the target value to be searched in the input array : ";cin>>d;
    cout<<"The value is ";
    c=0;
    for(a=0;a<l;a++) if(arr[a]== d){ cout<<" present at index "<<a;c=1;break;}
    if(!c) cout<<"not found";

}


