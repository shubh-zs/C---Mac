#include<iostream>
using namespace std;

//This programme is for to swap value of variable  
//The complexity is given by O(1)


void swap_w_o(int a,int b){
    a = a+b;
    b=a-b;
    a=a-b;
    cout<<"Without third variable : \n";
    printf("A --> %d\nB--> %d",a,b);
}

void swap_w(int a,int b){
    int t = a;
    a=b;
    b=t;
    printf("\n\n\n\n\n\n\n\nWith third variable : \nA --> %d\nB--> %d",a,b);
}

int main(){
    int a,b;
    printf("Provide the variables : a --> ");
    scanf("%d",&a);
    printf("                        b --> ");
    scanf("%d",&b);
    swap_w_o(a,b);
    swap_w(a,b);
}

/*

Output :
Provide the variables : a --> 12
                        b --> 23
Without third variable : 
A --> 23
B--> 12







With third variable : 
A --> 23
B--> 12%      
*/
