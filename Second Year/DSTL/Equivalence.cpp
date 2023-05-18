#include<iostream>
using namespace std;

int main(){
    int a,b,c,d,i,j;
    printf("Input the number of the values present in the set : ");scanf("%d",&i);
    if(i<=0){ printf("No Input in the set. Not Defined!!");exit(0);}
    int ar[i],mat[i][i];
    printf("Name of the nodes : ");
    for(a=0;a<i;a++) scanf("%d",&ar[a]);
    printf("Fill the choice for the relation : \n");
    for(a=0;a<i;a++){
        for(b=0;b<i;b++){
            j=-1;
            while(j!=0&&j!=1){
                printf("\n(",ar[a],",",ar[b],") ?(1/0) : ");scanf("%d",&j);
                if(j==1||j==0) mat[a][b] = j;
                else printf("Invalid Input");
            }
        }
    }

    //For Reflexive
    j=1;c=0;
    printf("\nStatus for Refexive : ");
    while((j!=0)&&c<i){
        j = mat[c][c];
        c=c+1;
    }
    if(j==1){
        printf("True\n\tStatus for Symmetric : ");

        //For Symmetric
        for(a=0;a<i;a++){
            for(b=0;b<i;b++){
                if((mat[a][b]==1)&&(mat[b][a]!=1)){j=0;break;}
            }
        }
        if(j==1){
            printf("True\n\t\tStatus for Transitive : ");
            //for transitive
            for(a=0;a<i;a++){
                for(b=0;b<i;b++){
                    if(mat[a][b]==1){
                        for(c=0;c<j;c++){
                            if((mat[b][c]==1)&&mat[a][c]!=1){ j=0;break;}
                        }
                    }
                }
            } 
        }
    }
    if(j==1) printf("True \n\nThe matrix is equivalence.");
    else printf("False.\nNO! This input relation is not a Equivalence Relation.");
}




