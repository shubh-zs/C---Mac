#include<iostream>
using namespace std;

void hello(int a){
    cout<<"hello : "<<a;
    if(a==0){
        exit(1);
    }
    a=a-1;
    hello(a);
}

int main(){
    int l[7] = {55,55,55,55,55};
    int a,b,c,d=0;
    int max = l[0],sec_max = max;
    for(a=0;a<5;a++){
        if(max<l[a]){ 
            if(d>1) sec_max = max;
            cout<<"\nsecond max = "<<sec_max<<"   max = "<<max;
            max = l[a];
            d=d+1;
            
        }
        if(max>l[a] && sec_max<l[a]){
            sec_max = l[a];            
            cout<<"\nin";
        }
    }
    cout<<"\nsecond max = "<<sec_max;
}



//This is for the cut function in the linked list programme 