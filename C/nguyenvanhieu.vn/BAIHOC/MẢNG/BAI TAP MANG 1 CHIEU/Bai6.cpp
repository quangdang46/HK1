#include<stdio.h>
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
void swap(int arr[],int n,int k){
    for(int i=0; i < n; i++){
        if(arr[i]<0){
            arr[i] = k;
        }
    }
    xuatmang(arr,n);
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    int k;
    printf("\nNhap gia tri k can thay the khi am: ");
    scanf("%d",&k);
    nhapmang(arr,n);
    swap(arr,n,k);
}