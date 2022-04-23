#include <stdio.h>
 int main(){
    int a,i;
    printf("nhap gioi han du lieu: ");scanf("%d",&a);
    for(i=113;i<=a;i++){
        if(i%2==0){
            printf("%d\t",i);
        }
    }
 }