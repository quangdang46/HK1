#include<stdio.h>
int arr[100][100];
int sum_bien=0;
void Nhap(int arr[][100],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Nhap phan tu arr[%d][%d]: ",i,j); 
            scanf("%d",&arr[i][j]);
        }
    }
}
void xuat(int arr[][100],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d    ",arr[i][j]);
        }
        printf("\n");
    }
}
//in ra cac phan tu tren 4 duong bien cua ma tran 
void in4bien(int arr[][100],int n){
    int i,j;
    printf("Cac phan tu o 4 bien:\n");
    for(i=0;i<n;i++){
        printf("%d    ",arr[i][0]);
    }
    printf("\n");
    for(i=0;i<n;i++){
        printf("%d    ",arr[i][n-1]);
    }
    printf("\n");
    for(i=0;i<n;i++){
        printf("%d    ",arr[0][i]);
    }
        printf("\n");
    for(i=0;i<n;i++){
        printf("%d    ",arr[n-1][i]);
    }
}
int sum4bien(int arr[][100],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==0 || i==n-1 || j==0 || j==n-1){
                sum_bien+=arr[i][j];
            }
        }
    }
    return sum_bien;
}
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
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);

    //nhap ma tran
    Nhap(arr,n);
    printf("\n");
    //xuat ma tran
    xuat(arr,n);
    printf("\n");

    //in 4 bien
    in4bien(arr,n);
    //sum 4 bien
    printf("Tong cac phan tu o 4 bien: %d",sum4bien(arr,n));
    //kiem tra doi xung qua duong cheo chinh
    KiemTraDoiXungChinh(arr,n);
    return 0;
}