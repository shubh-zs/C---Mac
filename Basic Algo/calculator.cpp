#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int i,a,b,c,d,e,f,g;
    cout<<"****************************Calculator****************************\n"<<"1. Add\n"<<"2. Sub\n"<<"3. Div\n"<<"4. Mul\n"<<"5. Power"<<"6. Binary";
    cout<<"What fucntion do you like to execute?";
    cin>>i;
    cout<<"Input two input : \n";
    cin>>a;cin>>b;
    if(i==6){
        i = a;
        for(d=e=0;i>0;i/=2,d++){
            c = i%2;   
        }
        cout<<"The Sum of given Numbers is given by : \n"<<"For First Input : "<<a<<"\n"<<"For Second Input : "<<b;
    }    
    else if(i==1)cout<<"The Sum of given Numbers is given by : "<<a+b;

    else if(i==2)cout<<"The Sub of given Numbers is given by : "<<a-b;

    else if(i==3)cout<<"The Div of given Numbers is given by : "<<a/b;

    else if(i==4)cout<<"The Sum of given Numbers is given by : "<<a*b;

    else if(i==5)cout<<"The Sum of given Numbers is given by : "<<pow(a,b);
    
    else cout<<"Input appropiate option next time. ";


}