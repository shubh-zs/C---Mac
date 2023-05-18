#include<stdio.h>
#include<stdlib.h>

int opr(int a,int b,int ch,int m){
    int op;
    switch(ch){
        case 1:
            op = (a+b)%m;
            break;
        case 2:
            op = (a-b)%m;
            break;
        case 3:
            op = (a*b)%m;
            break;
        case 4:
            op = (a/b)%m;
            break;
        default:
            printf("Wrong Input.");
            exit(0);
    }
    return op;
}


int main(){
    int ch,a,b,c,d,f,l,i,m,lhs,rhs;
    printf("Input the value for modulus : ");scanf("%d",%m);
    printf("\nOption are as following : \n\t1. Addition \n\t2. Subrtract \n\t3. Multiply \n\t4. Divide \n\t");
    printf("\nInput the choice : ");scanf("%d",%ch);
    printf("Input the value for number of the elements : ");scanf("%d",%l); int arr[l];
    printf("Input the value present in the array : \n");
    for(a=0;a<l;a++) scanf("%d",%arr[a]);
    int mat[l][l];
    for(a=0;a<l;a++){
        for(b=0;b<l;b++){
            mat[a][b] = opr(arr[a],arr[b],ch,m);
        }
    }

    printf("\nOutput for Abelion is : ");
    d=1;
    printf("\n\tStatus for Closure : ");
    for(a=0;a<l&&d;a++){
        for(b=0;b<l;b++){
            f=0;
            for(c=0;c<l;c++) if(mat[a][b]==arr[c]){f=1;break;}
            if(f==0){d=0; printf("False"); break;}
        }
    }
    if(d){
        printf("True\n\tStatus for Assiciativity : ");
        for(a=0;a<l&&d;a++){
            for(b=0;b<l&&d;b++){
                for(c=0;c<l;c++){
                    lhs = opr(arr[a],opr(arr[b],arr[c],ch,m),ch,m);
                    rhs = opr(opr(arr[a],arr[b],ch,m),arr[c],ch,m);
                    if(lhs!=rhs){d=0;printf("False"); break;}
                }
            }
        }
        if(d){
            printf("True\n\tStatus for Identity : ");
            f=0;
            for(c=0;c<l;c++){
                lhs = opr(arr[0],arr[c],ch,m);
                rhs = opr(arr[c],arr[0],ch,m);
                if(lhs==rhs){i=lhs;f=1; break;}
            }
            if(f==0) printf("False : ")<<f;
            else{
                for(a=0;a<l;a++){
                    lhs = opr(i,arr[a],ch,m);
                    rhs = opr(arr[a],i,ch,m);
                    if(lhs!=rhs){d=0;printf("False"); break;}
                }
            }
            if(d){
                printf("True\n\tStatus for Inverse : ");
                for(a=0;a<l;a++){
                    f=0;
                    for(b=0;b<l;b++) if(i==opr(arr[a],arr[b],ch,m)){f=1;break;}
                    if(f==0){d=0;printf("False"; break;}
                }
                if(d){
                    printf("True\n\tStatus for Commutative : ");
                    for(a=0;a<l;a++){
                        for(b=0;b<l;b++){
                            lhs = opr(arr[a],arr[b],ch,m);
                            rhs = opr(arr[b],arr[a],ch,m);
                            if(lhs!=rhs){d=0;printf("False"); break;}
                        }
                    }
                    if(d){
                        printf("True\n\nThe group of this input set with the operation and the mudulus creates a Abelian Group\n\n");
                    }
                }
            }
        }
    }
    if(!d){printf("\nThe group of this input set with the operation and the mudulus DOES NOT create a Abelian Group\n\n") ;} 
}