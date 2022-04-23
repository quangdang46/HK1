/*
Bài 18: Cho dãy số nguyên gồm n phần tử. Hãy viết hàm thực hiện các nhiệm vụ sau:
-      Nhập mảng
-      Xuất mảng
-      In ra số lượng các số lớn nhất
-      In ra số lượng các số nhỏ nhất
-      In ra các số có 1chữ số
-      In ra số âm đầu tiên
-      In ra số dương cuối cùng
*/

#include<stdio.h>
void NhapMang(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
}
void XuatMang(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("arr[%d]=%d\n",i,arr[i]);
    }
}
int check1chuso(int n){
    n=n<0?n*(-1):n;
    if(n>=0 && n<=9) return 1;
    return 0;
}
int main(){
    int n,i,arr[100];
    printf("Nhap n:");
    scanf("%d",&n);
    NhapMang(arr,n);
    printf("-------------------\n");
    XuatMang(arr,n);
    int max=arr[0],min=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    int resmin=0,resmax=0;
    for(i=0;i<n;i++){
        if(arr[i]==max){
            resmax++;
        }
        if(arr[i]==min){
            resmin++;
        }
    }
    printf("So luong cac so lon nhat:%d\n",resmax);
    printf("So luong cac so nho nhat:%d\n",resmin);
    printf("Cac so co mot chu so trong mang:");
    for(i=0;i<n;i++){
        if(check1chuso(arr[i])) printf("%d ",arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]<0){
            printf("\nSo am dau tien:%d\n",arr[i]);
            break;
        }
    }
    for(i=n-1;i>=0;i--){
        if(arr[i]>0){
            printf("So duong cuoi cung:%d\n",arr[i]);
            break;
        }
    }


}