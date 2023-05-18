#include<iostream>
using namespace std;

// This programme is for to print the pair of numbers whose sum is odd for the limit till the input number provided by the user.
//The complexity is given by O(n²)

int main(){
    int a,b,c,i;
    cout<<"Provide the number till which the pair are checked : ";
    cin>>i;
    cout<<"Output : \n";
    for(c=1;c<=i;c++){
        for(b=2;b<=i;b++){
            if(((c+b)&1)==1)
                cout<<"["<<c<<","<<b<<"]\n";
        }
    }

}

/*
Provide the number till which the pair are checked : 5
Output : 
[1,2]
[1,4]
[2,3]
[2,5]
[3,2]
[3,4]
[4,3]
[4,5]
[5,2]
[5,4]
*/