#include<stdio.h>
int main(){
    int n,c;
    printf("In ra so nguyen to tu 1 den n:");scanf("%d",&n);
    c=1;
    int j,i;
    for(i=2;i<=n;i++){
        for(j=2;j=i-1;j++){
            if(i%j==0){
                c=0;
            }
        }
        if(c==1){
            printf("%d\t",i);
        }
        c=1;
    }
}