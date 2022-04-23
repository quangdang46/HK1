#include <stdio.h>
int main(){
    int a,b;
    printf("Nhap so a:");scanf("%d",&a);
    printf("Nhap so b:");scanf("%d",&b);
    // printf("\nHOAN VI 2 SO");
    // printf("\nSo a:%d \nSo b:%d",b,a);
    // cach 2
    printf("\na=%d b=%d",a,b);
    // a=2,b=5
    int trunggian=a;//tg=2,a=2,b=5
    a=b;//a=5,b=5
    b=trunggian;//a=5,b=2
    printf("\na=%d b=%d",a,b);
}