#include<iostream>
using namespace std;

//This programme is to print the largest variable among 3
//The complexity is given by O(1)

int main(){
    int a,b,c,l;
    cout<<"Provide the value for the variables a,b,c : ";
    cin>>a>>b>>c;
    l = (a>b)?((a>c)?a:c):((b>c)?b:c);
    cout<<"The largest variable is : "<<l;
}
/*
Output : 
Provide the value for the variables a,b,c : 23 12 45
The largest variable is : 45

*/