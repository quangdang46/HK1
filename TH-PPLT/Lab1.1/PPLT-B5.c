#include<stdio.h>
int main(){
    int c;
    printf("\nNhap do C can chuyen doi: ");
    scanf("%d",&c);
    float f;
    f=1.8*c+32;
    printf("%dC=%0.1fF",c,f);
}