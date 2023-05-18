#include<iostream>
using namespace std;
#define nu __null

struct node{
    int v,r,c;
    struct node * next;
};
typedef struct node * nodeptr;
typedef struct node node;
nodeptr start = nu;

void push(int r,int c,int v){
    nodeptr np = start;
    nodeptr n  = (nodeptr)malloc(sizeof(node));
    n->v = v;
    n->r = r;
    n->c = c;
    n->next = nu;
    if(np == nu){
        start = n;
    }
    else{
        for(;np->next!=nu;np=np->next);
        np->next = n;
    }
}

void display(){
    cout<<"\nOutput : []--> ";
    for(nodeptr n = start;n!=nu;n=n->next){
        cout<<"|"<<n->v<<"|"<<n->r<<"|"<<n->c<<"|"<<n->next<<"|";
        if(n->next!=NULL) cout<<" --> ";
    }
    cout<<"\n";
}

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

    //This code written below is for the linked list representation of the sparse matice
    push(i,j,(i*j)-z);
    for(a=0;a<i;a++){
        for(b=0;b<j;b++){
            if(ar[a][b]!=0){
                push(a,b,ar[a][b]);
            }
        }
    }

    //This code is for to print the linked list
    display();
}






