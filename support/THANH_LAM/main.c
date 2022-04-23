#include<stdio.h>
int main(){
    int n,tien;
    printf("Nhap n: ");
    scanf("%d",&n);
    int tuan=n/7,ngay=n%7;
    if(tuan*2000<ngay*400){
        tien=2*tuan*2000;
    }
    else{
        tien=tuan*2000+ngay*400;
    }
    printf("Tien: %d USD",tien);
}