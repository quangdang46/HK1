#include<stdio.h>
void NhapMang(float arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("arr[%d]=",i);
        scanf("%f",&arr[i]);
    }
}

int main(){
    int n,i;
    float arr[100];
    printf("Nhap n:");
    scanf("%d",&n);
    NhapMang(arr,n);
    printf("-------------------\n");
    int max =arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("Gia tri lon nhat trong mang:%d\n",max);
}