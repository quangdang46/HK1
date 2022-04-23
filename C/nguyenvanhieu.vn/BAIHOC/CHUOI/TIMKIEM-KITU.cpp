#include<stdio.h>
#include<string.h>
char* TimKiem(char a[],char tk){
    for(int i=0;i <strlen(a);i++){
        if(a[i]==tk){
            return a[i];
        }
    }
}
int main(){
    char a[100]="Hello, world!";
    char *b;
    printf("\nchuoi:%s ",a);
    // b=strchr(a,'o');
    b=TimKiem(a,'o');
    printf("\nKi tu:%s ",b);
}