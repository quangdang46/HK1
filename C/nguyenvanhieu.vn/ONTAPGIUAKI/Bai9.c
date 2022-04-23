#include<stdio.h>
int main(){
    int n,i;
    int x[10];
    printf("\nNhap ma khach hang 5 chu so: ");
    scanf("%d",&n);
    if(n<10000 || n>99999){
        printf("Nhap du lieu sai");
    }else{
        for(i=0;i<5;i++){
            int last=n%10;
            x[i] =last;
            n/=10;
        }
        if(x[3]<=2){
            printf("DONG");
        }else if(x[3]<=5){
            printf("BAC");
        }else if(x[3]<=7){
            printf("VANG");
        }else{
            printf("BACH KIM");
        }
    }
}