#include<stdio.h>
void nhapmang(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
void xoaphantu(int arr[],int n,int k){
    for(int i=k; i < n; i++){
        arr[i] =arr[i+1];
    }
}
void xoaphantu(int arr[],int &n){
    for(int i=0; i < n; i++){
        if(arr[i]<0){
            xoaphantu(arr,n,i);
        }
        n-=1;
    }
}
void xuatmang(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\narr[%d]=%d",i,arr[i]);
    }
}
int main(){
    int n;
    int arr[100];
    printf("Nhap gia tri n: ");
    scanf("%d",&n);
    nhapmang(arr,n);
    xoaphantu(arr,n);
    xuatmang(arr,n);
}