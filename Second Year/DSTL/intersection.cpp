#include<iostream>
using namespace std;

int main(){
    int a,b,c,d,i,j;
    cout<<"**Assuming that only positive integers are the inputs to the sets\n";
    cout<<"Input the number of the values present in the set A : ";cin>>i;
    cout<<"Input the number of the values present in the set B : ";cin>>j;
    if(i<=0||j<=0) {cout<<"Invalid Input"; exit(0);}
    int ara[i],arb[j];
    cout<<"Input the values for the set A : \n";
    for(a=0;a<i;a++) cin>>ara[a];
    cout<<"Input the values for the set B : \n";
    for(a=0;a<j;a++) cin>>arb[a];

    //This is the code for the intersection of the sets

    d = (i>j)?(i):(j);
    int ari[d];
    c=0;
    for(a=0;a<i;a++){
        for(b=0;b<j;b++){
            if(ara[a]==arb[b]){
                ari[c]=ara[a];
                c=c+1;
            }
        }
    }

    for(a=0;a<c;a++){                           //for to filter out any repeating elements
        int f=-1;
        for(b=0;b<c;b++){
            if(ari[a]==ari[b]&&ari[a]!=-1) f=f+1;
            if(f==1) ari[a]=-1;
        }
    }

    //This is to print the intersection of the elements present in the two sets
    cout<<"These are the elements present at the intersection of the sets : \n";
    for(a=0;a<c;a++) if(ari[a]!=-1) cout<<ari[a]<<"\n";

}

