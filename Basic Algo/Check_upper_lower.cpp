#include<iostream>
using namespace std;

// int main(){
//     char a,b,c;
//     cin>>a >>b >>c;
//     cout<<int(a)<<"\n"<<int(b)<<"\n"<<int(c)<<endl;
// }
int main(){
    char a;
    cin>>a;
    int b = int(a);
    if(47<b&&b<58){
        cout<<"Its a Number"<<endl;
    }
    else if (64<b&&b<91)
    {
        cout<<"Its a Upper case char"<<endl;
    }
    else if(96<b&&b<123)
    {
        cout<<"Its a Lower case char";
    }
    else{
        cout<<"its neither a Char nor a number"<<endl;
    }

}