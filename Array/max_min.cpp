#include<iostream>
using namespace std;
void print(int arr[],int s){
    int a,b,c;
    cout<<"[";
    for(a=0;a<s;a++){
        cout<<arr[a];
        if(a!=s-1)cout<<","; 
    }
    cout<<"]\n";
}
int max(int arr[],int s){
    int a,b,c;
    a = INT32_MIN;
    for(b =0;b<s;b++){
        c = arr[b];
        if(c>a)a=c;
    }
    return a;
}
int min(int arr[], int s){
    int a,b,c;
    a = INT32_MAX;
    for(b=0;b<s;b++){
        c = arr[b];
        if(c<a)a=c;
    }
    return a;
}

int main(){
    int a,b,c,d;
    int aa[100];
    cin>>a;
    for(b=0;b<a;b++){
        cin>>c;
        aa[b]=c;
    }
    print(aa,a);
    cout<<"The max value is given by : "<<max(aa,a)<<"\n";
    cout<<"The min value is given by : "<<min(aa,a)<<"\n";

}