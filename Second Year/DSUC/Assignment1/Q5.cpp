#include<iostream>
using namespace std;

//This programme is for to print the array where 
//the element of array is the sum of every element present in the array except the number itself
//The complexity is given by O(4n)

void print_arr(int p[],int l){
    int a,b,c;
    cout<<"[";
    for(a=0;a<l;a++){
        if(a==l-1){
            cout<<p[a];
        }
        else cout<<p[a]<<",";
    }
    cout<<"]\n";
}

void uda(int ar[],int len){
    cout<<"Provide the elements to be inserted inside of an array : \n";
    for(int a=0;a<len;a++){
        cin>>ar[a];
    }
}

int main(){
    int a,b,c,d,l;
    cout<<"Input the size of the array : ";
    cin>>l;
    int p[l]; uda(p,l);
    
    for(a=0,b=0;b<l;b++){
        a+=p[b];
    }

    for(b=0;b<l;b++){
        p[b] = a-p[b];        
    }

    print_arr(p,l);

}

/*
Output :
Input the size of the array : 6
Provide the elements to be inserted inside of an array : 
4
2
1
3
5
6
[17,19,20,18,16,15]

*/