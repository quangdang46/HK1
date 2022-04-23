#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//RANDOM SỐ NGUYÊN ĐẾN N

int main(){
    int n,m,i;
    printf("nhap gioi han: ");scanf("%d",&n);
    srand(time(NULL));
    for(i=0;i<=n;i++){
        int m=rand()%n;
        printf("%d\n",m);
    }
}