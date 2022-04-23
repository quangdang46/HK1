#include<stdio.h>
#include<string.h>
struct DATE {
    int day;
    int month;
    int year;
};
struct TT{
    int id;
    char name[20];
    DATE ngay;
    long long sdt;
    char type[20];
    int thoigiannoi,thoigianngoai;
};
TT TBDT[100];
int n;
void Money(int noi,int ngoai){
    printf("\nCuoc phi noi: %d",noi*1500+ngoai*3000);
}
void Nhap(TT &tt){
    printf("\nID: ");scanf("%d",&tt.id);
    printf("\nName: ");scanf("%s",tt.name);fflush(stdin);
    printf("\nNGAY - THANG - NAM: ");
    scanf("%d%d%d",&tt.ngay.day,&tt.ngay.month,&tt.ngay.year);fflush(stdin);
    printf("\nSDT: ");scanf("%lld",&tt.sdt);fflush(stdin);
    printf("\nLoai thue bao: ");scanf("%s",tt.type);fflush(stdin);
    printf("\nThoi gian noi: ");scanf("%d",&tt.thoigiannoi);
    printf("\nThoi gian ngoai: ");scanf("%d",&tt.thoigianngoai);
}
void NhapN(){
    printf("\nNhap so luong thue bao: ");scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("\nThue bao thu %d: ",i+1);
        Nhap(TBDT[i]);
    }
}
void xuat(TT tt){
    printf("ID:%d",tt.id);
    printf("\nName: %s",tt.name);
    printf("\nNGAY - THANG - NAM: %d/%d/%d",tt.ngay.day,tt.ngay.month,tt.ngay.year);
    printf("\nSDT: %lld",tt.sdt);
    printf("\nLoai thue bao: %s",tt.type);
    printf("\nThoi gian noi: %d",tt.thoigiannoi);
    printf("\nThoi gian ngoai: %d",tt.thoigianngoai);
    Money(tt.thoigiannoi,tt.thoigianngoai);
    printf("\n__________\n");
}

void xuatN(){
    for(int i=0;i<n;i++){
        printf("\nThue bao thu %d: ",i+1);
        xuat(TBDT[i]);
    }
}

void AddTT(){
    TT tt;
    Nhap(tt);
    TBDT[n]=tt;
    n++;
}

void SortId(){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(TBDT[i].id>TBDT[j].id){
                TT temp=TBDT[i];
                TBDT[i]=TBDT[j];
                TBDT[j]=temp;
            }
        }
    }
}

void FindNamen(){
    char name[20];
    printf("\nNhap ten thue bao can tim: ");scanf("%s",name);
    for(int i=0;i<n;i++){
        if(strcmp(strlwr(TBDT[i].name),strlwr(name))==0){
            printf("\nThue bao thu %d: ",i+1);
            xuat(TBDT[i]);
        }
    }
}

void XuatType(){
    char type[20];
    printf("\nNhap loai thue bao can tim: ");scanf("%s",type);
    for(int i=0;i<n;i++){
        if(strcmp(strlwr(TBDT[i].type),strlwr(type))==0){
            printf("\nThue bao thu %d: ",i+1);
            xuat(TBDT[i]);
        }
    }
}
//XuatYear<2010
void XuatYear(){
    for(int i=0;i<n;i++){
        if(TBDT[i].ngay.year<2010){
            printf("\nThue bao thu %d: ",i+1);
            xuat(TBDT[i]);
        }
    }
}

void CountType(){
    int dem=0;
    for(int i=0;i<n;i++){
        if(strcmp(strlwr(TBDT[i].type),"tt")==0){
            dem++;
        }
    }
    printf("\nSo luong thue bao co loai TT la: %d",dem);
}
int main(){
    NhapN();
    printf("\n__________\n");
    SortId();
    printf("\n__________\n");
    xuatN();
    printf("\n__________\n");
    AddTT();
    printf("\n__________\n");
    xuatN();
    printf("\n__________\n");
    FindNamen();
    printf("\n__________\n");
    XuatType();
    printf("\n__________\n");
    XuatYear();
    printf("\n__________\n");
    CountType();

    return 0;
}

