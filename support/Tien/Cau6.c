#include<stdio.h>
int main(){
    int n,i;
    float sum = 0;
    printf("Nhap n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=1.0*(2*n+1)/(2*n+2);
    }
    printf("Sum=%f",sum);
}