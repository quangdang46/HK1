#include<stdio.h>
#include<limits.h>
void nhapmang(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
void xuatmang(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\narr[%d]=%d",i,arr[i]);
    }
}
// Dao Nhuoc Mang Cach 1
void DaoNguoc1(int arr[],int n){
    for(int i=n-1; i>=0; i--){
        printf("%3.d",arr[i]);
    }
}
// Dao Nguoc Loai 2
void DaoNguoc2(int arr[],int n){
    for(int i=0; i<n/2; i++){
        int tmp=arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1]=tmp;
    }
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    nhapmang(arr,n);
    // DaoNguoc1(arr,n);
    DaoNguoc2(arr,n);
    xuatmang(arr,n);
}