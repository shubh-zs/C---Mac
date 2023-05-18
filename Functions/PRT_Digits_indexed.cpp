#include<iostream>
#include<cmath>
using namespace std;
//This programme will print any digit from the given integer indexing starting form back from 1 till the first digit 
//The same variables are used to reduce the usage of space.

int main(){
    long int i,j,a;
    float b,c,d;
    cout<<"Input the value of  i : ";cin>>i;
    j = int(log10(i))+1;
    cout<<i%10<<"\n";
    // for(a=2;a<=j;a++){
    //     b = i%long(pow(10,j))/pow(10,a);  //this number is the value but selected nymber is behind the decimal
    //     c = int((b-int(b))*10); //number form above is taken, subtracted and multiplied by 10 then we remove the deicmal part
    //     cout<<c<<"\n";
    // }
    cout<<"The value of J : "<<j;
}

//The OutPut is given by : 
//Input the number : 123456
//input should be less than equal to 6 : 1
//6
