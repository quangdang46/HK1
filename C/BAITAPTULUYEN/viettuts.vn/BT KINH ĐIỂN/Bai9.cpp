/*
Bài 03: Viết một chương trình C tính giai thừa của một số bằng cách không sử dụng đệ quy và có sử dụng đệ quy.
*/
#include<stdio.h>
// SỬ DỤNG HÀM ĐỆ QUY VÀ HÀM FUNCTION
// int giaithua(int a){
//     if(a==0||a==1)
//         return a;
//     return a*giaithua(a-1);
// }
int main(){
    int n;
    int i;
    printf("Nhap so can tinh gia thua: ");scanf("%d",&n);
    // SỬ DỤNG HÀM FUNCTION
    // printf("\ngiai thua cua %d la: %d",n,giaithua(n));
    //KHÔNG SỬ DỤNG HÀM ĐỀ quy
    if(n==0||n==1){
        printf("%d!=%d",n,n);
    }else{
        int giaithua=1;
        for(i=n;i>=2;i--){
            giaithua*=i;
        }
        printf("%d!=%d",n,giaithua);
    }
}