#include <stdio.h>
void Nhap(int *n){
    scanf("%d", &n);
}
void In(int *n){
    printf("%d",&n);
}
int main(){
    int n;
    printf("Nhap n:");
    Nhap(&n);
    In(&n);
}