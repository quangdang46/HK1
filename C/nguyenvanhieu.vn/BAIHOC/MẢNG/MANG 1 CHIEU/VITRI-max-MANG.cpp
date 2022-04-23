/*Bài tập tìm vị trí của số lớn nhất
Tìm tất cả các vị trí của số lớn nhất trong mảng 1 chiều.
Ý tưởng giải bài tập:
Coi số đầu tiên trong mảng là số lớn nhất => chỉ số của số lớn nhất là 0:
max = a[0]
index = 0
Duyệt qua từng số trong mảng => Sử dụng for, Nếu số hiện tại a[i] lớn hơn max:
max = a[i];
index = i;
Lưu ý vị trí = chỉ số + 1
Giải bài toán:
1. Tìm giá trị lớn nhất của mảng
2. Duyệt và đưa ra các vị trí có giá trị = giá trị lớn nhất.
*/ 

#include<stdio.h>
#define MAX 100
//Nhap mang
void nhap(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
//TIM SO LON NHAT VA VI TRI CUA SO DO
int timmax(int arr[],int n){
    int max=arr[0];
    int index=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
//tim vi tri cua gt max
void getmax(int arr[],int n){
    int max=timmax(arr,n);
    printf("vi tri bien max la:");
    for(int i=0;i<n;i++){
        if(arr[i]==max){
            printf("%2.d",i+1);
        }
    }
}
//
int main(){
    int n;
    int arr[MAX];
    do{
        printf("Nhap gioi han cua mang: ");
        scanf("%d",&n);
    }while(n<0||n>MAX);
    nhap(arr,n);
    getmax(arr,n);
    
}