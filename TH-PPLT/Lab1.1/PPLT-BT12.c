#include<stdio.h>
int main(){
    float a,b,c;
    printf("\nNhap 3 goc cua tam giac lan luot: ");
    scanf("%f%f%f",&a,&b,&c);
    if(a>0&&b>0&&c>0){
        if(a+b+c==180){
            printf("\nDay la mot tam giac");
        }else{
            printf("\nDay khong phai tam giac!");
        }
    }else{
        printf("\nBan kiem tra lai cac goc da nhap");
    }
}