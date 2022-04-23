#include<stdio.h>

int main(){
    int a,b,sum;
    printf("\nNhap gioi han [a , b] ");scanf("%d%d",&a,&b);
    if(a>b){
        printf("\nGIOI HAN BI LOI");
    }else
    {
        int i;
        int sum1,sum2;
        sum1=0;sum2=0;
        for(i=a;i<=b;i++){
            if(i%2==1){
                sum1+=i;
            }else{
                sum2+=i;
            }            
        }
        printf("\ntong so le:%d",sum1);
        printf("\ntong so chan:%d",sum2);

    }
}    