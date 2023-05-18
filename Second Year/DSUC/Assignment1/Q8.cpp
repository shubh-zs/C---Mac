#include<iostream>
using namespace std;

//This programme is for to print count of unique numbers from an user defined array
//The complexity is given by O(n+n²)

int main(){
    int a,b,c,d,l;
    cout<<"Input the length of array : "; cin>>l;
    int ar[l], uar[l];
    for(a=0;a<l;a++) cin>>ar[a];

    for(a=0;a<l;a++){
        d=0;
        for(b=0;b<l;b++) if(uar[b]==ar[a]) d++;
        if(d==0) c++;
    }
    cout<<"Number of unique elements in an array is given by : "<<c;
}

