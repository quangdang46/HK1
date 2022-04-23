// de qui tinh x^n
#include<stdio.h>
int NewPow(int x,int n){
    if(n==0) return 1;
    int result = x;
    return result = result*NewPow(x,n-1);
}
int main(){
    int x,n;
    printf("Nhap x,n: ");
    scanf("%d%d",&x,&n);
    printf("x^n=%d",NewPow(x,n));
}