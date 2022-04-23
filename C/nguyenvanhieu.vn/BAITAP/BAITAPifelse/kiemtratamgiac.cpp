#include<stdio.h>

int main(){
    float a,b,c;
    printf("Nhap canh thu nhat: ");scanf("%f",&a);
    printf("Nhap canh thu hai: ");scanf("%f",&b);
    printf("Nhap canh thu ba: ");scanf("%f",&c);
    if (a+b>c and a+c>b and a+c>b)
    {
        if (a==b==c){
            printf("DAY LA MOT TAM GIAC DEU");
        }else if (a==b or a==c or c==b){
            printf("DAY LA MOT TAM GIAC CAN");
        }else if (a*a+b*b==c*c or b*b+c*c==a*a or c*c+a*a==b*b){
            printf("DAY LA MOT TAM GIAC VUONG");
        }else{
            printf("DAY LA MOT TAM GIAC KHONG DAC BIET");
        }
    }else{
        printf("DAY KHONG PHAI LA MOT TAM GIAC");
    }
    printf("\n---------------------------");
    return(0);
}