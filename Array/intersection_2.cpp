#include<iostream>
using namespace std;

void inter(int ar1[],int s1, int ar2[], int s2){
    int a,b,c,d,e;
    for(a=0;a<s1;a++){
        b = ar1[a];
        for(c=0;c<s2;c++){            
            if(b==ar2[c]){
                printf("%d\n",b); 
                ar2[c]= -3;
                break;
            }
            if(ar2[c]>b) break;
        }
    }
}

int main(){
    int a,b,c,d;
    int ar1[6] = {1,2,2,3,3,6};
    int ar2[6] = {1,2,2,2,3,5};
    inter(ar1,6,ar2,6);
}