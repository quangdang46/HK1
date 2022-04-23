// // Code from https://nguyenvanhieu.vn
 
// #include <stdio.h>
// //ham hoan vi 2 so
// void swap(int &x, int &y)
// {
//     int temp = x;
//     x = y;
//     y = temp;
// }
 
// // Hàm sắp xếp bubble sort
// void bubbleSort(int arr[], int n)
// {
//     int i, j;
//     bool haveSwap = false;
//     for (i = 0; i < n-1; i++){
//     // i phần tử cuối cùng đã được sắp xếp
//         haveSwap = false;
//         for (j = 0; j < n-i-1; j++){
//             if (arr[j] > arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//                 haveSwap = true; // Kiểm tra lần lặp này có swap không
//             }
//         }
//         // Nếu không có swap nào được thực hiện => mảng đã sắp xếp. Không cần lặp thêm
//         if(haveSwap == false){
//             break;
//         }
//     }
// }
 
// /* Hàm xuất mảng */
// void printArray(int arr[], int size)
// {
//     int i;
//     for (i=0; i < size; i++)
//         printf("%d ", arr[i]);
//     printf("n");
// }
 
// // Driver program to test above functions
// int main()
// {
//     int arr[] = {64, 34, 25, 12, 22, 11, 90};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     bubbleSort(arr, n);
//     printf("Sorted array: n");
//     printArray(arr, n);
//     return 0;
// }
#include<stdio.h>
void nhap(int arr[],int n) {
    for (int i=0; i < n; i++){
        printf("\narr[%d]=",i);
        scanf("%d",&arr[i]);
    }
}
//
void xuat(int arr[],int n) {
    for (int i=0; i<n; i++){
        printf("\narr[%d]=%d",i,arr[i]);
    }
}
//
//Sap xep noi bot
void sap(int arr[],int n) {
    int tmp;
    for (int i=0; i<n; i++){
        for(int j=n-1;j> i; j--){
            if(arr[j-1]>arr[j]){
                tmp=arr[j];
                arr[j]= arr[j-1];
                arr[j-1]=tmp;
            }
        }
    }
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d", &n);
    nhap(arr,n);
    sap(arr,n);
    xuat(arr,n);
}