#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    int k=n;
    int cout = 0;
    while(n!=0){
        int last = n%10;
        cout+=pow(last,3);
        n/=10;
    }
    if(cout==k){
        printf("\nDay la so amstrong!");
    }else{
        printf("\nDay khong phai la so amstrong!");
    }
}