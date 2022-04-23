#include<stdio.h>
#include<string.h>
int main(){
    char str[200],i;
    printf("Nhap chuoi:");
    gets(str);
    printf("Xuat chuoi:");
    puts(str);
    int chuso=0,thuong=0,kt=0;
    for(i=0;i<strlen(str);i++){
        if(str[i]>=48&&str[i]<=57){
            chuso++;
        }
        // hoa lan luot

        if((i==0 && str[0]>=97 && str[0]<=122) || (str[i-1]==32 && str[i]>=97 && str[i]>=122)){
            thuong++;
        }

        if(str[i]==32){
            kt++;
        }
    }
    printf("So chu so trong chuoi:%d\n",chuso);
    printf("So chu in thuong thoa man:%d\n",thuong);
    printf("So khoang trang trong chuoi:%d\n",kt);
}