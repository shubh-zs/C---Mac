#include<iostream>
using namespace std;

//WAP in C to transpose a given sparse matrix.

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
    if(c<(0.5*i*j)){cout<<"This is not a sparse matrix.";exit(0);}

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
    cout<<"\n\nThe Representation of given sparse matrice is given by : \n";
    for(a=0;a<n;a++){
        cout<<spr[a][0]<<" "<<spr[a][1]<<" "<<spr[a][2];
        cout<<"\n";
    }

    cout<<"\n\nThe transposed Representation of given sparse matrice is given by : \n";
    int tspr[3][n];
    for(a=0;a<n;a++){
        tspr[0][a] = spr[a][0];
        tspr[1][a] = spr[a][1];
        tspr[2][a] = spr[a][2];
    }

    for(a=0;a<3;a++){
        for(b=0;b<n;b++){
            cout<<tspr[a][b]<<" ";
        }
        cout<<"\n";
    }


}
