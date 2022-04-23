#include<stdio.h>
#include<string.h>
int main(){
    char s1[100];
    char s2[100];
    // a)
    printf("Nhap vao chuoi s1 : ");
    gets(s1);
    printf("Nhap vao chuoi s2 : ");
    gets(s2);
    // b)
    printf("Chuoi s1 : %s\n", s1);
    printf("Chuoi s2 : %s\n", s2);
    // c)
    printf("Do daicuoi cua chuoi s1 : %d\n", strlen(s1));
    printf("Do daicuoi cua chuoi s2 : %d\n", strlen(s2));
    // d)
    int cnt=strcmp(s1,s2);
    if(cnt>0){
        printf("Chuoi s1 lon hon chuoi s2\n");
    }
    else if(cnt<0){
        printf("Chuoi s2 lon hon chuoi s1\n");
    }else{
        printf("Hai chuoi bang nhau\n");
    }
    // e)
    strcat(s1,s2);
    printf("Chuoi s1 sau khi noi s2 : %s\n", s1);
    // f)
    // kiem tra chuoi s1 co chua chuoi s2 khong
    if(strstr(s1,s2)==NULL){
        printf("Chuoi s1 khong chua chuoi s2\n");
    }else{
        printf("Chuoi s1 chua chuoi s2\n");
    }
    // g)
    if(strstr(s2,s1)==NULL){
        printf("Chuoi s2 khong chua chuoi s1\n");
    }else{
        printf("Chuoi s2 chua chuoi s1\n");
    }
}