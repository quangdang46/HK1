#include<stdio.h>
int main(){
    char kitu;
    printf("\nNhap ki tu can kiem tra: ");
    scanf("%c",&kitu);
    if(kitu>='a'&&kitu<='z'||kitu>='A'&&kitu<='Z'){
        printf("\n%c la mot ki tu",kitu);
    }else{
        printf("\n%c khong phai mot ki tu",kitu);
    }
}