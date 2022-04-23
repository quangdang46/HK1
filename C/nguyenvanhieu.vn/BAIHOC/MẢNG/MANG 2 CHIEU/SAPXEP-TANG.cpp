#include<stdio.h>
// https://www.youtube.com/watch?v=9C6RwOwtSt4&list=PLyxSzL3F7487Nh-ib25lcLEzhL5mgZkFJ&index=58
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
            printf("arr[%d][%d]=%d\n",i,j,arr[i][j]);
        }
    }
}
void sapxepgiam(int arr[][100],int m,int n){
    int k=m*n;
    for(int i=0;i<k-1;i++){
        for(int j=i+1;j<k;j++){
            if(arr[i/n][i%n]<arr[j/n][j%n]){
                int tmp = arr[i/n][i%n];
                arr[i/n][i%n]=arr[j/n][j%n];
                arr[j/n][j%n]=tmp;
            }
        }
    }
}
void sapxeptang(int arr[][100],int m,int n){
    int k=m*n;
    for(int i=0;i<k-1;i++){
        for(int j = i + 1; j < k; j++){
            if(arr[i/n][i%n]>arr[j/n][j%n]){
                int tmp = arr[i/n][i%n];
                arr[i/n][i%n]=arr[j/n][j%n];
                arr[j/n][j%n]=tmp;
            }
        }
    }
}
int main(){
    int arr[100][100];
    int m,n;
    printf("\nNhap gia tri m,n :");
    scanf("%d%d",&m,&n);
    nhapmang(arr,m,n);
    printf("\n=========");
    sapxeptang(arr,m,n);
    xuatmang(arr,m,n);
    printf("\n========");
    sapxepgiam(arr,m,n);
    xuatmang(arr,m,n);

}