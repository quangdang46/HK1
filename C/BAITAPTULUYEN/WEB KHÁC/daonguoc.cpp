#include<stdio.h>
//
int daonguoc(int n){
    int daonguoc=n%10;
    n=n/10;
    while(n>0){
        int last=n%10;
        n=n/10;
        daonguoc=daonguoc*10+last;
    }
    return daonguoc;
}
//
int main(){
    int n;
    printf("Nhap so can dao nguoc ");scanf("%d",&n);
    printf("\nso sau khi dao nguoc la: %d",daonguoc(n));
}