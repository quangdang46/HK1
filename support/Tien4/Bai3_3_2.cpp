#include<stdio.h>
#include<string.h>
struct DATE{
    int day;
    int month;
    int year;
};
struct SV{
    char name[50];
    int id;
    DATE birthday;
    char sex[20];
    char lop[20];
    float toan,ly,tin;
};
SV sv[100];
int n;
void Nhap(SV &svx){
    printf("Nhap ho va ten:");
    // gets(svx.name);
    scanf("%s",svx.name);
    fflush(stdin);
    printf("Nhap ma so:");
    scanf("%d",&svx.id);
    fflush(stdin);
    printf("Nhap NGAY - THANG - NAM sinh:");
    scanf("%d%d%d",&svx.birthday.day,&svx.birthday.month,&svx.birthday.year);
    fflush(stdin);
    printf("Nhap gioi tinh:");
    scanf("%s",svx.sex);
    fflush(stdin);
    printf("Nhap lop hoc:");
    scanf("%s",svx.lop);
    fflush(stdin);
    printf("Nhap diem TOAN LY TIN:");
    scanf("%f%f%f",&svx.toan,&svx.ly,&svx.tin);
    fflush(stdin);
}

void NhapN(){
    int i;
    for(i=0;i<n;i++){
        printf("Nhap thong tin sinh vien thu %d\n",i+1);
        Nhap(sv[i]);
    }
}


void xuat(SV svx){
    printf("Ho va ten: %s\n",svx.name);
    printf("Ma so: %d\n",svx.id);
    printf("Ngay - thang - nam sinh: %d/%d/%d\n",svx.birthday.day,svx.birthday.month,svx.birthday.year);
    printf("Gioi tinh: %s\n",svx.sex);
    printf("\n______________\n");
}
void xuatN(){
    int i;
    for(i=0;i<n;i++){
        printf("Thong tin sinh vien thu %d\n",i+1);
        xuat(sv[i]);
    }
}

void xuatId(){
    int id_tmp;
    printf("Nhap id can tim kiem:");
    scanf("%d",&id_tmp);
    int i;
    for(i=0;i<n;i++){
        if(sv[i].id==id_tmp){
            printf("Thong tin sinh vien co id la %d\n",id_tmp);
            xuat(sv[i]);
        }
    }
}

void xuatFemale(){
    int i;
    for(i=0;i<n;i++){
        if(strcmp(strlwr(sv[i].sex),"female")==0){
            xuat(sv[i]);
        }
    }
}

void xuatName(){
    char name_tmp[50];
    printf("Nhap ten can tim: ");
    scanf("%s",name_tmp);
    int i;
    for(i=0;i<n;i++){
        if(strcmp(strlwr(sv[i].name),strlwr(name_tmp))==0){
            xuat(sv[i]);
        }
    }
}

void xuatClass(){
    char lop_tmp[20];
    printf("Nhap lop can tim: ");
    scanf("%s",lop_tmp);
    int i;
    for(i=0;i<n;i++){
        if(strcmp(strlwr(sv[i].lop),strlwr(lop_tmp))==0){
            xuat(sv[i]);
        }
    }
}

int main(){
    printf("Nhap so sinh vien:");
    scanf("%d",&n);
    NhapN();
    printf("\n______________\n");
    xuatN();
    printf("\n______________\n");

    xuatId();
    printf("\n______________\n");

    xuatFemale();
    printf("\n______________\n");

    xuatName();
    printf("\n______________\n");

    xuatClass();
    return 0;
}

