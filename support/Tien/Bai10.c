#include<stdio.h>
#include<math.h>
int main(){
    int n,x,i,res=1;
    float sum=0;
    printf("Nhap n va x:");
    scanf("%d%d",&n,&x);
    for(i=1;i<=n;i++){
        res*=i;
        sum+=1.0*pow(x,i)/res;
    }
    printf("sum=%f",sum);
}