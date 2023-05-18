#include<iostream>
using namespace std;

//Write a program in C to find factorial of a given number using iterative and recursive methods both.

long int r_fact(long int a){
    if(a==0) return 1;
    return a*r_fact(a-1); 
}

int fact(int a,int b){
    if(a==0) return b;
    else{
        b = b*a;
        a=a-1;
        return fact(a,b);
    }
}

long int i_fact(long int a){
    long int r=1;
    for(;a!=0;a--){
        r=r*a;
    }
    return r;
}

int main(){
    int a,b,c,d;
    cout<<"Input the value for which the factorial is to be calculated for : ";cin>>a;
    // cout<<"The Recursive factorial function : "<<r_fact(a);

    // cout<<"\nThe Iterative factorial function : "<<i_fact(a)<<endl;

    cout<<"Alt : "<<fact(a,1);


}


