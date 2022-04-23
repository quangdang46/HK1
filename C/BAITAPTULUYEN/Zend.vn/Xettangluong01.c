//XET DUYET TANG LUONG 01
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
    printf("\nMax:%d",Max);  
    printf("\nDiem TB:%2.f",Tb(a,b,c)); 
}