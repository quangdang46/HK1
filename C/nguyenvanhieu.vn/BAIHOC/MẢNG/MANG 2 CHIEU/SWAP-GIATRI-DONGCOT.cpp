#include<stdio.h>
// https://www.youtube.com/watch?v=mlseJHJ4qqs&list=PLyxSzL3F7487Nh-ib25lcLEzhL5mgZkFJ&index=60
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
// Đảo ngược 2 hàng không thay đổi chỉ số cột
void DaoNguoc2Hang(int arr[][100],int m,int n){
    int k,y;
    printf("\nNhap 2 hang can trao doi vi tri: ");
    scanf("%d%d",&k,&y);
    for(int i=0;i<n;i++){
        int tmp= arr[k][i];
        arr[k][i]=arr[y][i];
        arr[y][i]=tmp;
    }
}
// Đảo ngược 2 cột không thay đổi sô hàng
// void DaoNguoc2Cot(int arr[][100],int m,int n){
//     int k,y;
//     printf("\nNhap 2 cot can trao doi vi tri: ");
//     scanf("%d%d",&k,&y);
//     for(int i=0;i<m;i++){
//         int tmp= arr[i][k];
//         arr[i][k]=arr[i][y];
//         arr[i][y]=tmp;
//     }
// }
int main(){
    int arr[100][100];
    int m,n;
    printf("\nNhap gia tri m,n :");
    scanf("%d%d",&m,&n);
    nhapmang(arr,m,n);
    DaoNguoc2Hang(arr,m,n);
    xuatmang(arr,m,n);

}