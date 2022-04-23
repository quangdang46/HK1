#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *f;
    f=fopen("Bai1.txt","w");
    char ten[100];
    printf("\nNhap chuoi: ");
    fgets(ten,sizeof(ten),stdin);

    fprintf(f,"%s",ten);

    printf("\n__________\n");
    fscanf(f,"%s",&ten);
    printf("Ten cua ban la:%s",ten);
    fclose(f);

}