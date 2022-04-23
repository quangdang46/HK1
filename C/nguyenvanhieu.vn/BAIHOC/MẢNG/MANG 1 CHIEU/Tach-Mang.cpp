#include <stdio.h>
#define MAX 1000
 
void NhapMang(int a[], int n){
    for(int i = 0;i < n; i++){
        printf("Nhap so thu %d: ", i);
        scanf("%d", &a[i]);
    }
}

void XuatMang(int a[], int n){
    for(int i = 0;i < n; i++){
        printf("\na[%d]=%d",i,a[i]);
    }
}
void TachMang(int a[],int n,int b[],int &n1,int c[],int &n2){
    int i=0,i1=0,i2=0;
    n1=0,n2=0;
    for(i=0; i< n; i++){
        if(a[i]%2==0){
            b[i1]=a[i];
            i1++;
            n1++;
        }else{
            c[i2]=a[i];
            i2++;
            n2++;
        }
    }
}
int main(){
    int n,n1,n2;
    int a[100],b[100],c[100];
    printf("\nNhap gia tri n: ");
    scanf("%d", &n);
    NhapMang(a,n);
    XuatMang(a,n);
    TachMang(a,n,b,n1,c,n2);
    printf("\n===========");
    printf("\n");
    XuatMang(b,n1);
    printf("\n===========");
    printf("\n");
    XuatMang(c,n2);

}