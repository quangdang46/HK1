#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    int max=INT_MIN,min=INT_MAX;
    printf("Nhap n: ");
    scanf("%d",&n);
    n<0?-1*n:n;
    while(n!=0){
        int last=n%10;
        if(last>max) max=last;
        if(last<min) min=last;
        n/=10;
    }
    printf("Max=%d\n",max);
    printf("Min=%d",min);
}