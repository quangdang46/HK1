
#include <stdio.h>
int main(){
    int n;
    do{
        printf("\nNhap gia tri n: ");
        scanf("%d",&n);
        int tong=0,i=1;
        if(n>0){
            while(i<=n){
                if(i%2==0){
                    tong+=i;
                }
                i++;
            }
            printf("\nTong cac so chan trong day: %d",tong);
        }
    }while(n<0);
}

