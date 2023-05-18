#include<iostream>
using namespace std;

char arr[10], m = 10;
int top = -1;

void display(){
    if(top<=-1) cout<<"\nUnderflow";
    else for(int a=top;a>=0;a--) cout<<arr[a];
}

void push(){
    if(top>=m) cout<<"\nOverflow";
    else{
        char i; cout<<"\nInput the alphabet : "; cin>>i;
        if(top<=-1){
            top = 0;
            arr[top] = i;
        }
        else{
            top = top+1;
            arr[top] = i;
        }
    }
}
void pop(){
    if(top<=-1) cout<<"\nUnderflow";
    else top = top-1;
}

void free(){
    char i;
    cout<<"\nAll memory will be lost!! (Y/N)? : ";cin>>i;
    if(i=='y'||i=='Y') top = -1;
}

int main(){
    push();
    push();
    push();
    push();
    display();
    push();
    pop();
    display();
    free();
    display();

}