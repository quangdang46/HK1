#include<stdio.h>
int main(){
    int penny,nikel,dime,quarter,dola2,dola1,tien;
    printf("Nhap so luong penny:");scanf("%d",&penny);
    printf("Nhap so luong nikel:");scanf("%d",&nikel);
    printf("Nhap so luong dime:");scanf("%d",&dime);
    printf("Nhap so luong quarter:");scanf("%d",&quarter);
    printf("Nhap so luong 1/2 dola:");scanf("%d",&dola2);
    printf("Nhap so luong 1 dola:");scanf("%d",&dola1);
    tien=penny+5*nikel+10*dime+25*quarter+50*dola2+100*dola1;
    printf("So Cent sau khi doi:%d Cent",tien);
}