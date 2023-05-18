#include<iostream>
using namespace std;

int acks(int m, int n){
    if(m==0) return n+1;
    else if(m>0 && n==0) return acks(m-1,1);
    else if(m>0 && n>0) return acks(m-1,acks(m,n-1));
    else return -12321;
}

int main(){
    int a,b;
    cout<<"**Assuming that the number are not negative\n";
    cout<<"Input the number for to calculate the output of Ackerman's Function : ";
    cin>>a>>b;
    cout<<"The output of this recursive function is given by : "<<acks(a,b)<<endl;
}


