#include<stdio.h>
#include<math.h>
int main(){
    int n,kiemtra;
    printf("Nhap so can kiem tra ");scanf("%d",&n);
    // if(n<2){
    //     printf("khong phai so nguyen to");
    // }
    // coi nhu kiem tra cac so lon hon2
    kiemtra=1;
    int i;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            kiemtra=0;
        }
    }
    if(kiemtra==1){
        printf("la so nguyen to");
    }else{
        printf("khong phai so nguyen to");
    }
}