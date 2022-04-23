#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Nhap n:");
    scanf("%d",&n);
    for(i=1; i<n;i++){
        if(n%i==0 &&i%2==1){
            sum+=i;
        }
    }
    printf("Tong UC le:%d",sum);
}