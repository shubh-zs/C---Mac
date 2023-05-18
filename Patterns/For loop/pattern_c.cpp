#include<iostream>
using namespace std;

int main(){
    int a,b,c,d,e;
    cin>>a;
    for(b = 1;b<a;b++){
        c = 0;
        d = 0;
        e = 0;
        for(;c<b;c++){
            cout<<"*";
        }
        for(;d<a-b;d++){
            cout<<" ";
        }
        for(d=0;d<a-b;d++){
            cout<<" ";
        }
        for(c=0;c<b;c++){
            cout<<"*";
        }
    cout<<"\n";
    }
    for(b = a;b>0;b--){
        c = 0;
        d = 0;
        e = 0;
        for(;c<b;c++){
            cout<<"*";
        }
        for(;d<a-b;d++){
            cout<<" ";
        }
        for(d=0;d<a-b;d++){
            cout<<" ";
        }
        for(c=0;c<b;c++){
            cout<<"*";
        }        
    cout<<"\n";
    }
}
// int main(){
//     int a,b,c,d;
//     cin>>a;
//     for(b = 1;b<a;b++){
//         c = 0;
//         d = 0;
//         for(;c<a-b;c++){
//             cout<<"1";
//         }
//         for(;d<b;d++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
// }