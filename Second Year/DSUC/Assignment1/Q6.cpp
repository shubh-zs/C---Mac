#include<iostream>
using namespace std;

//This programme is for to print the maximum of difference of indexes where the element present on that index is also greater
// than the element present in the array 
//The complexity is given by O(n+n²)


//this is incomplete

void uda(int ar[],int len){
    cout<<"Provide the elements to be inserted inside of an array : \n";
    for(int a=0;a<len;a++){
        cin>>ar[a];
    }
}

int main(){
    int a,b,c,d=0,e,l;
    cout<<"Provide the length of array : "; cin>>l;
    int ar[l]; uda(ar,l);
    for(a=0;a<l;a++){
        for(b=l-1;b>a;b--){
            if(d<(b-a)&&(ar[b]>ar[a])){ 
                d = b-a;
                cout<<"b : "<<b<<"\na :"<<a<<"\n";
            }
        }
    }
    cout<<"\nDifference between indexes is given by : "<<d;
    
    
}