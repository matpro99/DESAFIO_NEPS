#include<stdio.h>

int main(){

    int n,cont=0;
    scanf("%d",&n);
    while(n!=2018){
        scanf("%d",&n);
        cont++;
    }
    printf("%d\n",cont);
    return 0;
}
