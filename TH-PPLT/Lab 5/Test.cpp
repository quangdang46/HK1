#include<stdio.h>
#include<string.h>
void XoaXuongDong(char x[100]){
    size_t len = strlen(x);
    if(x[len-1]=='\n'){
        x[len-1] = '\0';
    }
}
int main(){
    char ten[100];
    char ten1[100];
    printf("\nNhap chuoi ");
    fgets(ten,sizeof(ten),stdin);
    XoaXuongDong(ten);
    printf("\nNhap chuoi ");
    fgets(ten1,sizeof(ten1),stdin);
    XoaXuongDong(ten1);
    strcat(ten,ten1);
    printf("\nChuoi :%s ",ten);

}