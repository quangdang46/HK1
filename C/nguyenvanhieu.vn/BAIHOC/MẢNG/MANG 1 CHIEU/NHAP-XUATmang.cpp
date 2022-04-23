//NHAP XUAT 1 MANG
#include<stdio.h>
#define MAX 100
void Nhapmang(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
void Xuatmang(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("\narr[%d]=%d ",i,arr[i]);

    }
}
int main(){
    int arr[MAX];
    int n;
    do{
        printf("\n Nhap gia tri n: ");
        scanf("%d",&n);
    }while(n<0||n>MAX);

    //NHAP MANG
    Nhapmang(arr,n);
    // for(int i=0; i<n; i++){
    //     printf("\narr[%d]= ",i);
    //     scanf("%d",&arr[i]);
    // }
    printf("\n=======");
    Xuatmang(arr,n);

    //XUAT MANG
//     for(int i=0; i<n; i++){
//         printf("\narr[%d]=%d",i,arr[i]);
//     }
}

