#include<stdio.h>
void nhapmang(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
void XoaMang(int arr[],int &n,int k){
    for(int i=k; i < n; i++){
        arr[i] = arr[i+1];
    }
    n-=1; 
}
void XoaSoAm(int arr[],int &n){
    for(int i=0; i < n-1; i++){
        if(arr[i]<0){
            XoaMang(arr,n,i);
        }
    }
}
void xuatmang(int arr[],int n){
    for(int i=0;i < n; i++){
        printf("\narr[%d]=%d",i,arr[i]);
    }
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    nhapmang(arr,n);
    XoaSoAm(arr,n);
    xuatmang(arr,n);
}