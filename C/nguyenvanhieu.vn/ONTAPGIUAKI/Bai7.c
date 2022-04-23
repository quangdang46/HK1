#include<stdio.h>
int main(){
    int n,x;
    int n1,n2,n3,n4,n5;
    printf("\nNhap n: ");
    scanf("%d",&n);
    x=n;
    if(n%10000==0){
        while(n!=0){
            n1=n/500000;
            n%=500000;
            n2=n/100000;
            n%=100000;
            n3=n/50000;
            n%=50000;
            n4=n/20000;
            n%=20000;
            n5=n/10000;
            n%=10000;
        }
        printf("%d = %d to 500000 , %d to 100000 , %d to 50000 , %d to 20000 , %d to 10000",x,n1,n2,n3,n4,n5);
    }else{
        printf("\nNhap du lieu sai");
    }
}