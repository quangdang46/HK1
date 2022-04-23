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
void swap(int &x, int &y){
    int tmp = x;
    x=y;
    y=tmp;
}
//Noi bot
// void sapxep(int arr[],int n){
//     for(int i=0; i < n; i++){
//         for(int j=i+1; j < n; j++){
//             if(arr[i]>arr[j]){
//                 swap(arr[i],arr[j]);
//             }
//         }
//     }
// }
//Sap xep chon
void sapxep(int arr[],int n){
    for(int i=0; i < n; i++){
        int min=i;
        for(int j=i+1;j < n-1;j++){
            if(arr[i]>arr[j]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }
}
int main(){
    int n = 0;
    printf("Nhap gia tri n: ");
    scanf("%d",&n);
    int arr[100];
    nhapmang(arr,n);
    sapxep(arr,n);
    xuatmang(arr,n);
}