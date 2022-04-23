#include<stdio.h>

int main(){
    int a,b;
    printf("\nNhap lan luot 2 so a va b: ");
    scanf("%d%d",&a,&b);
    printf("\nTong:%d",a+b);
    printf("\nHieu:%d",a-b);
    printf("\nTich:%d",a*b);
    if(b==0){
        printf("\nkhong the thuc hien phep chia!");
    }else{
        printf("\nThuong:%f",(float)a/b);
        printf("\nSo du:%d",a%b);
    }
}