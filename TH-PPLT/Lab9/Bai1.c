#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *f=fopen("input01.txt","r");
    FILE *f1=fopen("output01.txt","a");
    int sum=0;
    int i;
    while(!feof(f)){
        fscanf(f,"%d",&i);
        sum+=i;
    }
    fprintf(f1,"%d\n",sum);
    fclose(f);
    fclose(f1);
}