#include<stdio.h>

int main(){

    int A,B,C;
    scanf("%d%d%d",&A,&B,&C);
    if(A!=B && A!=C && B==C){
        printf("A\n");
    }
    else if(B!=A && B!=C && A==C){
        printf("B\n");
    }
    else if(C!=A && C!=B && A==B){
        printf("C\n");
    }else{
        printf("*\n");
    }
    return 0;
}
