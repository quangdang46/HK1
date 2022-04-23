// https://www.youtube.com/watch?v=UuJr9xgfAtA
#include<stdio.h>
#include<string.h>

void XoaKiTuTrang(char a[]){
    size_t len = strlen(a);
    if(a[len-1] == '\n'){
        a[len-1] = '\0';
    }
}
int main(){
    char a[100];
    char b[100];
    printf("\nNhap chuoi a: ");
    fgets(a,sizeof(a),stdin);
    XoaKiTuTrang(a);
    printf("\nNhap chuoi b: ");
    fgets(b,sizeof(b),stdin);
    XoaKiTuTrang(b);
    char *kq=strstr(a,b);
    if(kq!=NULL){
        printf("\nTim thay");
    }else{
        printf("\nKhong tim thay");
    }
}