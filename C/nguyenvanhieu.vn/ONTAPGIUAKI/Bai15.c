#include<stdio.h>

int main(){
    int a,b;
    do{
        printf("\nNhap gia tri a va b: ");
        scanf("%d%d",&a,&b);
    }while(a<=0 || b<=0);
    if(a>=b){
        for(int i=1; i<=b; i++){
            if(a%i==0 && b%i==0){
                printf("%d ",i);
            }
        }
    }
    if(a<b){
        for(int i=1; i<=a; i++){
            if(a%i==0 && b%i==0){
                printf("%d ",i);
            }
        }
    }
}