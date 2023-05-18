#include<iostream>
using namespace std;

// This programme is for to plot the graph for the Hailstorm sequence 
//The complexity is given by O(n)


int main(){
    int var;
    cout<<"Provide the value for to compute hailstorm sequence : ";
    cin>>var;
    cout<<"Output : \n";
    while(var!=1){
        cout<<var<<"\n";
        if((var&1)==0) var=var/2;
        else var= 3*var+1;
    }
    cout<<"1";
}

/*

Provide the value for to compute hailstorm sequence : 10

Output : 
10
5
16
8
4
2
1

*/