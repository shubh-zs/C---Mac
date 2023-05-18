#include<iostream>
using namespace std;

int main(){
    int a,b,c,d,i,j,f;
    cout<<"**Assuming that only positive integers are the inputs to the sets\n";
    cout<<"Input the number of the values present in the set A : ";cin>>i;
    cout<<"Input the number of the values present in the set B : ";cin>>j;
    if(i<0||j<0) {cout<<"Invalid Input"; exit(0);}
    int ara[i],arb[j];
    cout<<"Input the values for the set A : \n";
    for(a=0;a<i;a++) cin>>ara[a];
    cout<<"Input the values for the set B : \n";
    for(a=0;a<j;a++) cin>>arb[a];
    if(i==0||j==0){
        cout<<"Output : \n";
        if(i==0){
            for(a=0;a<j;a++) cout<<arb[a]<<" ";
        }
        else{
            for(a=0;a<i;a++) cout<<ara[a]<<" ";
        }
        exit(0);
    }

    cout<<"Input Set A : \n";
    for(a=0;a<i;a++) cout<<ara[a]<<" ";
    cout<<"\nInput Set B : \n";
    for(a=0;a<j;a++) cout<<arb[a]<<" "; cout<<"\n\n\n\n";

    

    //This is the code for the Union of the two sets
    d = (i>j)?(i):(j);
    c=0;
    int ari[d];             
    for(a=0;a<i;a++){
        for(b=0;b<j;b++){
            if(ara[a]==arb[b]){
                arb[b]=-1;
                c=c+1;
            }
        }
    }
    d=i+j-c;
    int aru[d];
    c=0;
    for(a=0;a<i;a++){
        aru[c]=ara[a];
        c=c+1;
    }
    for(b=0;b<j;b++){
        if(arb[b]!=-1){ aru[c]=arb[b]; c=c+1; }
    }

    cout<<"The union of the two sets are given by : \n";
    for(a=0;a<d;a++){                           //for to filter out any repeating elements
        f=-1;
        for(b=0;b<d;b++){
            if(aru[a]==aru[b]&&aru[a]!=-1) f=f+1;
            if(f==1) aru[a]=-1;
        }
    }

    for(a=0;a<d;a++) if(aru[a]!=-1) cout<<aru[a]<<" "; 

}


