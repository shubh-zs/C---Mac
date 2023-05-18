#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,loc,l,min,temp;
    cout<<"Input the value for the length of the array : ";cin>>l;
    cout<<"Input the value for the elements in array : \n"; 
    if(l>0){    
        int arr[l];
        for(a=0;a<l;a++) cin>>arr[a];
        cout<<"The array before the Insertion sort : \n";
        for(c=0;c<l;c++) cout<<arr[c]<<", ";
        cout<<"\b\b";

        for(a=1;a<l;a++){
            b = a;
            for(;b>0&&arr[b-1]>arr[b];){
                temp = arr[b-1];
                arr[b-1] = arr[b];
                arr[b] = temp;
                b=b-1;
            }
        }

        cout<<"\nThe array after the Insertion sort : \n";
        for(c=0;c<l;c++) cout<<arr[c]<<", ";
        cout<<"\b\b";
    }
    else{
        cout<<"Invalid Input.";
    }
}


