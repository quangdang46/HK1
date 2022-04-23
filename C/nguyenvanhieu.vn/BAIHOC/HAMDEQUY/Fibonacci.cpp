#include<stdio.h>
int fibo(int n){
    if(n==0||n==1)
        return n;
    return fibo(n-2)+fibo(n-1);
}
int main(){
    int i;
    for(i=0;i<=10;i++){
        printf("%d\t",fibo(i));
    }
}