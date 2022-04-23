#include<stdio.h>
void nhapmang(int arr[][100],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n; j++){
            printf("arr[%d][%d]= ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
}
void xuatmang(int arr[][100],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
void XoaDong(int arr[][100],int &m,int n){
    int k;
    printf("\nNhap gia tri dong muon xoa: ");
    scanf("%d",&k);
    if(k<0||k>m){
        printf("\nMoi ban nhap lai! ");
    }
    for(int i=k;i<m;i++){
        for (int j=0;j<n;j++){
            arr[i][j]=arr[i+1][j];;
        }
    }
    m--;
}
void XoaCot(int arr[][100],int m,int n){
    int k;
    printf("\nNhap gia tri cot muon xoa: ");
    scanf("%d", &k);
    for(int i=0;i<m;i++){
        for(int j=k;j<n;j++){
            arr[i][j]=arr[i][j+1];
        }
    }
    n--;
}
int main(){
    int arr[100][100];
    int m,n;
    printf("\nNhap gia tri m,n :");
    scanf("%d%d",&m,&n);
    nhapmang(arr,m,n);
    XoaDong(arr,m,n);
    xuatmang(arr,m,n);
}