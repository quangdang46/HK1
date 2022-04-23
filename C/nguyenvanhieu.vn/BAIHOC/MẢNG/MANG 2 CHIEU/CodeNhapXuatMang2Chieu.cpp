#include<stdio.h>
void Check(int n){
    int dem=0;
    for(int i=1; i<=n; i++){
        if (n%i==0){
            dem+=1;
        }
    }
    if(dem==2){
        printf("%d ",n);
    }
}
void nhapmang(int arr[][100],int m,int n){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n; j++){
            printf("arr[%d][%d]= ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
}
void xuatmang(int arr[][100],int m,int n){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int arr[100][100];
    int m,n,i,j;
    printf("\nNhap gia tri m,n :");
    scanf("%d%d",&m,&n);
    nhapmang(arr,m,n);
    printf("________\n");
    xuatmang(arr,m,n);
    printf("\nCac so nguyen to trong mang!\n");
    for (i=0;i<m;i++){
        for(j=0;j<n;j++){
            Check(arr[i][j]);
        }
    }
}