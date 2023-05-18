#include<iostream>
using namespace std;
char arr[100], max_stk=100;
int top = -1; int ch=0;

void display(){
    if(top<0){
        cout<<"\n*********UnderFlow*********";
    }
    int a;cout<<"\nThe Output is given by : ";
    for(a=top;a>=0;a--)cout<<arr[a];
}

void push(){
    if(top+1>=max_stk) cout<<"\n*********OverFlow*********";
    else{
        top=top+1;
        cout<<"\nInput the value to be pushed in an array : ";cin>>arr[top];
        display();
    }
}

void pop(){
    if(top<=-1) cout<<"\n*********UnderFlow*********";
    else{
        top = top-1;
        cout<<"\nThe value to be popped is : "<<arr[top+1];
        display();
    }
}

void free_stack(){
    bool f;
    cout<<"\nThe stack will be freed with this function : \n Are you sure (y/n) : ";cin>>f;
    if(f) top=-1;
    else display();
}

void restart(int ch){
    cout<<"\n\n\n\nOption are as following : \n\t\b-1. Exit \n\t0. Restart \n\t1. Display \n\t2. Push \n\t3. Pop \n\t4.Free Stack \n\t";
    cout<<"\nInput the choice : ";cin>>ch;
    switch(ch){
    case 0:
        restart(ch);
        break;
    
    case 1:
        display();
        break;

    case 2:
        push();
        break;

    case 3:
        pop();
        break;

    case 4:
        free_stack();
        break;

    default:
        if(ch!=-1){cout<<"Wrong Input.";restart(0);}
        else{
            cout<<"\n*****************************************************************************";
            cout<<"\n***********************Thanks For Using this Programme***********************";
            cout<<"\n*****************************************************************************\n";
            exit(0);
        }
        break;
    }
}

int main(){
    cout<<"\n****************************************************************************";
    cout<<"\n******************************Stack With Array******************************";
    cout<<"\n****************************************************************************";
    while(ch<=4){
        restart(ch);
    }
}



