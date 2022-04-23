#include<stdio.h>
void nhapmang(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
// //
// void swap(int &x, int &y){
//     int tmp=x;
//     x=y;
//     y=tmp;
// }
// //
// void sapxep(int arr[],int n){
//     for(int i=0; i < n; i++){
//         for(int j=i+1; j < n; j++){
//             if(arr[i]<arr[j]){
//                 swap(arr[i],arr[j]);
//             }
//         }
//     }
// }
// //
// int Max2Arr(int arr[],int n){
//     sapxep(arr,n);
//     return arr[1];
// }
//
int FindWithLoop(int arr[],int n){
    int firstMax,secondMax;
    if(arr[0]>arr[1]){
        firstMax=arr[0];
        secondMax=arr[1];
    }else{
        firstMax=arr[1];
        secondMax=arr[0];
    }
    //Kiểm tra thử có số nào lơn hơn max1 trước r mới kt max2 sau
    for(int i=2; i < n; i++){
        if(arr[i]>=firstMax){
            secondMax=firstMax;
            firstMax=arr[i];
        }else if(arr[i]>secondMax){
            secondMax=arr[i];
        }
    }
    return secondMax;
}
int main(){
    int n;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    nhapmang(arr,n);
    // Max2Arr(arr,n);
    printf("\nSo lon nhat thu 2:%d",FindWithLoop(arr,n));
}