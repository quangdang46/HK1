#include<stdio.h>
int NewLen(char c[]){
    int cout=0;
    while(c[cout]!='\0'){
        cout++;
    }
    return cout;
}
void XoaXuongDong(char c[]){
    int len=NewLen(c);
    if(c[len-1]=='\n'){
        c[len-1]='\0';
    }
    }
void NoiHaiChuoi(char x1[],char x2[]){
    size_t lenx1=NewLen(x1);
    size_t lenx2=NewLen(x2);
    for(int i=lenx1;i<lenx1+lenx2;i++){
        x1[i]=x2[i-lenx1];
    }
}
int main(){
    char x1[100];
    char x2[100];
    printf("\nNhap chuoi 1: ");
    fgets(x1,sizeof(x1),stdin);
    XoaXuongDong(x1);
    printf("\nNhap chuoi 2: ");
    fgets(x2,sizeof(x2),stdin);
    XoaXuongDong(x2);
    NoiHaiChuoi(x1,x2);
    printf("\nChuoi moi: %s",x1);
}