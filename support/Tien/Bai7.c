#include<stdio.h>
int main(){
    int n,i,sum=0,res=1;
    printf("Nhap n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        res*=i;
        sum+=res;
    }
    printf("sum=%d",sum);
}