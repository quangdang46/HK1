#include<stdio.h>
void nhapmang(int arr[][100],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Arr[%d][%d]= ",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
}
void xuatmang(int arr[][100],int m,int n){
    for(int i=0;i<m; i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
int TinhTong(int arr[][100],int m,int n){
    int cout = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout+=arr[i][j];
        }
    }
    return cout;
}
void TinhTrungBinh(int arr[][100],int m,int n){
    int SoLuong=m*n;
    int Tong=TinhTong(arr,m,n);
    printf("\nGia tri trung binh cua mang:%f",(float)Tong/SoLuong);
}
int main(){
    int m,n;
    int arr[100][100];
    printf("\nNhap gia tri m,n: ");
    scanf("%d%d",&m,&n);
    nhapmang(arr,m,n);
    xuatmang(arr,m,n);
    TinhTrungBinh(arr,m,n);
}