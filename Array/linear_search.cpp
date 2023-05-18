#include<iostream>
using namespace std;
void print(int arr[],int s){
    int a,b,c;
    cout<<"[";
    for(a=0;a<s;a++){
        cout<<arr[a];
        if(a!=s-1)cout<<","; 
    }
    cout<<"]\n";
}
//ask for if they want to search
//ask the element to search
//print how yes no and the number of appearence
void sear(int arr[],int s){
    int i,a,b,c;
    char d;
    cout<<"What number are you searching for : ";
    cin>>i;
    for(a=b=0;a<s;a++){
        c = arr[a];
        if(c==i)b++;
    }
    if(b!=0) cout<<"The searched number exists in the list and it does for "<<b<<" times.";
    else cout<<"The searched number doesnot exists in the list. ";

    // cout<<"Do you want a restartof the programme? (y/n)";
    // cin>>d;
    // if(d=='y'){cout<<"Restearting the programme"; main();}
    // else cout<<"Bye";
}

int main(){
    int arr[100];
    int s,a,b,c,d;
    char i;
    cout<<"Size : ";
    cin>>s;
    cout<<"Elements : \n";
    for(a=0;a<s;a++){
        cin>>b;
        arr[a]=b;
    }
    cout<<"The list is given by : ";
    print(arr,s);
    cout<<"Do you want to search? (y/n)";
    cin>>i;
    if(i=='y')(sear(arr,s));
    else if(i=='n')(cout<<"Thanks for using this programe. \n");
    else{cout<<"Restearting the programme. \n"; main();}
}