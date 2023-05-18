#include<iostream>
using namespace std;

struct node{
    struct node * prev;
    int data;
    struct node * next;
};
typedef struct node * nptr;
typedef struct node node;
#define null __null

nptr start = null;

nptr getnode(){
    nptr first = (nptr)malloc(sizeof(node));
    int data;
    cout<<"\nInput the data to present in the node : ";cin>>data;
    first->prev = null;
    first->data = data;
    first->next = null;
    return first;
}

void p_nodes(){
    nptr n = start;
    if(start==null){cout<<"**--**UnderFlow**--**"; exit(0);}
    cout<<"\nOutput : \n []--> ";
    while(n!=null){
        cout<<"|"<<n->data<<"|"<<n->next<<"|";
        if(n->next!=null) cout<<"--> ";
        n=n->next;
    }
}

void p_nodes_back(){
    nptr n = start;
    nptr b;
    while(n->next!=null) n=n->next;
    b = n;
    cout<<"\nBack Output : \n []--> ";
    while(b!=start){
        cout<<"|"<<b->data<<"|"<<b->next<<"|";
        if(b->prev!=start) cout<<"--> ";
        b=b->prev;
    }
}

void ins_node_first(){
    nptr new_n = getnode();
    new_n->next = start;
    start = new_n;
    p_nodes();
}

void ins_node_last(){
    nptr new_n = getnode();
    nptr n = start;
    while(n->next!=null) n = n->next;
    n->next = new_n;
    new_n->prev = n;
    p_nodes();
}

void del_node_first(){
    start = start->next;
    p_nodes();
}

void del_node_last(){
    nptr n = start;
    while(n->next->next!=null) n = n->next;
    n->next = null;
    n->next->next->prev = null;
    p_nodes();
}

int main(){
    start = getnode();
    p_nodes();
    ins_node_first();
    ins_node_last();
    p_nodes_back();
    

}

