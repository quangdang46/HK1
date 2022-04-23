#include<stdio.h>
int gt(int n){
    if(n==0) return 1;
    return n*gt(n-1);
}
long long Exe(int n){
    if(n==0) return 1;
    return gt(n)*Exe(n-1);
}
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    printf("Gia tri:%lld",Exe(n));
}