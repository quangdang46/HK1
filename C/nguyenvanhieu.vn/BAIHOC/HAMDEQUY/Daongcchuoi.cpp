#include<stdio.h>
/*
    Giả sử input là "abc":
    1. Nhập ký tự a
    2. Nhập ký tự b
    3. Nhập ký tự c
    4. Ấn enter => chính là '\n'
    5. In c
    6. In b
    7. In a
*/
void daonguoc(){
    char c;
    scanf("%c",&c);
    if(c!='\n'){
        daonguoc();
        printf("%c",c);
    }
}
int main(){
    printf("Nhap chuoi can dao nguoc: ");
    daonguoc();
}
 
