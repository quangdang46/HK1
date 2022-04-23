#include<stdio.h>
void nhapmang(int arr[][100],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n; j++){
            printf("arr[%d][%d]= ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
}
void xuatmang(int arr[][100],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
// Doi xung qua duong cheo chinh
void KiemTraDoiXungChinh(int arr[][100],int n){
    int check=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]!=arr[j][i]){
                check=0;
            }
        }
    }
    if(check==1){
        printf("\nMang doi xung!");
    }else{
        printf("\nMang khong doi xung!");
    }
}
// Doi xung qua duong cheo phu
void KiemTraDoiXungChinh(int arr[][100],int n){
    int check=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]!=arr[n-1-j][n-1-i]){
                check=0;
            }
        }
    }
    if(check==1){
        printf("\nMang doi xung!");
    }else{
        printf("\nMang khong doi xung!");
    }
}
int main(){
    int arr[100][100];
    int n;
    printf("\nNhap gia tri n :");
    scanf("%d",&n);
    nhapmang(arr,n);
    // xuatmang(arr,n,n);
    KiemTraDoiXungChinh(arr,n);
}