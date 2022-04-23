#include<stdio.h>
#include<math.h>
int nt(int n){
    if(n<2) return 0;
    int i;
    for(i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}
void xuat(int a[][100],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
void nhap(int a[][100],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("\nNhap phan tu a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

}
void printnt(int a[][100],int n){
    int i,j;
    printf("Cac so nguyen to trong ma tran la: ");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(nt(a[i][j])) printf("%d ",a[i][j]);
        }
    }
}
//tính tổng các phần tử chẵn nằm trên các dòng lẻ
int tong(int a[][100],int n){
    int i,j,t=0;
    for(i=1;i<n;i+=2){
        for(j=0;j<n;j++){
            if(a[i][j]%2==0) t+=a[i][j];
        }
    }
    return t;
}
int main(){
    int a[100][100];
    int n;
    printf("Nhap kich thuoc: ");
    scanf("%d",&n);
    nhap(a,n);
    xuat(a,n);
    printf("\n________\n");
    printnt(a,n);
    printf("\n________\n");
    printf("\nTong cac phan tu chan nam tren cac dong le: %d",tong(a,n));
}