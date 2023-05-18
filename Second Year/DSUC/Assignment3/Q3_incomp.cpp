#include<iostream>
using namespace std;

//WAP in C to represent a sparse matrix using structure in C.

struct sparse{
    int r;
    int c;
};
typedef struct sparse sp;
int  n=0;
void create(){
    cout<<"\ncreate : "<<n;
}

void create(int n,int v, int r, int c){
    
}

int main(){
    int a,b,c,d,e;
    int i,j,z;
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

    //This is the array where the value is present and every object is having its Row and Column Value
    n = (i*j)-z+1;
    create();


    // sp val[n]={n-1};
    // val[0].r = i;
    // val[0].c = j;
    // d=1;

    // for(a=0;a<i;a++){
    //     for(b=0;b<j;b++){
    //         if(ar[a][b]!=0){
    //             val[d] = ar[a][b];
    //             val[d].r = a;
    //             val[d].c = b;
    //             d=d+1;
    //         }
    //     }
    // }

    // for(a=0;a<n;a++){
    //     cout<<val[a]<<" "<<val[a].r<<" "<<val[a].c;
    //     cout<<"\n";
    // }
    
}