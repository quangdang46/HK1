#include<stdio.h>
#include<math.h>
int main(){
    int n,x,i,sum=0;
    printf("Nhap n va x:");
    scanf("%d%d",&n,&x);
    for(i=1;i<=n;i++){
        sum+=power(x,i);
    }
    printf("sum=%d",sum);
}