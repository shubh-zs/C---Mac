#include<iostream>
using namespace std;

struct node{
    int info;
    struct node *left;
    struct node *right;
};

typedef struct node node;
typedef struct node * nodeptr;

#define null __null
nodeptr root = null;

nodeptr mk_tree(){
    int data;
    nodeptr leaf = (nodeptr) malloc(sizeof(node));
    cout<<"\nInput to the leaf node : ";cin>>data;
    leaf->info=data;
    leaf->left=leaf->right=null;
    return leaf;
}

void restart(nodeptr);

void set_left(nodeptr n){                    //ins_left is different
    if(n==null) cout<<"\nThe node is null";
    else if(n->left==null){
        cout<<"Current Leaf : "<<n->info<<" and you are inserting to the Left";
        n->left = mk_tree();
    }
    else if(n->left!=null){
        cout<<"\nThe node's left field is already full with info : "<<n->info<<" left :"<<n->left->info;
        bool y,f=0;
        cout<<"\nDo you want to stop AT : "<<n->info<<"? (1/0) : ";cin>>y;
        if(!y){ cout<<"\n Or maybe go to the left and then insert a leaf node? (1/0) : ";cin>>f;}
        if(y&&!f) restart(n);                     //This means that the node is still at the current state where left is filled
        else{                                     //If user has put 0 to y and 1 to f then the node is going to travese to the right
        n = n->left;                              //and then restart to the new node
        restart(n);                               
        }
    }
    else cout<<"\nError in left node"<<n->info<<n->left;
}

void set_right(nodeptr n){
    if(n==null) cout<<"\nThe node is null";
    else if(n->right==null){
        cout<<"Current Leaf : "<<n->info<<" and you are inserting to the Right";
        n->right = mk_tree();
    }
    else if(n->right!=null){
        cout<<"\nThe node's right field is already full with info : "<<n->info<<" right :"<<n->right->info;
        bool y,f=0;
        cout<<"\nDo you want to stop AT : "<<n->info<<"? (1/0) : ";cin>>y;
        if(!y){ cout<<"\n Or maybe go to the right and then insert a leaf node? (1/0) : ";cin>>f;}
        if(y&&!f) restart(n);                     //This means that the node is still at the current state where right is filled
        else{                                     //If user has put 0 to y and 1 to f then the node is going to travese to the right
            n = n->right;                         //and then restart to the new node 
            cout<<"\n The node is restarting from the travesed node : "<<n->info;
            restart(n);
        }
    }
    else cout<<"\nError in set right node : "<<n->info<<n->right;
}

void preorder(nodeptr n){
    if(n!=null){
        cout<<n->info<<",";
        preorder(n->left);
        preorder(n->right);
    }
    else return;
}

void inorder(nodeptr n){
    if(n!=null){
        inorder(n->left);
        cout<<n->info<<",";
        inorder(n->right);
    }
    else return;
}

void postorder(nodeptr n){
    if(n!=null){
        postorder(n->left);
        postorder(n->right);
        cout<<n->info<<",";
    }
    else return;
}

void find(){
    
}

void restart(nodeptr n){
    int ch;
    if(n==root) cout<<"\nThe current node is at Root node";
    cout<<"\nOptions : \n 1.Display PreOrder Representation \n 2.Display InOrder Representation \n " 
            "3.Display PostOrder Representation \n 4.Set to the left Feild \n "
            "5.Set to the Right Feild \n";cin>>ch;

    switch (ch){
    case 1:
        cout<<"\nThe representation of the tree in Preorder representation is : [";
        preorder(root);
        cout<<"]\n";
        break;

    case 2:
        cout<<"\nThe representation of the tree in Inorder representation is : [";
        inorder(root);
        cout<<"]\n";
        break;

    case 3:
        cout<<"\nThe representation of the tree in Postorder representation is : [";
        postorder(root);
        cout<<"]\n";
        break;

    case 4:
        set_left(n);
        break;

    case 5:
        set_right(n);
        break;
    
    case 6:
        break;

    default:
        break;
    }
}

int main(){
    cout<<"\n**********************************************************************************";
    cout<<"\n                             Binary Tree Programme";
    cout<<"\n**********************************************************************************";
    root = mk_tree();
    int i = 1;
    restart(root);
    while(i!=0){
        cout<<"\nRestart(1/0) : ";cin>>i;
        if(i==1) restart(root);
        if(i!=0&&i!=1){ cout<<"\nInvalid Input"; i =1;}
    }
    if(i==0){
            cout<<"\n**********************************************************************************";
            cout<<"\n                       Thanks For Using My Programme";
            cout<<"\n**********************************************************************************";
    }
    
}



