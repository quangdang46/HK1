#include <stdio.h>

int main(){
    int n;
    printf("\nNhap gia tri can doi gia tri tuyet doi: ");
    scanf("%d",&n);
    if(n<=0){
        n*=-1;
        printf("\nGia tri tuyet doi:%d",n);
    }else{
        printf("\nGia tri tuyet doi:%d",n);
    }
}