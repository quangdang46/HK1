#include<stdio.h>
#include<limits.h>
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
//Tim max thu 2
int MaxThuHai(int arr[],int n){
    int max=INT_MIN;
    int max_2=INT_MIN;
    for(int i=0; i < n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]==max){
            continue;
        }else{
            if(arr[i]>max_2){
                max_2=arr[i];
            }
        }
    }
    return max_2;
}
//TimMinThu2
int MinThuHai(int arr[],int n){
    int min=INT_MAX;
    int min_2= INT_MAX;
    for(int i=0; i < n; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    for(int i=0; i < n; i++){
        if(arr[i]==min){
            continue;
        }else{
            if(arr[i]<min_2){
                min_2=arr[i];
            }
        }
    }
    return min_2;
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    nhapmang(arr,n);
    xuatmang(arr,n);
    int ln2=MaxThuHai(arr,n);
    printf("\nGia tri lon nhat thu 2:%d",ln2);
    printf("\n--------------------------------");
    int nn2=MinThuHai(arr,n);
    printf("\nGia tri nho nhat thu 2:%d",nn2);

}