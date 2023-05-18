#include<iostream>
using namespace std;

int stk[10];
int top = 0;

//In this stack the stack top is the higher number but the bottom is present in  
bool empty(){
    if(top==0) return 1;
    else return 0;
}
void display(){
    if(top<=0) cout<<"**UnderFlow** "<<top;
    else if(top>=10) cout<<"**OverFlow**";
    else{
        for(int a = top;a>=0;a--){   //This funtion will print the recent elements first
            cout<<"\n|"<<stk[a]<<"|";
        }
    }
}
void push(){
    int input;
    cout<<"Input the data : ";cin>>input;
    stk[top] = input;
    top = top+1;
    display();
}
void pop(){
    top=top-1;
    display();
}
void restart(){
    int a;
    cout<<"\nOptions : \n 0.Display \n 1.Empty \n 2.Count Nodes present in the Stack \n 3.Delete \n 4.Insert \n";cin>>a;
    
    switch (a){
    case 0:
        display();
        break;

    case 1:
        cout<<empty();
        break;

    case 2:
        cout<<"\nThe number of nodes present in the Stack are : "<<top<<"\n";
        break;

    case 3:
        pop();
        break;

    case 4:
        push();
        break;

    default:
        cout<<"\nInvalid Input.";
        break;
    }
}

int main(){
    cout<<"********************************************************************************\n";
    cout<<"********************************************************************************\n";
    cout<<"                      The Start of Stack Programme\n";
    cout<<"********************************************************************************\n";
    cout<<"********************************************************************************\n";
    int a = 1;
    while(a!=0){
        if(a==1) restart();
        if(a!=1 && a!=0) cout<<"\nInvalid Input.";
        cout<<"\nRestart? (1/0): ";cin>>a;
    }
    if(a==0){
        cout<<"                  Thanks for using my Programme.\n";
        cout<<"********************************************************************************\n";
        cout<<"********************************************************************************\n";
    }
}


