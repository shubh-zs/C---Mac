#include<iostream>
using namespace std;

//This code is for to transpose of a given matrix

int main(){
    int a,b,c,d,e;

    int i,j; cout<<"Input the dimention of the matrix : ";cin>>i>>j;
    int ar[i][j] , art[j][i];
    cout<<"Input the values for the elements in the matrix : \n";
    for(a=0;a<i;a++) for(b=0;b<j;b++) cin>>ar[a][b];


    //This loop is for the transposition of a matrice 
    for(a=0;a<j;a++) for(b=0;b<i;b++) art[a][b] = ar[b][a];

    cout<<"After transposion : \n";
    for(a=0;a<j;a++){
        for(b=0;b<i;b++){
            cout<<art[a][b]<<" ";
        }
        cout<<"\n";
    }
}

