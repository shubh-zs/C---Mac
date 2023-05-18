#include<iostream>
using namespace std;

int main(){
    int a,b,c,d,e;
    int v[4] = {0,1};
    cout<<"The truth table for the AND operaton is given by : \n";
    cout<<"----------------------------------\n";
    cout<<"| Value A | Value B |    A&&B    |\n";
    cout<<"----------------------------------\n";
    for(a=0;a<2;a++){
        for(b=0;b<2;b++){
            cout<<"|    "<<v[a]<<"    |    "<<v[b]<<"    |      "<<(v[a]&&v[b])<<"     |\n";
        }
    }
    cout<<"----------------------------------";
    cout<<"\n\nThe truth table for the OR operaton is given by : \n";
    cout<<"----------------------------------\n";
    cout<<"| Value A | Value B |    A||B    |\n";
    cout<<"----------------------------------\n";
    for(a=0;a<2;a++){
        for(b=0;b<2;b++){
            cout<<"|    "<<v[a]<<"    |    "<<v[b]<<"    |      "<<(v[a]||v[b])<<"     |\n";
        }
    }
    cout<<"----------------------------------";


}


