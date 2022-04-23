// Bài 277: Xóa tất cả các số nguyên tố trong mảng



#include<stdio.h>
void NhapMang(int arr[],int n){
    for(int i=0; i < n; i++){
        scanf("%d",&arr[i]);
    }
}
void XuatMang(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("%d ",arr[i]);
    }
}
int checksnt(int n){
    for(int i=2; i < n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

void XoaPhanTu(int arr[],int &n,int k){
    for(int i=k; i < n; i++){
        arr[i] = arr[i+1];
    }
    n--;
}
void DieuKien(int arr[],int &n){
    for(int i=0; i < n; i++){
        if(checksnt(arr[i])){
            XoaPhanTu(arr,n,i);
            i--;
        }
    }
}
// 0 3 -8 -10 13 14 16
int main(){
    int a[100];
    int n;
    printf("Nhap n:");
    scanf("%d",&n);
    NhapMang(a,n);
    DieuKien(a,n);
    XuatMang(a,n);
}