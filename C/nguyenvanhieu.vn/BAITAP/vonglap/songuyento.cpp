/*
In ra các số nguyên tố nhỏ hơn 1000.
Bài tập nhỏ:
1. Kiểm tra số nhập từ bàn phím có phải SNT không?
*/
#include<stdio.h>
#include<math.h>
int main(){
    int a,i,mark;
    printf("Nhap gia tri can kiem tra: ");scanf("%d",&a);
    if(a<2){
        printf("\nKhong phai so nguyen to");
    }else{
        mark=1;
        for(i=2;i<=sqrt(a);i++){
            if(a%i==0){
                mark=0;
                break;
            }
        }
        if(mark==1){
            printf("so nguyen to");
        }else{
            printf("\nkhong phai so nguyen to");
        }
    }
}

