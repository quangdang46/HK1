// in so le tu 1 den n
#include <stdio.h>

int main(){
    int i,n;
    printf("Nhap so can in ra so le: ");scanf("%d",&n);
    for(i=0;i<=n;i++){
       if(i%2==1){
           printf("%d\t",i);
       }
    }
}