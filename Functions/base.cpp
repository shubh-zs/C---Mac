#include<iostream>
#include<math.h>
using namespace std;
long int dec(long int i){
    long int ans=0;
    int c=0,a;
    for(;i>0;i=i/10,c++){
        a = i&1;
        ans = ans+a*pow(2,c);
        printf("%d\n",a);  
    }
    return ans;
}
long int bin(int i){
    long int ans=0;
    int b,c= 0;
    for(;i>0;i=i>>1,c++){
        b=i&1;
        ans = ans+b*pow(10,c);
    }
    return ans;
}
int main(){
    long int a,b,c,d;
    a = 1024;
    b = 100000000000000000;
    printf("\n\n\n\n\n%ld\n",dec(b));
    // printf("%ld",bin(a));

}