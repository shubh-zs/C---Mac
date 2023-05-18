#include<iostream>
using namespace std;

// This code is for the multiplication of two square Matrice

int main(){
    int a,b,c,d,e;
    int i1,i2,j1,j2;

    cout<<"Input the values for the dimention of the matrices : [i1,j1]  [i2,j2] : ";cin>>i1>>j1>>i2>>j2;
    if(i1<3||j1<3||j2<3||i2<3){ cout<<"Input Dimentions less than 3"; exit(0);}
    int ar1[i1][j1], ar2[i2][j2];

    cout<<"Input the values for the elements for 1st matrix : \n";
    for(a=0;a<i1;a++) for(b=0;b<j1;b++) cin>>ar1[a][b];
    cout<<"Input the values for the elements for 2nd matrix : \n";
    for(a=0;a<i1;a++) for(b=0;b<j1;b++) cin>>ar2[a][b];

    if(j1==i2){
        int ar3[i1][j2];
        for(a=0;a<i1;a++){
            for(b=0;b<j2;b++){
                ar3[a][b]=0;
                for(c=0;c<j1;c++){
                    ar3[a][b] += ar1[a][c]*ar2[c][b];
                }
            }
        }
        
        cout<<"Output : \n";
        for(a=0;a<i1;a++){
            for(b=0;b<j2;b++){
                cout<<ar3[a][b]<<" ";
            }
            cout<<"\n";
        }
    }
}



