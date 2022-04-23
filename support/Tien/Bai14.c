#include<stdio.h>
int main(){
    int k,i=-1,sum=0;
    printf("Nhap k:");
    scanf("%d",&k);
    while(sum<k){
        i++;
        sum+=i;
    }
    printf("So n thoa man:%d",i+1);
}