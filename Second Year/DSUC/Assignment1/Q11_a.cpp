#include<iostream>
using namespace std;

//This code is for to add two array of same size

int main(){
    int a,b,c,d,e,f;
    int i1,i2,j1,j2;
    cout<<"Input the dimention of 2-D Array [i1,j1] and [i2,j2]"; cin>>i1>>j1>>i2>>j2;
    cout<<"Input the elements for the first matrices :\n";
    int ar1[i1][j1],ar2[i2][j2];
    for(a=0;a<i1;a++){
        for(b=0;b<j1;b++) cin>>ar1[a][b];
    }
    cout<<"Input the elements for the next array : \n";
    for(a=0;a<i2;a++){
        for(b=0;b<j2;b++) cin>>ar2[a][b];
    }

    //This code is for the addition of the two matrice

    if(i1==i2 && j1==j2){
        int ar3[i1][j1];
        for(a=0;a<i1;a++){
            for(b=0;b<j1;b++){
                ar3[a][b]=ar1[a][b]+ar2[a][b];
            }
        }

        //This code is for printing the now added 2-D array
        cout<<"Output is given by : \n";
        for(a=0;a<i1;a++){
            for(b=0;b<j2;b++){
                cout<<ar3[a][b]<<" ";
            }
            cout<<"\n";
        }
    }
    else cout<<"The arrays were not compatible for the operation";

}