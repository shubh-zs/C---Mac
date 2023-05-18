#include<iostream>
#include<cstdlib>
using namespace std;

struct ll{
    int info;
    struct ll * next;
};
typedef struct ll * nptr;
#define nodeptr nptr
#define null __null
nodeptr start = NULL;
nodeptr sor = NULL;
int flag_for_edge_sort=0;

void display(nodeptr n,int o=1){
    int a,b,l;
    if(start==NULL) {cout<<"\n*****-Underflow Condition-*****\n"; return;}
    // l = count_nodes(n);
    if(o==1) cout<<"\nOutput : ";
    cout<<"[]--> ";
    for(;n!=NULL;n=n->next){
        cout<<"|"<<n->info<<"|"<<n->next<<"|";
        if(n->next!=NULL) cout<<" --> ";
    }
    cout<<"\n";
}

nptr getnode(){
    int val;
    nodeptr node = (nodeptr)malloc(sizeof(struct ll));
    cout<<"Enter the value for the new node :";cin>>val;
    node->info = val;
    node->next = NULL;
    return node;
}


void gnode(int info){//This programme 
    nptr ne = (nodeptr)malloc(sizeof(struct ll));
    ne->info = info;
    ne->next = null;
    if(sor==null) sor = ne;
    else{
        ne->next = sor;
        sor = ne;
    }
    cout<<"\n\t\t\t\tInput : "<<info;
}

int count_nodes(nodeptr n){
    int a;
    for(a=0; n!=NULL ;n = n->next,a++);
    return a;
}


void freenode(nodeptr n){
    start = n->next;
    free(n);
    cout<<"The node now has ceased to exist.";
    display(start);
}

bool empty(){
    if(start==NULL) return true;
    else return false;
}

void insert_first(){
    nodeptr n = start;
    nodeptr node = getnode();
    node->next=n;
    start=node;
    display(start);
}

void insert_last(){
    nodeptr node = getnode();
    nodeptr n = start;
    while(n->next!=NULL) n=n->next;
    n->next=node;
    display(start);
}

void insert_loc(){
    nodeptr n = start;
    nodeptr node = getnode();
    int a=1,x,y,f=0;
    cout<<"\nHow to find the node? \n 1. Location of the node in the list( Number of nodes : "<<count_nodes(start)<< 
          ")\n 2. Info present in the node (assuming every element has unique info)\n";cin>>x;
    if(x==1){
        cout<<"\nPosition of the node from the start : ";cin>>y;
        if(y==0){
            node->next = n;
            start = node;
            display(start);
        }
        else if(y<=count_nodes(start)){
            for(;n!=NULL;a++,n=n->next){
                if(a==y){
                    node->next=n->next;
                    n->next=node;
                    display(start); 
                    break;       
                }
            }        
        }
        else{
            cout<<"\nInvalid Input. As the length of list is less than the input location "<<a;
        }
    }
    else if(x==2){
        cout<<"Info present in the node : ";cin>>y;
        for(;n!=NULL;n=n->next){
            if(y==n->info){
                f=1;
                node->next = n->next;
                n->next = node;
                break;
            }
        }
        display(start);
        if(f==0){
            cout<<"\nInvalid Input. As the input data is not found in any of node present in the list.";
        }
    }
    else{
        cout<<"\nInvalid Input.";
    }

}

void insert_sort(nodeptr n){
    int a,b=0,c=0;
    nodeptr node = getnode();
    cout<<"How to insert the node into the list? \n 1. Acending Order \n 2. Decending Order\n";cin>>a;
    if(a!=1&&a!=2) cout<<"\nInvalid Input.";
    else if(count_nodes(start)==0){
        start = node;
        display(start);
    }
    else if((a==1&&n->info>node->info)||(a==2&&n->info<node->info)){
        node->next=n;
        start=node;
        display(start);
    }
    else if(a==1){
        for(;n->next!=NULL&&n->next->info<node->info;){
            n = n->next;
        }
        node->next = n->next;
        n->next = node;
        display(start);
    }
    else if(a==2){
        for(;n->next!=NULL&&n->next->info>node->info;){
            n = n->next;
        }
        node->next = n->next;
        n->next = node;
        display(start);
    }
    else{
        cout<<"\nSomethings wrong : a : "<<a<<"  n : "<<n;
    }
}

void delete_first(bool f){
    nodeptr n = start;
    start = start->next;
    n->next = null;
    if(f){
        cout<<"\nThe element to be deleted is : ";
        display(n,0);
        display(start);
    }

}

void delete_last(bool f){
    nodeptr n = start;
    for(;(n->next)->next!=null;n=n->next);
    if(f){
        cout<<"\nThe element to be deleted is : ";
        display(n->next,0);
    }
    n->next = null;
    if(f) display(start);
}

void delete_loc(bool flag, int loc){                                         //This is not working as intended
    nodeptr n0 = start;
    nodeptr n1 = start;
    int a,x,y,f=0;
    if(start==null) display(start);
    if(flag){
        cout<<"\nHow to find the node? \n 1. Location of the node in the list( Number of nodes : "<<count_nodes(start)
            << ")\n 2. Info present in the node (assuming every element has unique info)\n";cin>>x;
    }
    else x=1;
    if(x==1){
        if(flag){cout<<"\nPosition of the node from the start : ";cin>>y;}
        else y=loc;
        // if(y==0) cout<<"\nInvalid Input.";
        if(y<=count_nodes(start)){
            for(x=0;n0!=NULL;n1=n0,n0=n0->next,x++){
                if(x==y){
                    if(n0->next!=null&&start!=n0){
                        n1->next = n0->next;
                        n0->next = null;
                        if(flag){
                            cout<<"\nThe element to be deleted is : ";
                            display(n0,0);
                            display(start);
                        }
                        break;
                    }
                    else if(n0==start) delete_first(flag);
                    else if(n0->next==null){
                        delete_last(flag);
                        if(!flag&&start!=null) flag_for_edge_sort=1;
                    }
                    else cout<<"\nUnknown Edge Case.";
                }
            }
        }   
        else{
            cout<<"\nInvalid Input. As the length of list is less than the input location "<<a;
        }
    }
    else if(x==2){
        cout<<"Info present in the node : "; cin>>y;
        for(;n0!=NULL;n1=n0,n0=n0->next){
            if(n0->info==y){  f=1;//This flag is for to check if the value is actually present
                if(n0->next!=null&&start!=n0){
                    n1->next = n0->next;
                    n0->next = null;
                    cout<<"\nThe element to be deleted is : ";
                    display(n0,0);

                    display(start);
                    break;
                }
                else if(n0==start) delete_first(1);
                else if(n0->next==null) delete_last(1);
                else cout<<"\nUnknown Edge Case.";
            }
        }
        if(f==0){
            cout<<"\nInvalid Input. As the input data is not found in any of node present in the list.";
        }
    }
    else{
        cout<<"\nInvalid Input.";
    }

}

void sort(){
    nptr n1=start,n2=n1;
    int m=start->info,a=0,b,c=0;
    for(;n1!=null;n1=n1->next,a++){
        m = n1->info;
        for(n2=n1,b=0;n2!=null;n2=n2->next,b++){
            if(m<n2->info){
                m=n2->info;
                c=b-a;
            }
        }
        delete_loc(0,c);
        gnode(m);
        display(sor);
    }
    cout<<"\n\n\nremaining start : ";display(start);
}

void restart(){
    int a;
    cout<<"\nOptions : \n 0.Display \n 1.Free Node \n 2.Empty \n 3.Count Nodes present in the Linked list \n 4.Insert at First Position"
    " \n 5.Insert at Last Position \n 6.Insert at Given Location \n 7.Insert Sort \n 8.Sort The Linked List \n 9.Delete First Node \n"
    " 10.Delete Last Node \n 11.Delete Node at Given Location \n";cin>>a;
    
    switch (a){
    case 0:
        display(start);
        break;

    case 1:
        freenode(start);
        break;

    case 2:
        cout<<empty();
        break;

    case 3:
        cout<<"\nThe number of nodes present in the linked list are : "<<count_nodes(start)<<"\n";
        break;

    case 4:
        insert_first();
        break;
    
    case 5:
        insert_last();
        break;
    
    case 6:
        insert_loc();
        break;
    
    case 7:
        insert_sort(start);
        break;

    case 8:
        sort();
        break;

    case 9:
        delete_first(0);
        break;
    
    case 10:
        delete_last(0);
        break;
    
    case 11:
        delete_loc(1,0);
        break;
    
    default:
        cout<<"\nInvalid Input.";
        break;
    }
}

int main(){
    cout<<"********************************************************************************\n";
    cout<<"********************************************************************************\n";
    cout<<"                The Start of The Linked List Programme\n";
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
    // insert_first();
    // insert_first();
    // insert_first();
    // insert_first();
    // insert_first();


    // sort();

}







// 3 1 5 4 2
// 1 3 5 4 2
// 1 2 5 4 3
// 1 2 4 5 3
// 1 2 3 5 4



