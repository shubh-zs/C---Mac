#include<iostream>
using namespace std;

//WAP in C for multiplication of two sparse matrices.


int main(){
    int a,b,c,d,e;
    int i1,j1,i2,j2,z1,n1,z2,n2;
    //This code is for the User defined array
    cout<<"Input the value for the dimention of the array : ";cin>>i1>>j1>>i2>>j2;
    int ar1[i1][j1];

    cout<<"Input the values for the element of array : \n";
    for(a=0;a<i1;a++) for(b=0;b<j1;b++) cin>>ar1[a][b];

    //This code is for to check if the array is a sparse matrix or not
    for(a=0,z1=0;a<i1;a++){
        for(b=0;b<j1;b++) {
            if(ar1[a][b]==0)z1++;
        }
    }
    for(a=0,z2=0;a<i2;a++){
        for(b=0;b<j2;b++) {
            if(ar1[a][b]==0)z2++;
        }
    }
 
    if(z1<(0.5*i1*j1)||z2<(0.5*i2*j2)){
        cout<<"The input matrice are not sparse.";exit(0);
    }

    if(j1==i2){

    }
}
