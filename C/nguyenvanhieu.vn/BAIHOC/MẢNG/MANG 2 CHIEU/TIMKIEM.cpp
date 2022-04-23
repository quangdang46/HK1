#include<stdio.h>
void nhapmang(int arr[][100],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n; j++){
            printf("arr[%d][%d]= ",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
}
void xuatmang(int arr[][100],int m,int n){
    for(int i=0; i < m; i++){
        for(int j=0;j<n;j++){
            printf("%3.d",arr[i][j]);
        }
        printf("\n");
    }
}
void CheckTimKiem(int arr[][100],int m,int n,int GiaTriTim){
    int check = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==GiaTriTim){
                check=1;
            }
        }
    }
    if(check==1){
        printf("\nDa tim thay!");
    }else{
        printf("\nKhong tim thay trong mang!");
    }
}
void ThucHienTim(int arr[][100],int m,int n){
    int x;
    printf("\nNhap gia tri can tim x: ");
    scanf("%d", &x);
    CheckTimKiem(arr,m,n,x);
}
int main(){
    int m,n;
    int arr[100][100];
    printf("\nNhap gia tri m,n ");
    scanf("%d%d",&m,&n);
    nhapmang(arr,m,n);
    // xuatmang(arr,m,n);
    ThucHienTim(arr,m,n);
}