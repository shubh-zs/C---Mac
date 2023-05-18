#include<iostream>
using namespace std;

// This code is for to display the lower triangular of a given matrix
// doubt what is lower triangle matrix

int main(){
    int a,b,c,d,e;
    int i,j; cout<<"Input the values for the dimention of matrice : ";cin>>i>>j;

    int ar[i][j];
    cout<<"Input the values for element in the matrice : \n";
    for(a=0;a<i;a++) for(b=0;b<j;b++) cin>>ar[a][b];

    cout<<"The output is given by : \n";
    if(i==j){
        for(a=0;a<i;a++){
            for(b=0;b<j;b++){
                if(a>b) cout<<ar[a][b]<<" ";
                else cout<<0<<" ";
            }
            cout<<"\n";
        }
    }
}


