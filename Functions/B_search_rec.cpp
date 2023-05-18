#include<iostream>
using namespace std;

void b_sear(int ar[],int t,int i, int m, int f,int c){
    cout<<"\ni : "<<i<<" m : "<<m<<" f : "<<f;
    if(i>f){cout<<"\nNot found";exit(0);}
    else{
        if(ar[m]==t){ cout<<"\nfound at index :"<<m;exit(0);}
        else if(t>ar[m]) b_sear(ar,t,m,(m+f)/2,f,c+1);
        else if(t<ar[m])  b_sear(ar,t,i,(i+m)/2,m,c+1);
    }
}

int main(){
    int ar[5] = {1,4,7,12,16}, l = 5;
    b_sear(ar ,16 ,0 ,(int)l/2 ,l,0);
}


