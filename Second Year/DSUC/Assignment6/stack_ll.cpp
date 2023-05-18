#include<iostream>
using namespace std;
#include<cstdlib>

struct ll{
    int info;
    struct ll * next;
};
typedef struct ll * nptr;
#define nodeptr nptr
#define null __null
nodeptr start = NULL;

struct ll * getnode(){
    int val;
    nodeptr node = (nodeptr)malloc(sizeof(struct ll));
    cout<<"Enter the value for the new node :";cin>>val;
    node->info = val;
    node->next = NULL;
    return node;
}

int count_nodes(nodeptr n){
    int a;
    for(a=0; n!=NULL ;n = n->next,a++);
    return a;
}

void display(nodeptr n){
    int a,b,l;
    if(start==NULL) {cout<<"\n*****-Underflow Condition-*****\n"; return;}
    // l = count_nodes(n);
    cout<<"\nOutput : []--> ";
    for(;n!=NULL;n=n->next){
        cout<<"|"<<n->info<<"|"<<n->next<<"|";
        if(n->next!=NULL) cout<<" --> ";
    }
    cout<<"\n";
}

void pop(nodeptr n){
    start = start->next;
    display(start);
}

void check_empty(nodeptr n){
    if(n==NULL) cout<<"True";
    else cout<<"False";
}

void push(nodeptr n){
    nodeptr node = getnode();
    node->next = start;
    start = node;
    display(start);
}

void restart(){
    int a;cout<<"\nOptions : \n 0.Display \n 1.Check Empty \n 2.Count Nodes present in the Stack \n 3.Pop \n 4.Push \n";cin>>a;
    switch (a){
    case 0:
        display(start);
        break;

    case 1:
        check_empty(start);
        break;

    case 2:
        cout<<"\nThe number of nodes present in the Stack are : "<<count_nodes(start)<<"\n";
        break;

    case 3:
        pop(start);
        break;

    case 4:
        push(start);
        break;
     
    default:
        cout<<"\nInvalid Input.";
        break;
    }
}

int main(){
    cout<<"********************************************************************************\n";
    cout<<"********************************************************************************\n";
    cout<<"            The Start of Stack Using The Linked List Programme\n";
    cout<<"********************************************************************************\n";
    cout<<"********************************************************************************\n";
    start = getnode();
    display(start);
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



