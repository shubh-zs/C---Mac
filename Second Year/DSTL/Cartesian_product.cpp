#include<iostream>
using namespace std;

int main(){
    int a,b,c,d,no_of_elements_in_A,no_of_elements_in_B;
    bool flag;
    cout<<"Input the number of elements in A and B : ";cin>>no_of_elements_in_A>>no_of_elements_in_B;
    if(no_of_elements_in_A<=0)cout<<"\nNo Input Charecters In Set A. ";
    if(no_of_elements_in_B<=0)cout<<"\nNo Input Charecters In Set B. ";
    else{    
        char setA[no_of_elements_in_A], setB[no_of_elements_in_B];
        cout<<"Input the Elements that are present in the Set A : (Charecter) \n";
        for(a=0;a<no_of_elements_in_A;a++)cin>>setA[a];
        cout<<"Input the Elements that are present in the Set B : (Charecter) \n";
        for(a=0;a<no_of_elements_in_B;a++)cin>>setB[a];
        char mat[no_of_elements_in_A*no_of_elements_in_B][2];d=0;
        for(a=0;a<no_of_elements_in_A;a++){
            for(b=0;b<no_of_elements_in_B;b++){
                mat[d][0] = setA[a];
                mat[d][1] = setB[b];
                d=d+1;
            }
        }
        cout<<"\nOutput : \n|";
        for(a=0;a<(no_of_elements_in_A*no_of_elements_in_B);a++){
            cout<<"{"<<mat[a][0]<<","<<mat[a][1]<<"},";
            if((a+1)%no_of_elements_in_A==0) cout<<"\b|\n|";
        }
        cout<<"\b";
    }
}



