// Tinh do dai chuoi 
// Loai bo ki tu \n trong tinh do dai chuoi 

#include<stdio.h>
#include<string.h>
// Tao ham tu tinh do dai chuoi 
int NewStrLen(char c[]){
    int cout = 0;
    while(c[cout] != '\0'){
        cout++;
    }
    return cout;
}
// Xoa ki tu \n 
void XoaKitu(char c[]){
    size_t len=strlen(c);
    if(c[len-1]= '\n'){
        c[len-1]='\0';
    }
}
int main(){
    char c[100];
    printf("\nNhap chuoi cua ban: ");
    fgets(c, 100,stdin);
    // printf("\n Do dai cua chuoi :%d",strlen(c));
    XoaKitu(c);
    printf("\nDo dai chuoi moi nhap:%d",NewStrLen(c));
}