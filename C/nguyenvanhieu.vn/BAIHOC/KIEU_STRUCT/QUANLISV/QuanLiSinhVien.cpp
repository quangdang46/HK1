#include<stdio.h>
#include<string.h>

struct SinhVien{
    int id;
    char ten[30];
    char gioitinh[10];
    int tuoi;
    float diemtoan;
    float diemly;
    float diemhoa;
    int namsinh;
    float diemtrungbinh;
    char xeploai[10];
};
typedef struct SinhVien SV;
void XoaXuongDong(char x[]){
    size_t len = strlen(x);
    if(x[len-1] ='\n'){
        x[len-1] = '\0';
    }
}

int TinhTuoiSV(SV &sv){
    sv.tuoi =2021-sv.namsinh;
    return sv.tuoi;
}
float DiemTrungbinh(SV &sv){
    sv.diemtrungbinh=(sv.diemhoa+sv.diemly+sv.diemtoan)/3;
    return sv.diemtrungbinh;
}

void SapXepTB(SV ds[],int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(ds[i].diemtrungbinh>ds[j].diemtrungbinh){
                SV tmp=ds[i];
                ds[i] = ds[j];
                ds[j]= tmp;
            }
        }
    }
}

void XepLoai(SV &sv){
    if(sv.diemtrungbinh>8){
        strcpy(sv.xeploai,"GIOI");
    }else if(sv.diemtrungbinh>6){
        strcpy(sv.xeploai,"KHA");
    }else{
        strcpy(sv.xeploai,"TB");
    }
}
void NhapSinhVien(SV &sv){
    printf("Nhap ID:");
    scanf("%d", &sv.id);
    getchar();
    printf("Nhap ho va ten: ");
    fgets(sv.ten,sizeof(sv.ten),stdin);
    XoaXuongDong(sv.ten);
    printf("Nhap gioi tinh: ");
    fgets(sv.gioitinh,sizeof(sv.gioitinh),stdin);
    XoaXuongDong(sv.gioitinh);
    printf("Nhap nam sinh cua ban: ");
    scanf("%d", &sv.namsinh);
    getchar();
    printf("Nhap diem ba mon TOAN LI HOA: ");
    scanf("%f%f%f",&sv.diemtoan,&sv.diemly,&sv.diemhoa);
    TinhTuoiSV(sv);
    DiemTrungbinh(sv);
    XepLoai(sv);
}
void NhapDanhSachSinhVien(SV ds[], int &n){
    do{
        printf("\nNhap so luong sinh vien: ");
        scanf("%d",&n);
    }while(n<=0);

    for(int i=0; i<n; i++){
        NhapSinhVien(ds[i]);
        printf("\n");
    }
}
void InSinhVien(SV sv){      
    printf("%d - %s   -    %s   -   %d  -  %2.f - %2.f - %2.f - %2.f   -  %s",sv.id,sv.ten,sv.gioitinh,sv.tuoi,sv.diemtoan,sv.diemly,sv.diemhoa,sv.diemtrungbinh,sv.xeploai);
    printf("\n");
}

void SapXepSVTheoTen(SV ds[],int n){
    for(int i=0; i<n; i++){
        
    }
}
void SapXepLoaiSinhVien(SV ds[],int n){
    char loai[10];
    printf("Nhap xep loai can sap xep:");
    fflush(stdin);
    fgets(loai,sizeof(loai),stdin);
    XoaXuongDong(loai);
    printf("\nDANH SACH SINH VIEN XEP LOAI:%s",loai);
    puts(loai);
    for(int i=0; i<n; i++){
        if(strcmp(ds[i].xeploai,strupr(loai))==0){
            InSinhVien(ds[i]);
        }
    }
}

void XuatDanhSachSinhVien(SV ds[], int n){
    printf("DANH SACH SINH VIEN IN RA \n");    
    for(int i=0; i<n; i++){
        InSinhVien(ds[i]);
        printf("\n");
    }
}

int main(){
    SV ds[100];
    int n;
    NhapDanhSachSinhVien(ds, n);
    XuatDanhSachSinhVien(ds,n);
    printf("DANH SACH SINH VIEN THEO DIEM TB\n");
    SapXepTB(ds,n);
    XuatDanhSachSinhVien(ds,n);
    SapXepLoaiSinhVien(ds,n);
}