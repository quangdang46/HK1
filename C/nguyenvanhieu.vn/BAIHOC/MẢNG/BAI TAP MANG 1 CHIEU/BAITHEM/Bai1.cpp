// Bài tập in ra các số nguyên tố trong mảng
#include<stdio.h>
#include<math.h>
void nhapmang(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
int main(){
    int n = 0;
    int arr[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    nhapmang(arr,n);
    bool check=true;
    for(int i=0; i < n; i++){
        int check=1;
        for(int j=2;j<=sqrt(arr[i]);j++){
            if(arr[i]%j==0){
                check=0;
            }
        }
        if(check==1&&arr[i]>2){
            printf("\nSo nguyen to la:%d O vi tri:%d",arr[i],i+1);
        }
    }
}