#include<iostream>
using namespace std;


int main(){
    int a,b,c,d,e;
    string at1, at2;
    cout<<"Input the first atomic propositions : ";
    getline(cin,at1);
    cout<<"Input the first atomic propositions : ";
    getline(cin,at2);
    cout<<"Input the operation on the propositions : \n";
    cout<<"1. And\n"<<"2. Or\n"<<"3. Negation\n"<<"4. Implication\n"<<"5. Bi implication\n";
    cout<<"Provide the number against the operation : ";cin>>a;
    switch (a)
    {
    case 1:
        cout<<at1<<" and "<<at2;
        break;
    case 2:
        cout<<at1<<" or "<<at2;
        break;
    case 3:
        cout<<at1<<" does not "<<at2;
        break;
    case 4:
        cout<<at1<<" if then "<<at2;
        break;
    case 5:
        cout<<at1<<" if and only if "<<at2;
        break;
    default:
        cout<<"Wrong input";
        break;
    }

}