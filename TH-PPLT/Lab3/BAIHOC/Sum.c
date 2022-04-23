#include<stdio.h>
int sum(int a, int b){
    return a+b;
}
int main(){
    int a,b;
    printf("\nNhap a,b: ");
    scanf("%d%d",&a,&b);
    printf("Sum=%d",sum(a,b));
}