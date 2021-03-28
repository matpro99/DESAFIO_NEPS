#include<stdio.h>

int main(){

    int X,Y,Z,c=0;
    scanf("%d%d%d",&X,&Y,&Z);
    if(X%2==0 || X%5==0){
        c++;
    }
    if(Y%2==0 || Y%5==0){
        c++;
    }
    if(Z%2==0 || Z%5==0){
        c++;
    }
    printf("%d\n",c);

    return 0;
}
