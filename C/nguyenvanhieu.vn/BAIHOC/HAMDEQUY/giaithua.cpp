#include<stdio.h>
int giaithua(int n){
    if(n==0||n==1)
        return n;
    return n*giaithua(n-1);
}
int main(){
    int i;
    for(i=1;i<=10;i++){
        printf("%d!=%d\n",i,giaithua(i));
    }
}