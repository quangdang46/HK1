#include<stdio.h>

int main(){
    float a,b;
    printf("\nNhap 2 kich thuoc lan luot: ");
    scanf("%f%f",&a,&b);
    if(a>0&&b>0){
        printf("Dien tich la:%0.2f",a*b);
        printf("\nChu vi la:%0.2f",(a+b)*2);
    }else{
        printf("\nBan kiem tra la cac kich thuoc!");
    }
}