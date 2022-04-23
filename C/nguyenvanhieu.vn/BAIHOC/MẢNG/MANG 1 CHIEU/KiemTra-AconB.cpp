#include<stdio.h>
void Nhap(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\nArr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
void XuatMang(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\nArr[%d]=%d",i,arr[i]);
    }
}
int KiemTraMangConLT(int a[],int n1,int b[],int n2){
    int check = 0;
    if(n2<=n1){
        for(int i=0; i < n1; i++){
            if(a[i]==b[0]){
                int j=0;
                for(j=0; j < n2; j++){
                    if(a[i+j]!=b[j]){
                        break;
                    }
                }
                if(j==n2){
                    return check=1;
                }
            }
        }
    }
    return check;
}
int main(){
    int a[100],b[100];
    int n1,n2;
    printf("\nNhap gia tri n1: ");
    scanf("%d",&n1);
    printf("\nNhap gia tri n2: ");
    scanf("%d",&n2);
    Nhap(a, n1);
    printf("\n===");
    Nhap(b, n2);
    printf("\n===");if(KiemTraMangConLT(a,n1,b,n2)){
        printf("\nLa mang con!");
    }else{
        printf("\nKhong mang con!");
    }
}