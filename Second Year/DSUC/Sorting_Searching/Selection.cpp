#include<iostream>
using namespace std;

int main(){
    int a,b,c,d,loc,l,min,temp;
    cout<<"Input the value for the length of the array : ";cin>>l;
    cout<<"Input the value for the elements in array : \n"; 
    if(l>0){    
        int arr[l];
        for(a=0;a<l;a++) cin>>arr[a];
        cout<<"The array before the Selection sort : \n";
        for(c=0;c<l;c++) cout<<arr[c]<<", ";
        cout<<"\b\b";

        cout<<"\nThe array during the Selection sort : \n";
        for(a=0;a<l-1;a++){
            min = arr[a];loc = a;
            for(b=a+1;b<l;b++){
                if(min>arr[b]){loc = b; min = arr[b];}
            }
            if(loc!=a){
                temp = arr[loc];
                arr[loc] = arr[a];
                arr[a] = temp;
            }
            cout<<"Pass : "<<a+1<<"\n";
            for(c=0;c<l;c++) cout<<arr[c]<<", ";
            cout<<"\b\b";

            cout<<"\n\n";
        }
        cout<<"The array after the Selection sort : \n";
        for(c=0;c<l;c++) cout<<arr[c]<<", ";
        cout<<"\b\b";
    }
    else{
        cout<<"Invalid Input.";
    }
}




