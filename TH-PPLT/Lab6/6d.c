#include<stdio.h>
#include<math.h>
float Exd(int n){
    if(n==1) return 1;
    return sqrt(n)+Exd(n-1);
}
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    printf("Gia tri:%f",Exd(n));
}