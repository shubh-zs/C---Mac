#include<iostream>
using namespace std;

int main(){
//     int a,b;
//     b = 1;
//     cout<<"Provide the value to check :";
//     cin>>a;
//     if(a==1||a==2){
//         cout<<"This is the prime number : "<<a<<endl;
//     }
//     else if(a == 0){
//         cout<<"Neither Prime nor normal "<<endl;
//     }
//     else{    
//         while(b<a){
//             b += 1;
//             if(a%b == 0){
//                 cout<<"Its not a prime number";
//                 break;
//             }
//             else{
//                 if(b==a-1){
//                     cout<<"This is the prime number : "<<a<<endl;
//                     break;
//                 } 
//             }
//         }
//     }
    int a,b,c,d,e;
    c = 0;
    cin>>a;
    for(b=1;b<=a;b++){
        if(a%b==0){
            c++;
        }
    }
    if(c==2) cout<<"Number is Prime";
    else cout<<"Number is Not Prime";










}