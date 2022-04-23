#include<stdio.h>
#include<math.h>
int main(){
    int n,swapnum=0;
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    do{
        swapnum=swapnum*10+n%10;
    }while(n/=10);
    /*
    while(n!=0){
        swapnum=swapnum*10+n%10;
        n/=10;
    }
    */
    printf("\nGia tri sau khi dao nguoc la:%d",swapnum);
}
