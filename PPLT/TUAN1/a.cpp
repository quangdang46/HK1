#include<stdio.h>
int main(){
    int n,tong;
    tong=0;
    printf("\nNhap n: ");scanf("%d",&n);
    for(int i=1;i<=(2*n+1);i+=2){
        tong+=i;
    }
    printf("\nTong cua day la:%d",tong);
}