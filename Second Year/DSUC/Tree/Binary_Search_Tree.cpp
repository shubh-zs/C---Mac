#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *left,*right;
};

typedef struct node * nptr;
typedef struct node node;
#define null __null
nptr root = null;
int rep[20];int c=0;
nptr par=null,fou=root;

nptr mktree(){
    nptr n = (nptr)malloc(sizeof(node));
    cout<<"Input the data : ";
    cin>>n->data;
    n->left=n->right=null;
    return n;
}

void clear_tree(){
    bool f;
    cout<<"Are you sure?? (1/0): ";cin>>f;
    if(f) root=null;
}

void preorder(nptr n){
    if(n!=null){
        cout<<n->data<<" ,";
        preorder(n->left);
        preorder(n->right);
    }
}

void inorder(nptr n){
    if(n!=null){
        inorder(n->left);
        cout<<n->data<<" ,";
        inorder(n->right);
    }
}

void postorder(nptr n){
    if(n!=null){
        postorder(n->left);
        postorder(n->right);
        cout<<n->data<<" ,";
    }
}

void insert(nptr n, nptr itr){
    // nptr n = mktree();
    if(root==null){
        root = n;
        return;
    } 
    if(n->data==itr->data){
        cout<<"\nRepetition";
        rep[c] = n->data;
        c+=1;
        return;
    }
    if(n->data<itr->data){
        if(itr->left!=null) insert(n,itr->left);
        else{
            cout<<"\nInserting in dta : "<<itr->data;
            itr->left = n;
        }
    }
    else if(n->data>itr->data){
        if(itr->right!=null) insert(n,itr->right);
        else{
            cout<<"\nInserting in dta : "<<itr->data;
            itr->right=n;
        }
    }
    else{
        cout<<"\nidk error on insert func data = "<<n->data<<" itr data : "<<itr->data;
        return;
    }
}

void find_node(int n){
    // nptr n = mktree();
    if(root==null){
        fou=null;
        return;
    } 
    if(n==fou->data){
        return;
    }
    if(n<fou->data){
        if(fou->left!=null){
            par = fou;
            fou = fou->left;
            find_node(n);
        }
        else{
            cout<<"\nThe Left Subtree is done Searching";
            par=fou;
            fou=null;
            return;
        }
    }
    else if(n>fou->data){
        if(fou->right!=null){
            par = fou;
            fou = fou->right;
            find_node(n);
        }
        else{
            cout<<"\nThe Right Subtree is done Searching";
            par=fou;
            fou=null;
            return;
        }
    }
    else{
        cout<<"\nidk error on insert func data = "<<par->data<<" fou data : "<<fou->data;
        return;
    }
}

void decode_find(){
    if(par==fou){
        cout<<"\nThe Tree is Empty";
    }
    else if(fou!=null){
        if(par!=null) cout<<"\nThe Element is at the node and its pointer is given by : "<<fou;
        else cout<<"\nThe Element is at the Root Node : "<<root;
    }
    else;
}

void restart(){
    nptr n;
    int ch;
    cout<<"\nOptions : \n 1.Display PreOrder Representation \n 2.Display InOrder Representation \n 3.Display PostOrder Representation"
          " \n 4.Print Out the Repeating element Array \n 5.Insert \n 6.Find The Element \n 7.Clear Tree Root \n";cin>>ch;

    int a=0;
    switch (ch){
    case 1:
        if(root!=null){
            cout<<"\nThe representation of the tree in Preorder representation is : [";
            preorder(root);
            cout<<"\b]\n";
        }
        else cout<<"\nThere is no Tree as Root is Null";
            break;
    
    case 2:
        if(root!=null){
            cout<<"\nThe representation of the tree in Inorder representation is : [";
            inorder(root);
            cout<<"\b]\n";
        }
        else cout<<"\nThere is no Tree as Root is Null";
            break;

    case 3:
        if(root!=null){
            cout<<"\nThe representation of the tree in Postorder representation is : [";
            postorder(root);
            cout<<"\b]\n";
        }
        else cout<<"\nThere is no Tree as Root is Null";
            break;

    case 4:
        if(c!=0){
            cout<<"The Repeating element Array : \n ["; 
            while(a!=c){
                cout<<rep[a];
                if(a+1!=c) cout<<", ";
                a++;
            }
            cout<<"]\n";
        }
        else cout<<"\nThere is None. ";
        break;

    case 5:
        n = mktree();
        insert(n,root);
        break;

    case 6:
        cout<<"Input the data to be searched for : ";cin>>a;
        par=null,fou=root;
        find_node(a);
        decode_find();
        break;

    case 7:
        clear_tree();
        break;

    default:
        cout<<"\nError in the Input Choice ie :"<<ch;
        exit(0);
    }
}

int main(){
    cout<<"\n**********************************************************************************";
    cout<<"\n                             Binary Tree Programme";
    cout<<"\n**********************************************************************************";
    int i = 1;
    restart();
    while(i!=0){
        cout<<"\nRestart(1/0) : ";cin>>i;
        if(i==1) restart();
        if(i!=0&&i!=1){ cout<<"\nInvalid Input"; i =1;}
    }
    if(i==0){
        cout<<"\n**********************************************************************************";
        cout<<"\n                       Thanks For Using My Programme";
        cout<<"\n**********************************************************************************";
    }
    
}