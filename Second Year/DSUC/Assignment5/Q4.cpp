#include<iostream>
using namespace std;

//Write a program in C to implement the solution of Tower of Hanoi problem using Recursion.

void tow_of_hanoi(int, char, char, char);

int main(){
    //Assume there are three rods and number of disks are given by user
    int n;
    cout<<"Input the numbers of disks present on the first rod : ";cin>>n;
    if(n<=0){ cout<<"\nInvalid Input"; exit(0);}
    tow_of_hanoi(n,'A','C','B');
}

void tow_of_hanoi(int n, char a, char c, char b){
    if(n==0) return;
    tow_of_hanoi(n-1,a,b,c);
    cout << "Move disk " << n << " from rod " << a<< " to rod " << c<< endl;
    tow_of_hanoi(n-1,b,c,a);
}


