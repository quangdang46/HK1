#include<stdio.h>
#include<math.h>
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
bool KiemTraCP(int n){
    int k=sqrt(n);
    if(k==n){
        return true;
    }
    return false;
}
int DemCP(int arr,int n){
    int cout=0;
    for(int i=0;i < n;i++){
        int gt=arr[i];
        KiemTraCP(gt){
            cout++;
        }
    }
    return cout;
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    nhapmang(arr,n);
    printf("\nSo luong so chinh phuong trong mang:%d",DemCP(arr,n));
}