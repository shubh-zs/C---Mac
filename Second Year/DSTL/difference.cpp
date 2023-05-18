#include<iostream>
using namespace std;

int main(){
    int a,b,c,d,i,j,o;
    cout<<"Input the number of the values present in the set A : ";cin>>i;
    cout<<"Input the number of the values present in the set B : ";cin>>j;
    if(i<0||j<0) {cout<<"Invalid Input"; exit(0);}

    int ara[i],arb[j];
    cout<<"Input the values for the set A : \n";
    for(a=0;a<i;a++) cin>>ara[a];
    cout<<"Input the values for the set B : \n";
    for(a=0;a<j;a++) cin>>arb[a];

    //This is the code for the difference of the two sets 
    cout<<"Option : \n 1. A-B \n 2. B-A\n";
    cin>>o;
    if(o<0&&o>2){
        cout<<"Invalid Input";exit(0);
    }
    if(i==0||j==0){
        cout<<"Output : \n";
        if(i==0&&o==2){
            for(a=0;a<j;a++) cout<<arb[a];
        }
        else if(j==0&&o==1){
            for(a=0;a<i;a++) cout<<ara[a];
        }
        else cout<<"NULL \n";
        exit(0);
    }
    //The code to calculate intersection in between two sets
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
    //The code that checks for the 
    cout<<"Output : \n";
    if(o==1){ 
        for(a=0;a<i;a++){
            d=0;
            for(b=0;b<c;b++){ 
                if(ara[a]==ari[b]) d=1;
            }
            if(d==0)cout<<ara[a]<<"\n";
        }
    }
    else if(o==2){ 
        for(a=0;a<j;a++){
            d=0;
            for(b=0;b<c;b++){ 
                if(arb[a]==ari[b]) d=1;
            }
            if(d==0)cout<<arb[a]<<"\n";
        }
    }
    else cout<<"Debug";
 
}



