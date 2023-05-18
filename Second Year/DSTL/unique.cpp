#include<iostream>
using namespace std;

int main(){
    int ar[8] = {1,5,2,3,4,5,2};
    int a,b,c,d,f,l=7;
    int un[l];
    int times[l];
    c=0;
    for(a=0;a<l;a++){
        f=-1;
        for(b=0;b<l;b++){
            if(ar[a]==ar[b]&&ar[a]!=-1) f=f+1;
            if(f==1) ar[a]=-1;
        }
    }
    
}