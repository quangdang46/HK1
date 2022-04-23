// CODE 1
// #include <stdio.h>
// #define MAX 1000
// //NHAP MANG
// void nhapmang(int arr[],int n){
//     for(int i=0;i<n; i++){
//         printf("\narr[%d]= ",i);
//         scanf("%d",&arr[i]);
//     }
// }
// //XUAT MANG DAO nguoc
// void xuatmangdaonguoc(int arr[],int n){
//     for(int i=n-1;i>=0;i--){
//         printf("\narr[%d]=%d ",i,arr[i]);
//     }
// }
// int main(){
//     int arr[MAX];
//     int n;
//     //
//     do{
//         printf("\nNhap gioi han n: ");
//         scanf("%d",&n);
//     }while(n<0||n>100);
//     //
//     nhapmang(arr,n);
//     printf("\nMang dao nguoc:");
//     xuatmangdaonguoc(arr,n);

// }

// CODE GIAM DAN
// #include <stdio.h>
 
// int main(){
//     int a[100];
//     int n;
//     printf("\nNhap so luong phan tu n = ");
//     do{
//         scanf("%d", &n);
//         if(n <= 0){
//             printf("\nNhap lai n = ");
//         }
//     }while(n <= 0);
    
//     for(int i = 0; i < n; i++){
//         printf("\nNhap a[%d] = ",i);
//         scanf("%d", &a[i]);
//     }
    
//     // Sap xep dung thuat toan sap xep chon
//     int tg;
//     for(int i = 0; i < n - 1; i++){
//         for(int j = i + 1; j < n; j++){
//             if(a[i] < a[j]){
//                 // Hoan vi 2 so a[i] va a[j]
//                 tg = a[i];
//                 a[i] = a[j];
//                 a[j] = tg;        
//             }
//         }
//     }
    
    
//     printf("\nMang da sap xep la: ");
//     for(int i = 0; i < n; i++){
//         printf("%5d", a[i]);
//     }
    
    
// }
// CODE TANG DAN
// #include <stdio.h>
 
// int main(){
//     int a[100];
//     int n;
//     printf("\nNhap so luong phan tu n = ");
//     do{
//         scanf("%d", &n);
//         if(n <= 0){
//             printf("\nNhap lai n = ");
//         }
//     }while(n <= 0);
    
//     for(int i = 0; i < n; i++){
//         printf("\nNhap a[%d] = ",i);
//         scanf("%d", &a[i]);
//     }
    
//     // Sap xep dung thuat toan sap xep chon
//     int tg;
//     for(int i = 0; i < n - 1; i++){
//         for(int j = i + 1; j < n; j++){
//             if(a[i] > a[j]){
//                 // Hoan vi 2 so a[i] va a[j]
//                 tg = a[i];
//                 a[i] = a[j];
//                 a[j] = tg;        
//             }
//         }
//     }
    
    
//     printf("\nMang da sap xep la: ");
//     for(int i = 0; i < n; i++){
//         printf("%5d", a[i]);
//     }
    
    
// }
// CODE HAM FUNCTION TANG GIAM 
#include <stdio.h>
 
void NhapMang(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("\nNhap a[%d] = ",i);
        scanf("%d", &a[i]);
    }
}
 
void XuatMang(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("%5d", a[i]);
    }
}
 
void TangDan(int a[], int n){
    int tg;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                // Hoan vi 2 so a[i] va a[j]
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
}
 
void GiamDan(int a[], int n){
    int tg;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                // Hoan vi 2 so a[i] va a[j]
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
}
 
int main(){
    int a[100];
    int n;
    printf("\nNhap so luong phan tu n = ");
    do{
        scanf("%d", &n);
        if(n <= 0){
            printf("\nNhap lai n = ");
        }
    }while(n <= 0);
    
    NhapMang(a, n);
    
    printf("\nMang vua nhap la: ");
    XuatMang(a, n);
    
    // Sap xep tang dan:
    TangDan(a, n);
    printf("\nMang sap xep tang dan la: ");
    XuatMang(a, n);
    
    // Sap xep giam dan:
    GiamDan(a, n);
    printf("\nMang sap xep giam dan la: ");
    XuatMang(a, n);
    
}
 