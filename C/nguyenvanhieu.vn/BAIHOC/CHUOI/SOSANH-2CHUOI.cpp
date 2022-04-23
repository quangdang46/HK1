#include<stdio.h>
#include<string.h>
int SoSanhChuoi(char a[],char b[]){
    size_t lena=strlen(a);
    size_t lenb=strlen(b);
    size_t min=lena<lenb?lena:lenb;
    int ketqua=0;
    for(int i=0;i<min;i++){
        ketqua=a[i]-b[i];
        if(ketqua!=0){
            break;
        }
    }
    if(ketqua<0){
        return -1;
    }else if(ketqua>0){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    char a[100];
    char b[100];
    printf("\nNhap chuoi thu nhat: ");
    fgets(a,sizeof(a),stdin);
    printf("\nNhap chuoi thu hai: ");
    fgets(b,sizeof(b),stdin);
    printf("\nKet qua so sanh:%d",strcmp(a,b));
    printf("\n========");
    printf("\nKet qua so sanh ham:%d",SoSanhChuoi(a,b));
}