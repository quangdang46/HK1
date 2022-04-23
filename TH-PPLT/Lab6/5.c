// de qui dem chu so
#include<stdio.h>
int DemChuSo(int n){
    if(n==0) return 0;
    int dem=1;
    return dem+DemChuSo(n/10);
}
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("So chu so:%d",DemChuSo(n));
}