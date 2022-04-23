#include "stdio.h"
#include "stdlib.h"
void NhapMang(int x[],int n){
    for(int i=0; i < n; i++){
        printf("x[%d]= ",i);
        scanf("%d",&x[i]);
    }
}
void XuatMang(int x[],int n){
    for(int i=0; i < n; i++){
        printf("x[%d]= %d\n",i,x[i]);
    }
}

void XuatFile(int x[],int n,char ten[20]){
    FILE *f = fopen(ten,"w");
    if(f==NULL){
        printf("\nError");
    }
    for(int i=0; i <n; i++){
        fprintf(f,"%d\n",x[i]);
    }
    fclose(f);
}
void DocFile(int x[],int &n,char ten[20]){
    FILE *f = fopen(ten,"r");
    if(f==NULL){
        printf("\nError");
    }
    fscanf(f,"%d",&n);
    for(int i=0; i <n; i++){
        fscanf(f,"%d\n",&x[i]);
    }
    fclose(f);
}
void DocFile2(int x[],int &n,char ten[20]){
    FILE *f = fopen(ten,"r");
    int i=0;
    while(!feof(f)){
        fscanf(f,"%d",&x[i]);
        i++;
    }
    n=i;
    fclose(f);
}
int main(){
    int n;
    int x[100];
    // printf("\nNhap gioi han n: ");
    // scanf("%d",&n);
    // NhapMang(x,n);
    // XuatFile(x,n,"TestFile.txt");
    // XuatMang(x, n);
    // DocFile(x,n,"TestFile.txt");
    DocFile2(x,n,"TestFile.txt");
    XuatMang(x,n);
}
