#include<stdio.h>
//cach 1 khong de quy
// int SumNo(int n){
//     int sum1=0;
//     for ( int i = 1; i<=n;i++){
//         sum1+=i;
//     }
//     return sum1;
    
// }
//cach 2 dung ham de quy
int SumYes(int n){
    if(n==0){return 0;
    }else{
        return n+SumYes(n-1);
    }
}

int main(){
    int n;
    printf("nhap n ");scanf("%d",&n);
    // int tong1=SumNo(n);
    // printf("\ntong1 la:%d",tong1);
    int tong2=SumYes(n);
    printf("\ntong2 la:%d",tong2);
}