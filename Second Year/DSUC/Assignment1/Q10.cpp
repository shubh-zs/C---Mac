#include<iostream>
using namespace std;

//This programme is for to output min and max value present inside an array
//The complexity is given by O(2n)

int main(){
    int a,b,c,d,l;
    cout<<"Input the length of array : "; cin>>l;
    int ar[l+1];
    for(a=0;a<l;a++) cin>>ar[a];
    int min = ar[0],max = ar[0];
    
    for(a=0;a<l;a++){
        if(min>ar[a]) min=ar[a];
        if(max<ar[a]) max=ar[a];
    }
    cout<<"The Maximum Value present in Array is : "<<max;
    cout<<"\nThe Minimum Value present in Array is : "<<min;

    
}


