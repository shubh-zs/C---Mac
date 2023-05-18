#include<iostream>
using namespace std;

// WAP to find a given number in an array with its positions (Linear Search).

int lin_sear(int ar[],int len,int tar){
    int a,b,c,d=-1;
    for(a=0;a<len;a++){
        if(ar[a]==tar){ d=1; break;}
    }
    return d*a;
}

int main(){
    int a,b,c,e;

    cout<<"Input the length of the array : ";cin>>e;
    int ar[e];
    cout<<"Input the value of elements present in the array : \n";
    for(a=0;a<e;a++) cin>>ar[a];

    cout<<"Input the target number to search for : ";cin>>b;

    c = lin_sear(ar,e,b);

    if(c<0) cout<<"\n\nNumber is not present."<<endl<<endl;
    else{
        cout<<"\n\nNumber "<<b<<" is present at the index of "<<c<<endl<<endl;
    }
}