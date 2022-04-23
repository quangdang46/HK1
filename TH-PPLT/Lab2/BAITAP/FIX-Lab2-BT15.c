#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("\nNhap gia tri n>0: ");
    scanf("%d",&n);
    int i,j;
    int check=1;
    for(i=2;i<=n;i++){
        for(j=1;j<sqrt(i);j++){
            if(i%j==0){
                check=0;
            }
        }
        if(check=1){
            printf("%d\t",i);
        }
        check=1;
    }
}