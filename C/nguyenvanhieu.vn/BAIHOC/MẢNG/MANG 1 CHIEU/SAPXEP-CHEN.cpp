#include<stdio.h>
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
//sap xep chen
/* Hàm sắp xếp sử dụng thuật toán sắp xếp chèn */
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++){
       key = arr[i];
       j = i-1;
       /* Di chuyển các phần tử có giá trị lớn hơn giá trị 
       key về sau một vị trí so với vị trí ban đầu
       của nó */
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
    }
}
int main(){
    int n;
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    int arr[100];
    nhapmang(arr,n);
    xuatmang(arr,n);
}