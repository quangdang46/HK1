// de qui tinh 2^n
#include<stdio.h>
int NewPow(int n){
    if(n==0) return 1;
    int result = 2;
    return result = result*NewPow(n-1);
}
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    printf("2^n=%d",NewPow(n));
}