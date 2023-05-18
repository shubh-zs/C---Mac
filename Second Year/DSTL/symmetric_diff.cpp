#include<iostream>
using namespace std;

int main(){
    int a,b,c,d,e,f,i,j;
    cout<<"**Assuming that only positive integers are the inputs to the sets\n";
    cout<<"Input the number of the values present in the set A : ";cin>>i;
    cout<<"Input the number of the values present in the set B : ";cin>>j;
    if(i<0||j<0) {cout<<"Invalid Input"; exit(0);}
    int ara[i],arb[j];
    cout<<"Input the values for the set A : \n";
    for(a=0;a<i;a++) cin>>ara[a];
    cout<<"Input the values for the set B : \n";
    for(a=0;a<j;a++) cin>>arb[a];

    //This code is for symmetric difference
    int S_D[i+j];    
    c=0;
    for(a=0;a<i;a++){
        f=0;
        for(b=0;b<j;b++){
            if(ara[a]==arb[b]){ f=1; break;}
        }
        if(f==0){ S_D[c] = ara[a];c=c+1;}
        
    }
    for(a=0;a<j;a++){
        f=0;
        for(b=0;b<i;b++){
            if(ara[b]==arb[a]){ f=1; break;}
        }
        if(f==0) {S_D[c] = arb[a];c=c+1;}
        
    }

    //This code is for to print the resulting set
    cout<<"The Symmetric Difference of the two sets are given by : \n";

    for(a=0;a<c;a++){                           //for to filter out any repeating elements
        f=-1;
        for(b=0;b<c;b++){
            if(S_D[a]==S_D[b]) f=f+1;
            if(f==1) S_D[a]=-1;
        }
    }

    for(a=0;a<c;a++) if(S_D[a]!=-1) cout<<S_D[a]<<" ";  
}