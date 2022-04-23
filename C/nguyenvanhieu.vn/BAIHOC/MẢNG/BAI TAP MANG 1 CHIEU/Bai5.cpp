#include<stdio.h>
#include<math.h>
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
bool KiemTraSNT(int x){
    if(x<2){
        return false;
    }
    for(int i=2;i<=sqrt(x);i++) {
        if(x%2 == 0){
            return false;
        }
    }
    return true;
}
void InSNT(int arr[],int n){
    for(int i=0; i < n; i++){
        if(KiemTraSNT(arr[i])){
            printf("%3.d",arr[i]);
        }
    }
}
int main(){
    int n;
    printf("Nhap gia tri n: ");
    scanf("%d",&n);
    int arr[100];
    nhapmang(arr,n);
    InSNT(arr,n);
}