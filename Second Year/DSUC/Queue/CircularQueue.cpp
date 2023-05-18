#include<iostream>
using namespace std;

int que[10];
int cou = 0;
int fr=0;
int re=0;

//In this stack the stack top is the higher number but the bottom is present in  


int eof(){
    if(cou<=0) return 1;
    else if(cou>10) return -1;
    else return 0;
}

void display(){
    if(cou<=0) cout<<"**UnderFlow** "<<re;
    else if(cou>10) cout<<"**OverFlow**";
    else{
        int a = 0,b = fr;
        for(;a<cou;a++,b++){   //This funtion will print the recent elements first
            if(b>10) b = (b+1)%10;
            cout<<"\n|"<<que[b]<<"|";
        }
    }
}

void ins(){
    int input;
    if(eof()==-1) cout<<"**OverFlow**";
    else if(re+1>=10){
        re = (re+1)%10;
        cout<<"Input the data : ";cin>>input;
        que[re] = input;
        cou = cou+1;
        display();
    }
}

int main(){

}

