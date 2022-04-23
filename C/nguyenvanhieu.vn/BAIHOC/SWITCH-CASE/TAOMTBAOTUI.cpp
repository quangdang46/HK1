#include<stdio.h>
int main(){
    int luachon;
    int a,b;
    printf("\n=====CHUONG TRINH MAY TINH BO TU====");
    printf("\n1.Phep cong\n2.phep tru\n3.phep nhan\n4.phep chia\n0.thoat");
    printf("\nnhap lua chon cua ban: ");
        // printf("\nNhap a= ");
        // scanf("%d",&a);
        // printf("\nNhap b= ");scanf("%d",&b);
        // printf("\n%d",cong(a,b));
        // printf("\n%d",tru(a,b));
        // printf("\n%d",nhan(a,b));
        // printf("\n%2.f",chia(a,b));
    luachon=getchar();
    switch(luachon){
        case '0':{
            break;
        }
        case '1':{
            printf("\nNhap a= ");scanf("%d",&a);
            printf("\nNhap b= ");scanf("%d",&b);
            printf("\nket qua la:%d",a+b);
            break;
        }
        case '2':{
            printf("\nNhap a= ");scanf("%d",&a);
            printf("\nNhap b= ");scanf("%d",&b);
            printf("\nket qua la:%d",a-b);
            break;
        }
        case '3':{
            printf("\nNhap a= ");scanf("%d",&a);
            printf("\nNhap b= ");scanf("%d",&b);
            printf("\nket qua la:%d",a*b);
            break;
        }
        case '4':{
            printf("\nNhap a= ");scanf("%d",&a);
            printf("\nNhap b= ");scanf("%d",&b);
            printf("\nket qua la:%0.1f",(float)a/b);
            break;
        }default:printf("hay nhap lai lua chon!");        
    }
    return 0;
}