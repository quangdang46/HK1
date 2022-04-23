//KIEM TRA SO CHAN LE
#include<stdio.h>

int main(){
    int n;
    printf("\nNhap so can kiem tra: ");
    scanf("%d",&n);
    if(n!=0){
        if(n%2==1){
            printf("\n%d la so le",n);
        }else{
            printf("\n%d la so chan ",n);
        }
    }else{
        printf("\nKhong chan khong le");
    }
}