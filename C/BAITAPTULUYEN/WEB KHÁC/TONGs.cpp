//tính tổng s=1.2+2.3+..+n(n+1)
#include<stdio.h>
// #include<math.h>
int main(){
    int n;
    printf("Nhap gioi han n:");
    scanf("%d",&n);
    int i,sum,t;
    sum=0;
    for (i = 1; i <= n; i++) {
        t=n*(n+1);
        sum+=t;
    }
    printf("ket qua la:%d",sum);
}