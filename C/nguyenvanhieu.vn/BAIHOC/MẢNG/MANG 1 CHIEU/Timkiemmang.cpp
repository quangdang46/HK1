#include<stdio.h>
//
void nhapmang(int arr[],int n){
    for(int i=0;i<n; i++){
        printf("\narr[%d]=",i);
        scanf("%d",&arr[i]);
    }
}
//xuatmang
void xuatmang(int arr[],int n){
    for(int i=0;i<n; i++){
        printf("\narr[%d]=%d",i,arr[i]);
    }
}
//
int timkiem(int arr[],int n,int &x){
    for (int i=0;i<n;i++){
        if(arr[i]==x){
            return 1;
        }
    }
    return 0;
}
//in ra so lan xuat HIEN
int solanxuathien(int arr[],int n,int &x){
    int cout=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout++;
        }
    }
    return cout;
}
//
int main(){
    int n,x;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    printf("\nNhap gia tri x can tim: ");
    scanf("%d",&x);
    nhapmang(arr,n);
    if(timkiem(arr,n,x)){
        printf("\n%d ton tai trong mang",x);
        printf("\nSo lan xuat hien:%d",solanxuathien(arr,n,x));
    }else{
        printf("\n%d khong ton tai trong mang",x);
    }
    // xuatmang(arr,n);
}