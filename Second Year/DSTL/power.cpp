#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a,b,c,d,no_of_elements;
    bool flag;
    cout<<"Input the number of elements : ";cin>>no_of_elements;
    if(no_of_elements<=0)cout<<"\nNo Input Charecters. ";

    else{    
        char set[no_of_elements];
        cout<<"Input the Elements that are present in the Set : (Charecter) \n";
        for(a=0;a<no_of_elements;a++)cin>>set[a];
        int t = pow(2,no_of_elements);
        cout<<"{";
        for(a=1;a<t;a++){
            b=a;
            c=0;
            while(b!=0){
                if(b&1) cout<<set[c];
                b=b>>1;
                c+=1;
            }
            cout<<", ";
        }
        cout<<"\b\b}\n\n";
    }
}



