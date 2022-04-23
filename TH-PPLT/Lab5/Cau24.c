#include <stdio.h>
void NhapMang(int a[],int n){
    int i;
    for(i = 0; i < n; i++){
        printf("\nNhap a[%d] = ",i);
        scanf("%d", &a[i]);
    }
}
void SapXep(int a[],int n){
    int tg,i,j;
    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
}
void XuatMang(int a[],int n){
    int i;
    printf("\nMang da sap xep la: ");
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}
int main(){
    int a[100];
    int n;
    do{
        printf("\nNhap gia tri n: ");
        scanf("%d",&n);
    }while (n<=0);
    NhapMang(a,n);
    SapXep(a,n);
    XuatMang(a,n);
}