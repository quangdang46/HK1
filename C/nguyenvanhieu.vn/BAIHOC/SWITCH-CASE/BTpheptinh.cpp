#include<stdio.h>

int main(){
    int a,b;
    char pheptinh;
    printf("Nhap phep tinh can tinh(+,-,*,/):");
    scanf("%c",&pheptinh);
    printf("\nNhap 2 so can tnfinh a,b: ");
    scanf("%d%d",&a,&b);
    switch(pheptinh){
        case '+':{
            printf("\n%d+%d= %d",a,b,a+b);
            break;
        }
        case '-':{
            printf("\n%d-%d= %d",a,b,a-b);
            break;
        }
        case '*':{
            printf("\n%d*%d= %d",a,b,a*b);
            break;
        }
        case '/':{
            if(b==0){
                printf("\nmay tinh khong the chia duoc khi b=0");
                printf("\nmoi ban nhap lai b");
            }else{
                printf("\n%d/%d= %2.f",a,b,(float)a/b);
            }
            break;
        }
        default:
            printf("\nkhong co phep tinh nay");
    }
}