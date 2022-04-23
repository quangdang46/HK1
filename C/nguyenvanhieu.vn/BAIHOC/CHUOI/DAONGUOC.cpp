#include<stdio.h>
#include<string.h>
void XoaKhoangTrang(char a[]){
    size_t len = strlen(a);
    if(a[len-1] == '\n'){
        a[len-1] = '\0';
    }
}
void DaoNguocChuoi(char a[]){
    XoaKhoangTrang(a);
    size_t len = strlen(a);
    for(int i = 0; i < len/2;i++){
        char tmp=a[i];
        a[i]=a[len-i-1];
        a[len-i-1]=tmp;
    }
}
int main(){
    char a[100];
    printf("\nNhap chuoi: ");
    fgets(a,sizeof(a),stdin);
    // strrev(a);
    DaoNguocChuoi(a);
    printf("\nChuoi moi la:%s",a);
}