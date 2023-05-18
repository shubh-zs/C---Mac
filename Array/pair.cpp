#include <iostream>
using namespace std;

void pear(int arr[],int s, int i){
    int a,b,c,d,e;
    for(a=0;a<s;a++){
        b = arr[a];
        if(b>i) continue;
        for(c=a;c<s;c++){
            if(arr[c]>i) continue;
            // if((arr[c]+b)==i) {(arr[c]!=b)?((arr[c]>b)?(cout<<b<<", "):(cout<<arr[c]<<endl)):(cout<<b<<", "<<arr[c]);break;}
            if((arr[c]+b)==i){ 
                if(arr[c]!=b){
                    if(arr[c]>b) cout<<b<<", "<<arr[c]<<endl;
                    else cout<<arr[c]<<", "<<b<<endl;
                }
                break;
            }
        }
    }
}

int main(){
    int ar[6]={0,1,2,3,4,5};
    pear(ar,5,5);
}
