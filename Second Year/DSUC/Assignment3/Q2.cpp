
// WAP in C to represent a sparse matrix using 2D array in which there are three rows named as
// Row: Index of row, where non-zero element is located
// Column: Index of column, where non-zero element is located
// Value: Value of the non-zero element located at index – (row, column)

//The time complexity is given by O(3n²+n)

#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,e;
    int i,j,z,n;
    //This code is for the User defined array
    cout<<"Input the value for the dimention of the array : ";cin>>i>>j;
    int ar[i][j];

    cout<<"Input the values for the element of array : \n";
    for(a=0;a<i;a++) for(b=0;b<j;b++) cin>>ar[a][b];

    //This code is for to check if the array is a sparse matrix or not
    for(a=0,z=0;a<i;a++){
        for(b=0;b<j;b++) {
            if(ar[a][b]==0)z++;
        }
    }
    if(z<(0.5*i*j)){cout<<"The input matrice is not a Sparse matrice."; exit(0);}             //This matrix is not a Sparse matrix
    //This is the code is for the Representation of Sparse Matrice
    n = (i*j)-z+1;
    int spr[n][3];     //This is the array that is going to represent a sparse matrix
    spr[0][0] = i;
    spr[0][1] = j;
    spr[0][2] = n-1;

    for(a=1,c=0;c<i;c++){
        for(d=0;d<j;d++){
            if(ar[c][d]!=0){
                spr[a][0] = c;
                spr[a][1] = d;
                spr[a][2] = ar[c][d];
                a++;     
            }
        }
    }
    cout<<"\n\n";
    for(a=0;a<n;a++){
        cout<<spr[a][0]<<" "<<spr[a][1]<<" "<<spr[a][2];
        cout<<"\n";
    }
}




