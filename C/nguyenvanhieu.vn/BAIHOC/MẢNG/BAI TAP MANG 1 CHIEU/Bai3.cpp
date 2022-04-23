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
int MinMang(int arr[],int n){
    int min=arr[n-1];
    for(int i=n-2;i>=0; i--){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int n;
    printf("Nhap gia tri n: ");
    scanf("%d",&n);
    int arr[100];
    nhapmang(arr,n);
    printf("\nGia tri nho nhat cua mang:%d",MinMang(arr,n));
}