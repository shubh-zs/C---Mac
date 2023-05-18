#include<iostream>
using namespace std;

//This code is for to find sum of right diagonals of a matrix

int main(){
    int a,b,c,d,e;
    int i,j; cout<<"Input the values for the dimentions of the matrice : ";cin>>i>>j;

    int ar[i][j];
    cout<<"Input the values for the elements of the matrice : \n";
    for(a=0;a<i;a++) for(b=0;b<j;b++) cin>>ar[a][b];

    if(i==j){
        for(a=0,c=0;a<i;a++) c+=ar[a][i-a-1];
        cout<<"The sum of diagonal element of the input matice is given by : "<<c;
    }
    else cout<<"The operation is not applicable on the given matrix.";
}


