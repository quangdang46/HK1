#include<stdio.h>
#include<string.h>
// copy chuoi b vao chuoi a
void CopyChuoi(char a[],char b[]){
    size_t lenb=strlen(b);
    for(int i=0;i<lenb;i++){
        a[i]=b[i];
    }
    a[lenb]='\0';
}
int main(){
    char a[100]="Xin Chao ";
    char b[100]=" ";
    // strcpy(a,b);
    CopyChuoi(b,a);
    printf("\n%s",b);
}