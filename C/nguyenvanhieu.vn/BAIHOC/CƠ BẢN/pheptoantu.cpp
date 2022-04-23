#include<stdio.h>
int main()
{
    int a,b;
    printf("nhap so a: ");
    scanf("%d",&a);
    printf("nhap so b: ");
    scanf("%d",&b);
    int sum =a+b;
    printf("tong cua chung la :%d",sum);
    printf("\n%d+%d=%d",a,b,sum);
    //phep tru
    int sub=a-b;
    printf("\n%d-%d=%d",a,b,sub);
    //chia
    float div=a/(float)b;
    printf("\n%d/%d=%f",a,b,div);
}


