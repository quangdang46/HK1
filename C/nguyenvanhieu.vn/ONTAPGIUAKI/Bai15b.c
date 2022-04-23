#include<stdio.h>
int main(){
    int a,b,ucln;
    printf("\nNhap 2 so a va b: ");
    scanf("%d%d",&a,&b);
    if(a==0||b==0){
        ucln=a+b;
    }else{
        int bc=a*b;
        while(a!=b){
            if(a>b){
                a=a-b;
            }else{
                b=b-a;
            }
        }
        ucln=a;
        printf("\nBoi chung nho nhat %d",bc/ucln);
    }
    printf("\nUCLN:%d",ucln);
}