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
void ChuyenVi(int arr[][100],int m,int n){
    int y[100][100];
    int k=n,l=m;//Dong,Cot
    for(int i=0;i<m;i++){
        for(int j=0;j<n; j++){
            y[i][j]=arr[j][i];
        }
    }
    xuatmang(y,k,l);
}
int main(){
    int arr[100][100];
    int m,n;
    printf("\nNhap gia tri m,n :");
    scanf("%d%d",&m,&n);
    nhapmang(arr,m,n);
    ChuyenVi(arr,m,n);
    
}