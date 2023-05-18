#include<iostream>
using namespace std;

int power(){
    int i;
    int j;
    cout<<"Input the number ad the power with a space in b/w : ";
    cin>>i>>j;
    int a,b;
    for(a=b=1;a<=j;a++)b = b*i;
    return b;
}
int main(){
    int ans = power();
    cout<<"The answer is given by : "<<ans;
}
