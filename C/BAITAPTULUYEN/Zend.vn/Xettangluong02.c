//XET DUYET TANG LUONG 02
/*
Tb>7 tang luong
tb<7 1 dem >8 tang luong ,con lai khong
*/
#include<stdio.h>
//
int MaxTwoNum(int a, int b){
    return (a>=b) ? a : b;
}
float Tb(int a,int b,int c){
    return (a+b+c)/3;
}
int main(){
    int a,b,c,Max;
    printf("\nNhap cac diem lan luot la: ");
    scanf("%d%d%d",&a,&b,&c);
    Max=MaxTwoNum(c,MaxTwoNum(a,b));
    if(Tb(a,b,c)>=7 || Max>=8){
        printf("\nDuoc tang luong");
    }else{
        printf("\nKhong duoc tang luong");
    }
}
