#include<stdio.h>
#include<string.h>
void NoiHaiChuoi(char x1[],char x2[]){
    size_t lenx1=strlen(x1);
    size_t lenx2=strlen(x2);
    for(int i=lenx1;i<lenx1+lenx2;i++){
        x1[i]=x2[i-lenx1];
    }
}
int main(){
    char x1[100]="Xin chao ";
    char x2[100]="Moi nguoi";
    // strcat(c,b);
    // printf("\n%s",c);
}