#include<stdio.h>

int main(){

    int N,num,dois=0,tres=0,quat=0;
    scanf("%d",&N);
    while(N--){
        scanf("%d",&num);
        if(num%2==0){
            dois++;
        }
        if(num%3==0){
            tres++;
        }
        if(num%4==0){
            quat++;
        }
    }
    printf("%d\n%d\n%d\n",dois,tres,quat);
    return 0;
}
