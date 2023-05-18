#include<iostream>
using namespace std;

//This code is for to find sum of rows of a Matrix

int main(){
    int a,b,c,d,e;
    int i,j;cout<<"Input the value for dimentions of the matrice : ";cin>>i>>j;

    int ar[i][j];
    cout<<"Input the values for the element in the matrice : \n";
    for(a=0;a<i;a++) for(b=0;b<j;b++) cin>>ar[a][b];
    int ars[i];
    for(a=0;a<i;a++){
        c = 0;
        for(b=0;b<j;b++){
            c+=ar[a][b];
        }
        ars[a]=c;
    }

    cout<<"The output is given for every row is : \n";
    for(a=0;a<i;a++){
        cout<<"For row "<<a<<" the sum is "<<ars[a]<<"\n";
    }
}

