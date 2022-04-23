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
int MaxMang(int arr[],int n){
    int max=arr[0];
    for(int i=1;i < n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int n;
    printf("Nhap gia tri n: ");
    scanf("%d",&n);
    int arr[100];
    nhapmang(arr,n);
    printf("\nGia tri lon nhat cua mang:%d",MaxMang(arr,n));
}