#include<iostream>
// #include <bits/stdc++.h>
using namespace std;
int arr[200];
int freq[200];
int hash_no(int a){
    return a-1;
}

int main(){
    int a,b,c,d;
    int mat[10] = {5,4,3,4},n=4,k=3;
    for(a=0;a<*max_element(mat, mat + n);a++) freq[a]=1;


    for(a=0;a<n;a++){
        if(arr[mat[a]]!=mat[a]){
            arr[mat[a]] = mat[a];
        }
        else{
            c=0;
            freq[mat[a]] +=1;
        }
        if(freq[mat[a]]==k){
            c=1;
            cout<<arr[mat[a]];break;
        }
    }
    if(c==0) cout<<-1;

}
