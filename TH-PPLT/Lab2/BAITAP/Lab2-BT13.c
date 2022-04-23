#include<stdio.h>
#include<math.h>
int dem(int n){
    int cout=0;
    while(n>0){
        n/=10;
        cout++;
    }
    return cout;
}
int kiemtra(int n){
    int mu=dem(n);
    int last,tmp=n,sum=0;
    while(tmp>0){
        last=tmp%10;
        tmp/=10;
        sum+=pow(last,mu);
    }
    if(sum==n){
        printf("\nSo Amtrong!");
    }else{
        printf("\nKhong phai so Amtrong!");
    }
}
int main(){
    int n;
    printf("\nNhap so can kiem tra: ");
    scanf("%d",&n);
    kiemtra(n); 
}