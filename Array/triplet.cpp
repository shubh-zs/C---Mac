#include <iostream>
using namespace std;

void pear(int arr[],int s, int i){
    int a,b,c,d,e;
    for(a=0;a<s;a++){
        b = arr[a];
        if(b>i) continue;
        for(c=a;c<s;c++){
            d = arr[c]+b;
            if(d>i||arr[c]==b) continue;
            for(e=c;e<s;e++)
                if((arr[e]+d)==i&&arr[e]!=b&&arr[e]!=arr[c]){ 
                    cout<<b<<", "<<arr[c]<<", "<<arr[e]<<"\n";
                    break;
            }
        }
    }
}

int main(){
    int ar[6]={0,1,2,3,4,5};
    pear(ar,6,6);
}
