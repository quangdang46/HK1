#include<stdio.h>
int main(){
    int n;
    printf("\nNhap 1 so nguyen duong bat ki: ");
    scanf("%d",&n);
    int TongSo=0;
    int last;
    while(n>0){
        last=n%10;
        TongSo+=last;
        n/=10;
    }
    printf("\nTong cac chu so cua day la:%d",TongSo);
}