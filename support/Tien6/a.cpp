#include<stdio.h>
#include<ctype.h>
#include <stdlib.h>
typedef struct{
    long id;
    char name[50];
    float dtb;
}SV;
void NhapN(SV *a,int n){
    for(int i=0;i<n;i++){
        printf("Nhap thong tin sinh vien thu %d\n",i+1);
        printf("Nhap id: ");
        scanf("%ld",&(a+i)->id);
        printf("Nhap ten: ");
        scanf("%s",(a+i)->name);
        printf("Nhap diem trung binh: ");
        scanf("%f",&(a+i)->dtb);
    }
}
void XuatN(SV *a,int n){
    for(int i=0;i<n;i++){
        printf("Thong tin sinh vien thu %d\n",i+1);
        printf("id: %ld\n",(a+i)->id);
        printf("ten: %s\n",(a+i)->name);
        printf("diem trung binh: %.2f\n",(a+i)->dtb);
    }
}

int main(){
    SV arr[100];
    SV sv1,*ptr;
    ptr=&sv1;
    int n;
    printf("Nhap so sinh vien: ");
    scanf("%d",&n);
    NhapN(arr,n);
    XuatN(arr,n);
}

