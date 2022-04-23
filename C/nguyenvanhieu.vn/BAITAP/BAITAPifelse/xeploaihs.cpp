#include<stdio.h>

int main(){
    float a,b,c,d;
    printf("Nhap diem mon VAN: ");scanf("%f",&a);
    printf("\nNhap diem mon TOAN: ");scanf("%f",&b);
    printf("\nNhap diem mon ANH: ");scanf("%f",&c);
    d=(a+b+c)/3;
    printf("\nDiem trung binh 3 mon hoc cua ban la: %2.f",d);
    if(d>=0 and d<=10){
        if(d>=8 and d<=10){
            printf("\nChuc mung ban dat duoc loai GIOI");
        }else if(d>=6.5 and d<8){
            printf("\nBan da duoc loai KHA,can co gang");
        }else if(d>=4 and d<6.5){
            printf("\nBan da duoc loai TB");
        }else{
            printf("\nBan da dat duoc loai YEU,Ban can no luc");
        }
    }else{printf("\nBan kiem tra lai cac diem cua minh");}
}