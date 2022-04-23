#include<stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int main(){
    int a,b,c;
    printf("Nhap 3 so a b c: ");scanf("%d%d%d",&a,&b,&c);
    printf("Max cua 3 so:%d",max(a,max(b,c)));
}