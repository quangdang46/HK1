
/*
    Bài tập: Đưa ra số lượng số nguyên tố có trong mảng 1 chiều.
    Nếu có thì liệt kê các số nguyên tố có trong mảng 1 chiều.
*/
// #include <stdio.h>
// #include <math.h>
// #define MAX_SIZE 100 // sức chứa tối đa
 
// void NhapMang(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("Nhap arr[%d] = ", i);
//         scanf("%d", &arr[i]);
//     }
// }
 
// void XuatMang(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("\narr[%d] = %d", i, arr[i]);
//     }
// }
 
// /*
//     Kiểm tra số nguyên tố
// */
// bool IsPrime(int n)
// {
//     if (n < 2)
//         return false;
//     for (int i = 2; i <= sqrt(n); i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
 
// /*
//     Đếm số lượng số nguyên tố
// */
// int PrimeCount(int a[], int n)
// {
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (IsPrime(a[i]))
//         {
//             count++;
//         }
//     }
//     return count;
// }
 
// /*
//     Liệt kê các số nguyên tố
// */
 
// void PrintPrime(int a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (IsPrime(a[i]))
//         {
//             printf("%d\t", a[i]);
//         }
//     }
// }
 
// int main()
// {
//     int arr[MAX_SIZE];
 
//     int n; // số lượng phần tử của mảng
//     // Kiểm tra số lượng phần tử là số dương + nhỏ hơn MAX_SIZE
//     do
//     {
//         printf("Nhap n = ");
//         scanf("%d", &n);
//     } while (n <= 0 || n > MAX_SIZE);
 
//     // Nhập mảng
//     NhapMang(arr, n);
 
//     // Xuất mảng
//     XuatMang(arr, n);
 
//     // Giải bài toán
//     int primeCount = PrimeCount(arr, n);
//     printf("\nSo luong so nguyen to la %d", primeCount);
//     if(primeCount > 0){
//         printf("\nDanh sach so nguyen to: ");
//         PrintPrime(arr, n);
//     }
// }

/*
    Bài tập: Đưa ra số lượng số nguyên tố có trong mảng 1 chiều.
    Nếu có thì liệt kê các số nguyên tố có trong mảng 1 chiều.
*/
#include<math.h>
#include<stdio.h>
#define MAX 100
//Nhap mang
void nhapmang(int arr[],int n){
    for(int i=0;i<n; i++){
        printf("\narr[%d]= ",i);
        scanf("%d", &arr[i]);
    }
}
//Xuat mang
void xuatmang(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("\narr[%d]=%d",i,arr[i]);
    }
}
//Kiem tra so nguyen to
bool kiemtrasnt(int n){
    if(n<3){
        return false;
    }
    for(int i = 2; i <=sqrt(n); i++){
        if(n%i == 0)
            return false;
    }
    return true;
}
//Dem so nguyen to
int demsnt(int arr[],int n){
    int cout = 0;
    for (int i=0;i<n;i++){
        if(kiemtrasnt(arr[i])){
            cout++;
        }
    }
    return cout;
}
//In ra cac so nguyen to
void inrasnt(int arr[],int n){
    for(int i=0;i<n;i++){
        if(kiemtrasnt(arr[i])){
            printf("\t%d",arr[i]);
        }
    }
}
int main(){
    int n;
    int arr[MAX];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    nhapmang(arr,n);
    printf("\n=========");
    xuatmang(arr,n);
    printf("========");
    printf("\nSo luong snt:%d",demsnt(arr,n));
    inrasnt(arr,n);
}