#include <stdio.h>
int sohoanhao(int n){
    int tong=0;
    for(int i=1; i<n;i++){
        if(n%i==0){
            tong+=i;
        }
    }
    if(tong==n){
        printf("\nSo hoan hao");
    }else{
        printf("\nKhong phai so hoan hao");
    }
}
int main(){
    int n;
    printf("\nNhap so can kiem tra: ");
    scanf("%d",&n);
    sohoanhao(n);
}