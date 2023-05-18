#include<iostream>
using namespace std;

//This code is for the summation of every element present in the matrix

int main(){
    int a,b,c,d,e;
    int i,j; cout<<"Input the value for the dimention of the matrix : ";cin>>i>>j;
    int ar[i][j];
    cout<<"Input the values for the element present in the matrix : \n";
    for(a=0;a<i;a++) for(b=0;b<j;b++) cin>>ar[a][b];

    for(a=0,c=0;a<i;a++) for(b=0;b<j;b++) c+=ar[a][b];
    cout<<"The sum of every element present in the matrix is "<<c;

}