#include<iostream>
using namespace std;

int que[10];
int re=0;

//In this Queue the queue top is the higher number but the bottom is present in  

bool empty(){
    if(re==0) return 1;
    else return 0;
}

void display(){
    if(re<=0) cout<<"**UnderFlow** "<<re;
    else if(re>10) cout<<"**OverFlow**";
    else{
        for(int a = 0;a<re;a++){   //This funtion will print the recent elements first
            cout<<"\n|"<<que[a]<<"|";
        }
    }
}

void ins(){
    int input;
    cout<<"Input the data : ";cin>>input;
    que[re] = input;
    re = re+1;
    display();
}

void del(){
    if(re>0){
        for(int a = 1;a<re;a++) que[a-1] = que[a];
        re = re-1;
        display();
    }
}

void restart(){
    int a;
    cout<<"\nOptions : \n 0.Display \n 1.Empty \n 2.Count Nodes present in the Queue \n 3.Delete \n 4.Insert \n";cin>>a;
    
    switch (a){
    case 0:
        display();
        break;

    case 1:
        cout<<empty();
        break;

    case 2:
        cout<<"\nThe number of nodes present in the Queue are : "<<re<<"\n";
        break;

    case 3:
        del();
        break;

    case 4:
        ins();
        break;

    default:
        cout<<"\nInvalid Input.";
        break;
    }
}

int main(){
    cout<<"********************************************************************************\n";
    cout<<"********************************************************************************\n";
    cout<<"                      The Start of Queue Programme\n";
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



