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
nodeptr front = NULL;
nodeptr rear = NULL;
int r=1;

struct ll * getnode(){
    int val;
    nodeptr node = (nodeptr)malloc(sizeof(struct ll));
    cout<<"Enter the value for the new node :";cin>>val;
    node->info = val;
    node->next = NULL;
    return node;
}
int count_nodes() { return r;}

void display(nodeptr n){
    int a,b,l;
    if(front==NULL) {cout<<"\n*****-Underflow Condition-*****\n"; return;}
    // l = count_nodes(n);
    cout<<"\nOutput : []--> ";
    for(;n!=NULL;n=n->next){
        cout<<"|"<<n->info<<"|"<<n->next<<"|";
        if(n->next!=NULL) cout<<" --> ";
    }
    cout<<"\n";
}
void dequeue(){
    front = front->next;
    cout<<"\nItem Popped.";
    display(front);
    r=r-1;
}
bool empty(nodeptr n){
    if(n==NULL) return true;
    else return false;
}
void insert(){
    rear->next = getnode();
    rear = rear->next;
    display(front);
    r = r+1;
}
void restart(){
    int a;
    cout<<"\nOptions : \n 0.Display \n 1.Empty \n 2.Count Nodes present in the Queue \n 3.Delete \n 4.Insert \n";cin>>a;
    switch (a){
    case 0:
        display(front);
        break;
    case 1:
        cout<<empty(front);
        break;
    case 2:
        cout<<"\nThe number of nodes present in the Queue are : "<<count_nodes()<<"\n";
        break;
    case 3:
        dequeue();
        break;
    case 4:
        insert();
        break;
    default:
        cout<<"\nInvalid Input.";
        break;
    }
}

int main(){
    cout<<"********************************************************************************\n";
    cout<<"********************************************************************************\n";
    cout<<"            The Start of Queue Using The Linked List Programme\n";
    cout<<"********************************************************************************\n";
    cout<<"********************************************************************************\n";
    front = rear = getnode();
    display(front);
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



