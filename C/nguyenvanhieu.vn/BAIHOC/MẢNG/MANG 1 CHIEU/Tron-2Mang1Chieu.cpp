#include<stdio.h>
void nhapmang(int arr[],int n){
    for(int i=0;i<n; i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
void xuatmang(int arr[],int n){
    for(int i=0;i<n; i++){
        printf("\narr[%d]=%d",i,arr[i]);
    }
}
void sapxep(int arr[],int n){
    for(int i=0;i<n; i++){
        for(int j=i+1;j<n; j++){
            if(arr[i]> arr[j]){
                int tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
}
void tronMang(int a[100],int n,int b[100],int m,int c[200],int &x ){
    int i1=0,i2=0,i3=0;
    x=m+n;
    while(i3<x){
        if(i1>=n){
            c[i3]=b[i2];
            i2++;
        }else if(i2>=m){
            c[i3]=a[i1];
            i1++;
        }else if(a[i1]<b[i2]){
            c[i3]=a[i1];
            i1++;
        }else{
            c[i3]=b[i2];
            i2++;
        }
        i3++;
    }
}
int main(){
    int n,m,x;
    int a[100],b[100],c[200];
    printf("\nNhap gia tri n,m: ");
    scanf("%d%d",&n,&m);
    nhapmang(a,n);
    sapxep(a,n);
    nhapmang(b,n);
    sapxep(b,m);
    tronMang(a,n,b,m,c,x);
    xuatmang(c,x);
}
// https://www.youtube.com/watch?v=g0CPO-k_JII
// https://nguyenvanhieu.vn/bai-tap-mang-2-chieu-co-loi-giai/#dang-1-bai-tap-nhap-xuat-mang-2-chieu