#include<stdio.h>
void nhapmang(int a[][100],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n; j++){
            printf("a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}
void xuatmang(int a[][100],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("a[%d][%d]=%d",i,j,a[i][j]);
        }
    }
}
void xuatmang1chieu(int b[],int k){
    for(int i=0;i<k;i++){
        printf("%d ",b[i]);
    }
}
void chuyenmatran(int a[100][100],int m,int n,int b[],int &k){
    k=m*n;
    int index=0;
    for(int i=0; i < m; i++){
        for(int j=0;j<n;j++){
            b[index]=a[i][j];
            index++;
        }
    }
}
int main(){
    int a[100][100];
    int b[10000];
    int m,n,k;
    printf("\nNhap gia tri m,n :");
    scanf("%d%d",&m,&n);
    nhapmang(a,m,n);
    chuyenmatran(a,m,n,b,k);
    xuatmang1chieu(b,k);

}