#include<stdio.h>
int main(){
    int n;
    printf("\nNhap gia cua n: ");
    scanf("%d",&n);
    int dem=0;
    for(int i=1;i<=n;i++){
        if (n%i==0){
            dem++;
        }
    }
    /*
    Số nguyên tố chỉ chia hết cho 1 và chính nó
    Khi vòng lặp for chạy
    gặp số 1 tì đếm lúc dem=1
    nếu không là số nguyên tố thì đếm sẽ tiếp tục tăng là dem!=2  ==>TRẢ RA ĐẾN !=2 
    Neus la số nguyên tố thì khi n% chính nó thì đếm lúc này sẽ bằng 2 ==>TRẢ RA ĐẾM =2
    vì vậy 
    sử dụng if else đếm
    */
    if(dem==2){
        printf("\nLa so nguyen to");
    }else{
        printf("\nKhong phai so nguyen to");
    }
}