#include <iostream>
using namespace std;

int main(){
    int a, b,d;
    a = 0;
    double c;
    cout<<"******************************************************************************************************************"<<endl;
    cout<<"Converter"<<endl;
    cout<<"******************************************************************************************************************"<<endl;
    cout<<"1. C to F"<<endl;
    cout<<"2. F to C"<<endl;
    cout<<"Which Conversion??  :";
    cin>>d;
    cout<<"Provide the value of converting value : ";
    cin>>b;
    if (d == 1){
        cout<<"The value from 0 till the converting bvalue provied are given by : "<<endl;
        cout<<"Celcius"<<"    "<<"Farenhiet"<<endl;
        while(a<=b){
            c = (9.0/5.0)*a+32.0;
            cout<<a<<"          "<<c<<endl;
            a +=1;
        }
        cout<<"Thanks for using this convertort"<<endl;

    }
    else if(d == 2){
        cout<<"The value from 0 till the converting bvalue provied are given by : "<<endl;
        cout<<"Celcius"<<"    "<<"Farenhiet"<<endl;
        while(a<=b){
            c = ((a-32.0)*5.0)/9.0;
            cout<<a<<"          "<<c<<endl;
            a +=1;
        }
    }
    else{
        cout<<"Provide a proper input next time!!";
    }

}