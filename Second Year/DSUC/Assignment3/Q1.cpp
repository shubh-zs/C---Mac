#include<iostream>
using namespace std;

//WAP in C to check whether a given matrix is a sparse matrix or not. (If the number of zeros' is
// greater than 50% of the total elements, then the matrix can be called sparse matrix.)

//The time complexity is given by O(2n²)

int main(){
    int a,b,c,d,e;
    int i,j;

    //This code is for the User defined array
    cout<<"Input the value for the dimention of the array : ";cin>>i>>j;
    if(i<=0||j<=0){ cout<<"This programme is not possible.";exit(0);}
    int ar[i][j];

    cout<<"Input the values for the element of array : \n";
    for(a=0;a<i;a++) for(b=0;b<j;b++) cin>>ar[a][b];

    //This code is for to check if the array is a sparse matrix or not
    for(a=0,c=0;a<i;a++){
        for(b=0;b<j;b++) {
            if(ar[a][b]==0)c++;
        }
    }
    if(c>=(0.5*i*j)) cout<<"This matrix is a Sparse matrix.";
    else cout<<"This matrix is not a sparse matrix.";
}






