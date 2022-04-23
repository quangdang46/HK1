#include<stdio.h>
int main(){
    float a,b;
    printf("Nhap 2 so a va b: ");scanf("%f%f",&a,&b);
    printf("Tong 2 so:%f\n",a+b);
    printf("Hieu 2 so a va b:%f\n",a-b);
    printf("Tich 2 so a va b:%f\n",a*b);
    if(b==0){
        printf("Khong the chia duoc!");
    }else{
        printf("Thuong 2 so a va b:%f\n",a/b);
    }
}