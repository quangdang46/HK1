/*Nhập 1 dãy số thực không quá 50 phần tử, đưa ra màn hình tổng các số dương trong dãy.
Xóa tất cả các số âm có trong dãy.*/
#include<stdio.h>
void nhapmang(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
void TongChan(int arr[],int n){
    int sum = 0;
    for(int i=0; i < n; i++){
        if(arr[i]%2==0){
            sum+=arr[i];
        }
    }
    printf("\nTong so chan trong day:%d",sum);
}
void XoaMang(int arr[],int &n,int k){
    for(int i=k; i < n; i++){
        arr[i] = arr[i+1];
    }
    n-=1; 
}
void XoaSoAm(int arr[],int &n){
    for(int i=0; i < n-1; i++){
        if(arr[i]<0){
            XoaMang(arr,n,i);
        }
    }
}
void xuatmang(int arr[],int n){
    for(int i=0;i < n; i++){
        printf("\narr[%d]=%d",i,arr[i]);
    }
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    nhapmang(arr,n);
    TongChan(arr,n);
    printf("------------");
    XoaSoAm(arr,n);
    xuatmang(arr,n);
}
// #include<stdio.h>
// #include<conio.h>
// main(){
//     int i, j, n,a[50],s=0;
//     printf("Nhap vao so phan tu ");
//     scanf("%d", &n);
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<n;i++)
//     {
//         if(a[i]>0)
//         {
//             s=s+a[i];
//         }
//     }
//     printf("Tong cac so duong trong day la:%d",s );
// // Xoa tat ca cac so am trong day
//     for(i=0;i<n;i++)
//     {
//         if(a[i]<0)
//          {    
//             for(j=i;j<n-1;j++)
//             {
//                 a[j]=a[j+1];
//             }
//             n=n-1;
//         }
//     }
//     printf("\n Day so sau khi xoa la:");
//     for(i=0;i<n;i++)
//     {
//         printf("%5d", a[i]);
//     }
//     getch();
// }