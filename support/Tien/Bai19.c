#include<stdio.h>
/*
Bài19: : Cho dãy số thực n phần tử. Hãy viết hàm thực hiện các nhiệm vụ sau:
-      Nhập mảng
-      Xuất mảng
-      In ra các số có giá trị nguyên
-      Kiểm tra xem dãy có tăng dần hay không? Yes nếu có, No nếu không.
-      Đếm các số dương
-      Đếm các số âm
*/ 
void NhapMang(float arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("arr[%d]=",i);
        scanf("%f",&arr[i]);
    }
}
void XuatMang(float arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("arr[%d]=%f\n",i,arr[i]);
    }
}
int TangDan(float arr[],int n){
    int i;
    for(i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n,i;
    float arr[100];
    printf("Nhap n:");
    scanf("%d",&n);
    NhapMang(arr,n);
    printf("-------------------\n");
    XuatMang(arr,n);
    for(i=0;i<n;i++){
        if(arr[i]-(int)arr[i]==0){
            printf("%g ",arr[i]);
        }
    }
    if(TangDan(arr,n)){
        printf("\nYes\n");
    }else{
        printf("No\n");
    }
    int resduonng=0,resam=0;
    for(i=0;i<n;i++){
        if(arr[i]>0){
            resduonng++;
        }else{
            resam++;
        }
    }
    printf("So luong so duong:%d\n",resduonng);
    printf("So luong cac so am:%d\n",resam);
}