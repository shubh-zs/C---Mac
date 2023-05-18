#include<iostream>
using namespace std;

void inter(int ar1[],int s1,int ar2[],int s2){
    int a,b,c,d,e;
    for(a=0;a<s1;a++){
        b = ar1[a];
        for(c=0;c<s2;c++){
            d = ar2[c];
            if(b==d) cout<<b<<"\n";
        }
    }
}
int main(){
    int i,a,b,c,d;
    int ar1[5]={1,2,3,4,5};
    int ar2[5]={3,4,5,6,7};
    inter(ar1,5,ar2,5);

}