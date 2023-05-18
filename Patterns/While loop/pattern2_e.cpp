#include<iostream>
using namespace std;

// 1
// 21
// 321
// 4321
// 54321

// int main(){
//     int a,b,c;
//     cin>>a;
//     b=0;
//     while(b<a){
//         c = 0;
//         b++;
//         while(c<b){
//             cout<<b+c;
//             c++;
//         }
//         cout<<"\n";
//     }

// }
// another interpretation
int main(){
    int a,b,c;
    cin>>a;
    b=0;
    while(b<a){
        c = 0;
        b++;
        while(c<b){
            cout<<b-c;
            c++;
        }
        cout<<"\n";
    }

}
