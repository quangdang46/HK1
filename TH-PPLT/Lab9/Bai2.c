#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    FILE *f=fopen("input02.txt","r");
    FILE *f1=fopen("output02.txt","a");
    char str[100];
    while(!feof(f)){
        fscanf(f,"%s",str);
        fprintf(f1,"%d\n",strlen(str));
    }
    fclose(f);
    fclose(f1);
}