#include<stdio.h>
int main(){
    int n = 0;printf("\nNhap nam can kiem tra: ");
    scanf("%d",&n);
    if(n%4==0){
        if(n%400==0||n%100==1){
            printf("La nam nhuan");
        }else{
            printf("khong phai nam nhuan");
        }
    }else{
        printf("\nKhong phai nam nhuan");
    }
}
//Năm nhuận là năm chia hết cho 4 và không chia hết cho 100
//Nếu có 2 chữa số cuối la 00 thì kiểm tra chia hết cho 400 là năm nhuận