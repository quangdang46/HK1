// Bài 1: Tính tổng các chữ số của số nguyên dương n
#include<stdio.h>
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    int sum = 0;
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
    printf("Sum=%d",sum);
}