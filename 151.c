#include<stdio.h>

int main(){

    int a,b,c,mai,mei,men;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
        mai=a;
        if(b>c){
            mei=b;
            men=c;
        }else{
            mei=c;
            men=b;
        }
    }
    else if(b>a && b>c){
        mai=b;
        if(a>c){
            mei=a;
            men=c;
        }else{
            mei=c;
            men=a;
        }
    }else{
        mai=c;
        if(b>a){
            mei=b;
            men=a;
        }else{
            mei=a;
            men=b;
        }
    }
    printf("%d\n",men);
    printf("%d\n",mei);
    printf("%d\n",mai);
}

