// Bai tap sap xep chon
#include<stdio.h>
void nhapmang(int arr[],int n){
    for(int i=0;i<n; i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
void xuatmang(int arr[],int n){
    for(int i=0;i<n; i++){
        printf("\narr[%d]=%d",i,arr[i]);
    }
}
void swap(int &x,int &y){
    int tmp=x;
    x=y;
    y=tmp;
}
//Ham sap xep chon
void sapxep(int arr[],int n){
    for(int i=0;i<n; i++){
        int min=i;
        for(int j=i+1;j<n-1; j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }
}
//
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    nhapmang(arr,n);
    sapxep(arr,n);
    xuatmang(arr,n);
}
// YTB https://www.youtube.com/watch?v=IMWCALHGxYk