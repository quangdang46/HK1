#include<stdio.h>
void nhapmang(int arr[][100],int m,int n){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n; j++){
            printf("arr[%d][%d]= ",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
}
void chuyenvi(int arr[100][100],int m,int n,int cv[100][100]){
    int i,j;
    for(i=0; i < n; i++){
        for(j=0;j<m;j++){
            cv[i][j] = arr[j][i];
        }
        printf("\n");
    }
}
void xuatmang(int arr[][100],int m,int n){
    int i,j;
    for(i=0; i < m; i++){
        for(j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int m,n;
    int arr[100][100];
    int cv[100][100];
    printf("\nNhap gia tri m,n ");
    scanf("%d%d",&m,&n);
    nhapmang(arr,m,n);
    chuyenvi(arr,m,n,cv);
    printf("Sau khi chuyen vi:\n");
    xuatmang(cv,n,m);
}