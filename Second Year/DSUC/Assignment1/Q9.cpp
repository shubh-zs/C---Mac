#include<iostream>
using namespace std;

//This programme is to append a value into a sorted array so that the array may remain sorted
//The complexity is given by O(2n+n²)

int main(){
    int a,b,c=0,d,l;
    cout<<"Input the length of array : "; cin>>l;
    int ar[l+1];

    cout<<"Input the numbers in a sorted fashion : \n";
    for(a=0;a<l;a++) cin>>ar[a];
    cout<<"Input the number to be appended : ";cin>>d;
    for(a=0;a<l;a++){
        if(ar[a]>d){
            for(b=l-1;b>=a;b--){
                ar[b+1]=ar[b];
            }
            c=1;
            ar[a]=d;
            break;
        }
    }
    if(c==0) ar[l]=d;
    cout<<"Output : \n";
    for(a=0;a<l+1;a++) cout<<ar[a]<<"\n";
}

/*
Input the length of array : 6 
1
2
3
4
6
7
Input the number to be appended : 5
Output : 
1
2
3
4
5   
6
7
*/