#include<iostream>
using namespace std;

struct sahdev{
    char shubh;
    struct sahdev * next;
};
typedef struct sahdev sahdev;

int main(){

    sahdev * b = (sahdev *)malloc(sizeof(sahdev));
    b->shubh = 'c';
    b->next = NULL;


    sahdev * a = (sahdev *)malloc(sizeof(sahdev));
    a->shubh='a';
    a->next = b;

    
    for(sahdev * loop = a;loop!=NULL;loop=loop->next){
        cout<<"\n"<<loop->shubh;
    }
}
