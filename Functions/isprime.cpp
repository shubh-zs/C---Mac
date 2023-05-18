#include<iostream>
using namespace std;
void pri(){
    int a,i=2;
    cout<<"Provide with number : ";
    cin>>a;
    for(;i<a;i++){
        if(a%i==0) {cout<<"Not Prime\n";break;}
    }
    if(i==a) cout<<"Prime\n";
}
int main(){
    int i;
    cout<<"For how many numbers : ";
    cin>>i;
    for(;i>0;i--){
        pri();
    }    
}