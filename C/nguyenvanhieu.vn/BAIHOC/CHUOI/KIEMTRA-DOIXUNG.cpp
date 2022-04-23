#include<stdio.h>
#include<string.h>
void XoaKiTuTrang(char s[]){
    size_t len = strlen(s);
    if(s[len-1]=='\n'){
        s[len-1] = '\0';
    }
}
int KiemTraDoiXung(char s[]){
    XoaKiTuTrang(s);
    size_t len= strlen(s);
    for(size_t i=0; i<len/2; i++){
        if(s[i]!=s[len-i-1]){
            return 0;
        }
    }
    return 1;
}
int main(){
    char s[100];
    printf("\nNhap chuoi: ");
    fgets(s,sizeof(s),stdin);//sẽ xảy ra lỗi vì fget có kí tự \n vì vậy cần hàm xóa kí tự \n
    if(KiemTraDoiXung(s)){
        printf("\nDay la chuoi doi xung!");
    }else{
        printf("\nDay khong phai chuoi doi xung!");
    }
}