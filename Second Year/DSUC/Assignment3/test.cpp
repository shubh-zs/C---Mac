#include<iostream>
using namespace std;

//WAP in C to represent a sparse matrix using structure in C.

struct sparse{
    int r;
    int c;
    int v;
};
typedef struct sparse sp;

char ar_char[100];
int cou = 0;

int create_arr(){
    char a = 65;
    for(int b=0;b<25;b++){
        a=a+b;
        // sp a;
        ar_char[b] = a;
    }
}
void create_sp(int v,int r, int c){
    sp ar_char[cou];
    ar_char[cou].c = c;
    ar_char[cou].r = r;
    ar_char[cou].v = v;
    cou=cou+1;

}
void main(){
    char ch = 65;
    for(int b=0;b<25;b++){
        ch=ch+b;
        ar_char[b] = ch;
    }
    //this has a limit of only accomodating 25 values
    int ar[5] = {1,2,0,1,3};
    int a,b,c;
    for(a=0;a<5;a++){
        if(ar[a]!=0){
            create_sp(ar[a],0,a);
        }
    }
    for(a=0;a<cou;a++){
        // cout<<"\nValue : "<<ar_char[cou].v;
    }
}