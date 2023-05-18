#include<iostream>
using namespace std;

// WAP to find a given number in an array with its positions (Binary Search).
// Assuming the array input is in acending order

int  bin_sear(int ar[],int len, int tar){
    int a=0,b=len-1,c=(a+b)/2,d=-1;
    while(a<=b){
        if(ar[c]>tar) b = c-1;
        else if(ar[c]<tar) a = c+1;
        else{
            d=1;
            break;
        }
        c=(a+b)/2;
    }
    if(d==-1) return -1;
    return c;
}

int main(){
    int a,b,c,e;

    cout<<"Input the length of the array : ";cin>>e;
    int ar[e];
    cout<<"Input the value of elements present in the array : \n";
    for(a=0;a<e;a++) cin>>ar[a];

    cout<<"Input the target number to search for : ";cin>>b;

    c = bin_sear(ar,e,b);

    if(c<0) cout<<"\n\nNumber is not present."<<endl<<endl;
    else{
        cout<<"\n\nNumber "<<b<<" is present at the index of "<<c<<endl<<endl;
    }
}

