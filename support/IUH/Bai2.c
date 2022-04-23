#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
typedef struct {
    char manha[6];
    char diachi[30];
    char sonk;
    float dientich;
}NHA;
int atoff(char c){
    return (int)c-48;
}
void nhap(NHA nha[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("Nhap thong tin nha thu %d\n",i+1);
        printf("Nhap ma so nha: ");
        scanf("%s",nha[i].manha);
        fflush(stdin);
        printf("Nhap dia chi: ");
        gets(nha[i].diachi);
        fflush(stdin);
        printf("Nhap so nguoi: ");
        scanf("%c",&nha[i].sonk);
        printf("Nhap dien tich: ");
        scanf("%f",&nha[i].dientich);
    }
}
void xuat(NHA nha[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("\nThong tin nha thu %d\n",i+1);
        printf("Ma so nha: %s\n",nha[i].manha);
        printf("Dia chi: %s\n",nha[i].diachi);
        printf("So nguoi: %c\n",nha[i].sonk);
        printf("Dien tich: %.2f\n",nha[i].dientich);
    }
}
//xuat thong tin nha co nhan khau lon nhat
void xuat_max(NHA nha[],int n){
    int i;
    int nxMax=atoff(nha[0].sonk);
    for(i=0;i<n;i++){
        if(nxMax<atoff(nha[i].sonk)){
            nxMax=atoff(nha[i].sonk);
        }
    }
    printf("\nThong tin nha co nhan khau lon nhat\n");
    for(i=0;i<n;i++){
        if(nxMax==atoff(nha[i].sonk)){
            printf("Ma so nha: %s\n",nha[i].manha);
            printf("Dia chi: %s\n",nha[i].diachi);
            printf("So nguoi: %c\n",nha[i].sonk);
            printf("Dien tich: %.2f\n",nha[i].dientich);
        }
    }
}
void xuat_m2nguoi(NHA nha[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(nha[i].dientich/atoff(nha[i].sonk)<nha[j].dientich/atoff(nha[j].sonk)){
                NHA temp=nha[i];
                nha[i]=nha[j];
                nha[j]=temp;
            }
        }
    }
    printf("STT           Ma nha           Dia chi           So nguoi           Dien tich           So m^2/nguoi\n");
    for(i=0;i<n;i++){
        printf("%d             %s              %s             %2c                %.2f               %.2f\n",i+1,nha[i].manha,nha[i].diachi,nha[i].sonk,nha[i].dientich,nha[i].dientich/atoff(nha[i].sonk));
    }
    
}
int main(){
    NHA nha[100];
    int n;
    printf("Nhap so nha: ");
    scanf("%d",&n);
    nhap(nha,n);
    xuat(nha,n);
    xuat_max(nha,n);
    xuat_m2nguoi(nha,n);
    return 0;
}