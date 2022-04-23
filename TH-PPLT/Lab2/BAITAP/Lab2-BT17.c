#include<stdio.h>
int shh(int n){
    int tong=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            tong+=i;
        }
    }
    if(tong==n)
        return 1;
    return 0;
}
int main(){
    int n;
    printf("\nNhap so han n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(shh(i)){
            printf("%d\t",i);
        }
    }
}
