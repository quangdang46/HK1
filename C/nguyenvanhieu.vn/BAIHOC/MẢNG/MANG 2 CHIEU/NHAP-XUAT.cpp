// #include<stdio.h>
// void nhapmang(int arr[][100],int m,int n){
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             printf("\narr[%d][%d]= ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
// }
// void xuatmang(int arr[][100],int m,int n){
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             printf("%5.d",arr[i][j]);
//         }
//         printf("\n");
//     }
// }
// int main(){
//     int m,n;
//     int arr[100][100];
//     printf("\nNhap gia tri m,n: ");
//     scanf("%d%d",&m,&n);
//     nhapmang(arr,m,n);
//     xuatmang(arr,m,n);
// }
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
int main(){
    int m,n;
    int arr[100][100];
    printf("\nNhap gia tri m,n ");
    scanf("%d%d",&m,&n);
    nhapmang(arr,m,n);
    xuatmang(arr,m,n);
}