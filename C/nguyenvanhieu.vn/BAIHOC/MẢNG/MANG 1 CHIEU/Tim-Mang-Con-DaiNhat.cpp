// https://www.youtube.com/watch?v=zvf4D30YPdE
// Mang khong giam lien tiep
#include<stdio.h>
void NhapMang(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\nArr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
void xuatmang(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\nArr[%d]=%d",i,arr[i]);
    }
}
int TimMax(int a[100],int n){
    int max=a[0];
    for(int i=0; i<n; i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}
void InMangConDaiNhat(int a[],int n,int b[]){
    for(int i=0; i < n; i++){
        b[i] = 1;   
    }
    for(int i=n-1; i>0; i--){
        if(a[i]>=a[i-1]){
            b[i-1] =b[i]+1;
        }
    }
    printf("\nMang B:");
    xuatmang(b,n);
    int soluong=TimMax(b,n);
    for(int i=0; i < n; i++){
        if(b[i]==soluong){
            printf("\nMang thoa man:");
            for(int j=i; j <soluong+i; j++){
                printf("%d ",a[j]);
            }
        }
    }
}
int main(){
    int n;
    int a[100],b[100];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    NhapMang(a,n);
    InMangConDaiNhat(a,n,b);
}