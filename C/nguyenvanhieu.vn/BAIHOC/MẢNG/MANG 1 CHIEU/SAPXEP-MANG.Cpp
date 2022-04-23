//SAP XEP MANG THEO THU TU TANG DAN VA GIAM DAN
#include<stdio.h>
#define MAX 100
//NHAP MANG
void nhapham(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
//HIEN THI MANG
void xuatmang(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%2.d",arr[i]);
    }
}
//SAP XEP MANG TANG DAN
void sapxeptang(int arr[],int n){
    int i,j;
    for(i=0;i<(n-1);i++){
        for(j=(n-1);j>=i;j--){
            if(arr[j]<arr[j-1]){
                int tmp;
                tmp=arr[j];
                arr[j] = arr[j-1];
                tmp=arr[j-1];
            }
        }
    }
}
//SAP XEP giam
void sapxepgiam(int arr[],int n){
    int i,j;
    for(i=0;i<(n-1);i++){
        for(j=(n-1);j>=i;j--){
            if(arr[j]>arr[j-1]){
                int tmp;
                tmp=arr[j];
                arr[j] = arr[j-1];
                tmp=arr[j-1];
            }
        }
    }
}
int main(){
    int n;
    int arr[MAX];
    do{
        printf("\nNhap gioi han n: ");
        scanf("%d",&n);
    }while(n<0||n>MAX);
    //
    nhapham(arr,n);
    sapxeptang(arr,n);
    xuatmang(arr,n);
    sapxepgiam(arr,n);
    xuatmang(arr,n);
}