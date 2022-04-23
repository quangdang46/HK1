#include<stdio.h>

int main(){
    int a,b,bc;
    printf("Nhap a,b= ");
    scanf("%d%d",&a,&b);
    if(a>=0 && b>=0){
        if(a==0&&b==0){
            printf("khong ton tai!");
        }else if (a==0||b==0){
            printf("khong co BCNN UCNN");
        }else
        {
            bc=a*b;
            while(a!=b){
                if(a>b){
                    a=a-b;
                }else{
                    b=b-a;
                }
            }
            printf("UCLN=%d\n",a);
            printf("BCNN=%d\n",bc/a);
        }
    }else{
        printf("nhap a= \nNhap b= ");
    }
}