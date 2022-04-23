#include<stdio.h>
#include<limits.h>
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
// Kiem tr max cua hang
void KiemMaxHang(int arr[][100],int m,int n){
    int hang;
    printf("\nNhap gia tri dong can kiem tra: ");
    scanf("%d",&hang);
    int MaxHang=arr[hang][0];
    for(int j=0;j<n;j++){
        if(arr[hang][j]>MaxHang){
            MaxHang=arr[hang][j];
        }
    }
    printf("\nMax cua hang %d la: %d",hang,MaxHang);
}
// Kiem tra Max cua cot
void KiemMaxCot(int arr[][100],int m,int n){
    int cot;
    printf("\nNhap gia tri cot can kiem tra: ");
    scanf("%d",&cot);
    int MaxCot=arr[0][cot];
    for(int i=0;i<m;i++){
        if(arr[i][cot]>MaxCot){
            MaxCot=arr[i][cot];
        }
    }
    printf("\nMin cua cot %d la: %d",cot,MaxCot);
}

void KiemMinHang(int arr[][100],int m,int n){
    int hang;
    printf("\nNhap gia tri dong can kiem tra: ");
    scanf("%d",&hang);
    int MinHang=arr[hang][0];
    for(int j=0;j<n;j++){
        if(arr[hang][j]<MinHang){
            MinHang=arr[hang][j];
        }
    }
    printf("\nMin cua hang %d la: %d",hang,MinHang);
}
//
void KiemMinCot(int arr[][100],int m,int n){
    int cot;
    printf("\nNhap gia tri cot can kiem tra: ");
    scanf("%d",&cot);
    int MinCot=arr[0][cot];
    for(int i=0;i<m;i++){
        if(arr[i][cot]<MinCot){
            MinCot=arr[i][cot];
        }
    }
    printf("\nMin cua hcot %d la: %d",cot,MinCot);
}
int main(){
    int luachon;
    int m,n;
    int arr[100][100];
    printf("\nNhap gia tri m,n: ");
    scanf("%d%d",&m,&n);
    nhapmang(arr,m,n);
    // xuatmang(arr,m,n);
    printf("\nMENU");
    printf("\n1.Max Hang");
    printf("\n2.Max Cot");
    printf("\nMin Hang");
    printf("\nMin Cot");
    printf("\n0.Thoat");
    printf("\nNhap lua chon: ");
    scanf("%d",&luachon);
    switch(luachon){
        case 1:{
            KiemMaxHang(arr,m,n);
            break;
        }
        case 2:{
            KiemMaxCot(arr,m,n);
            break;
        }
        case 3:{
            KiemMinHang(arr,m,n);
            break;
        }
        case 4:{
            KiemMinCot(arr,m,n);
            break;
        }
        case 0:{
            break;
        }
        default:printf("\nBan kiem tra lai lua chon!");
    }
}