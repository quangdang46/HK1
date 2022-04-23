//TÌM MAX CÁC PHẦN TỬ TRONG MẢNG
#include<stdio.h>
#define MAX 100
//Nhap mang
void nhapmang(int arr[],int n){
    for(int i=0;i<n; i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
//Tim max cua MANG
int maxmang(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
//tim MIN cua mang
int minmang(int arr[],int n){
    int min=arr[n-1];
    for (int i=0;i<(n-1);i++){
        if(arr[i]<arr[n-1]){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int n;
    int arr[MAX];
    do{
        printf("\nNhap gioi han cua mang: ");
        scanf("%d", &n);
        nhapmang(arr,n);
    }while(n<0 ||n>=MAX);
    printf("\nMax cua mang la:%d",maxmang(arr,n));
    printf("\nMin cua mang la:%d",minmang(arr,n));
}