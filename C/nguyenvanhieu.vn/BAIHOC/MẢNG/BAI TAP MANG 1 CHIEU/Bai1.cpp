#include<stdio.h>
void nhapmang(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
// void xuatmang(int arr[],int n){
//     for(int i=0; i < n; i++){
//         printf("\narr[%d]=%d",i,arr[i]);
//     }
// }
void TbMang(int arr[],int n){
    int cout = 0;
    int index = 0;
    for(int i=0; i < n; i++){
        if(i%2==0&&arr[i]%2==1){
            cout+=arr[i];
            index++;
        }
    }
    float Tb=(float)cout/index;
    printf("\nTb phan tu le o vi tri chan:%f",Tb);
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    nhapmang(arr,n);
    TbMang(arr,n);
}