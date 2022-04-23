#include<stdio.h>
int main(){
    int n;
    printf("\nNhap 1 so nguyen duong bat ki: ");
    scanf("%d",&n);
    int TichSo=1;
    int last;
    while(n>0){
        last=n%10;
        TichSo*=last;
        n/=10;
    }
    printf("\nTich cac chu so cua day la:%d",TichSo);
}