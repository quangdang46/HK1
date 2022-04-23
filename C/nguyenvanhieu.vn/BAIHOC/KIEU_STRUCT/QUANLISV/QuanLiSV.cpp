#include<stdio.h>
#include<string.h>
#include<time.h>
#include<math.h>
#include "conio.h"
struct Date{
    int ngay;
    int thang;
    int nam;
};
struct SinhVien{
    Date ngaysinh;
    char ten[100];
    int tuoi;
    int id;
    char gioitinh[5];
    float diemMon1;
    float diemMon2;
    float diemMon3;
    float diemTrungBinh;
    char hocluc[10];
    char malop[30];
};
void XoaXuongDong(char ten[]){
    size_t len=strlen(ten);
    if(ten[len-1]=='\n'){
        ten[len-1]= '\0';
    }
}
typedef struct SinhVien SV;     ///<<<<==============VIET TAT CUA KIEU DU LIEU SINH VIEN
void nhapSinhVien(SV &sv);//ok
void inSinhVien(SV sv);//ok
void tinhTuoi(SV &sv);//ok
void tinhDiemTrungBinh(SV &sv);//ok
void xepLoai(SV &sv);
void capNhatSinhVien(SV &sv);
void nhapDanhSachSinhVien(SV ds[], int &n);
void xuatDanhSachSinhVien(SV ds[], int n);
float timMax_DiemTrungBinh(SV ds[], int n);
int timMin_Tuoi(SV ds[], int n);
void xuatDanhSachSinhVienXepLoai(SV ds[], int n,char hocluc[] );
void xuatDanhSachSinhVienTheoLop(SV ds[], int n, char lop[]);
int timSinhVienTheoTen(SV ds[], int n, char ten[]);
void xoaSinhVienTheoId(SV ds[], int &n, int id);
void sapXepDanhSachSinhVienTheoDTB(SV ds[], int n);
void sapXepDanhSachSinhVienTheoTen(SV ds[], int n);

void tinhTuoi(SV &sv){
   time_t TIME=time(0);
   tm* NOW=localtime(&TIME);
   int namHienTai=NOW->tm_year+1900;
   sv.tuoi=namHienTai-sv.ngaysinh.nam;
}

// void tinhDiemTrungBinh(SV *sv){
//     float Tb=(float)(sv->diemMon1+sv->diemMon2+sv->diemMon3)/3;
//     sv->diemTrungBinh=Tb;
// }
void tinhDiemTrungBinh(SV &sv){
    sv.diemTrungBinh=(sv.diemMon1+sv.diemMon2+sv.diemMon3)/3;
}
void xepLoai(SV &sv){
    float tb=sv.diemTrungBinh;
    if(tb>8 && tb<=10){
        strcpy(sv.hocluc,"GIOI");
    }else if(tb>7){
        strcpy(sv.hocluc,"KHA");
    }else if(tb>5){
        strcpy(sv.hocluc,"TB");
    }else{
        strcpy(sv.hocluc,"YEU");
    }
}
void nhapSinhVien(SV &sv){
    printf("ID: ");
    scanf("%d", &sv.id);
    getchar();
    printf("Ten: ");
    fgets(sv.ten,sizeof(sv.ten),stdin);
    XoaXuongDong(sv.ten);
    printf("Gioi tinh: ");
    fgets(sv.gioitinh,sizeof(sv.gioitinh),stdin);
    XoaXuongDong(sv.gioitinh);
    printf("Nhap ngay sinh: ");
    scanf("%d%d%d",&sv.ngaysinh.ngay,&sv.ngaysinh.thang,&sv.ngaysinh.nam);
    printf("Nhap diem mon 1,2,3: ");
    scanf("%f%f%f",&sv.diemMon1,&sv.diemMon2,&sv.diemMon3);
    getchar();
    printf("Nhap ma lop: ");
    fgets(sv.malop,sizeof(sv.malop),stdin);
    XoaXuongDong(sv.malop);
    tinhTuoi(sv);
    tinhDiemTrungBinh(sv);
    xepLoai(sv);
}
void capNhatSinhVien(SV &sv){
    nhapSinhVien(sv);
}
void inSinhVien(SV sv){
    printf("%d - %s   -   %s -   %d/%d/%d   - %d   - %2.f - %2.f - %2.f - %2.f   -  %s   - %s",sv.id,sv.ten,sv.gioitinh,sv.ngaysinh.ngay,sv.ngaysinh.thang,sv.ngaysinh.nam,sv.tuoi,sv.diemMon1,sv.diemMon2,sv.diemMon3,sv.diemTrungBinh,sv.hocluc,sv.malop);
}
void nhapDanhSachSinhVien(SV ds[], int &n){
    do{
        printf("\nNhap so luong sinh vien: ");
        scanf("%d", &n);
    }while(n<=0);
    for(int i=0;i<n; i++){
        printf("\nNhap sinh vien thu %d\n",i);
        capNhatSinhVien(ds[i]);
    }
}
void xuatDanhSachSinhVien(SV ds[], int n){
    // printf("%5s \t %20s \t %10s \t %10s \t %10s \t %6s \t %6s \t %6s \t %6s \t %5s \t %10s", "ID", "Ten", "Gioi Tinh", "Ngay Sinh", "Tuoi", "Diem 1", "Diem 2", "Diem 3", "Diem TB", "XepLoai", "Ma Lop");
    printf("\n");
    for(int i=0;i< n; i++){
        inSinhVien(ds[i]);
        printf("\n");
    }
}
float timMax_DiemTrungBinh(SV ds[], int n){
    float max=ds[0].diemTrungBinh;
    for(int i=1;i<n; i++){
        if(ds[i].diemTrungBinh>max){
            max=ds[i].diemTrungBinh;
        }
    }
    return max;
}
int timMin_Tuoi(SV ds[], int n){
    int min=ds[0].tuoi;
    for(int i=1;i<n; i++){
        if(ds[i].tuoi<min){
            min=ds[i].tuoi;
        }
    }
    return min;
}
void xuatDanhSachSinhVienXepLoai(SV ds[], int n,char hocluc[]){
    printf("\nDanh sach sinh vien hoc luc %s\n",hocluc);
    for(int i=0;i<n;i++){
        if(strcmp(ds[i].hocluc,hocluc)==0){
            inSinhVien(ds[i]);
            printf("\n");
        }
    }
}
void xuatDanhSachSinhVienTheoLop(SV ds[], int n, char lop[]){
    printf("\nSinh vien theo lop:%s\n",lop);
    for(int i=0; i<n; i++){
        if(strcmp(ds[i].malop,lop)){
            inSinhVien(ds[i]);
            printf("\n");
        }
    }
}
int timSinhVienTheoTen(SV ds[], int n, char ten[]){
	// 0 => false
	// 1 => true
	for(int i=0; i<n ; i++){
		if(strstr(strupr(ds[i].ten), strupr(ten))){
			return 1;
		}
	}
	return 0;
}

void xoaSinhVienTheoId(SV ds[], int &n, int id){
	for(int i=0; i<n ; i++){
		if(ds[i].id == id){
			for(int j=i; j<n; j++){
				ds[j] = ds[j+1];
			}
			n-=1;
			return;
		}
	}
}
void sapXepDanhSachSinhVienTheoDTB(SV ds[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(ds[i].diemTrungBinh>ds[j].diemTrungBinh){
				SV temp;
				temp = ds[i];
				ds[i] = ds[j];
				ds[j]=temp;
			}
		}
	}
}
void sapXepDanhSachSinhVienTheoTen(SV ds[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(strcmp(strupr(ds[i].ten), strupr(ds[j].ten))>0){
				SV temp;
				temp = ds[i];
				ds[i] = ds[j];
				ds[j]=temp;
			}
		}
	}
}
void nhapPhimBatKy(){
    printf("\nNhap phim bat ky de tiep tuc!");
    getch();
}
int main(){
	SV ds[100];
	int n;
	int chon;
	do{
		printf("\nMENU:");
		printf("\n1- Nhap danh sach sinh vien");
		printf("\n2- Xuat danh sach sinh vien");
		printf("\n3- Tim max DTB");
		printf("\n4- Tim min Tuoi");
		printf("\n5- Xuat danh sach sinh vien theo lop");
		printf("\n6- Xuat danh sach sinh vien loai");
		printf("\n7- Sap xep sinh vien theo DTB");
		printf("\n8- Sap xep sinh vien theo ten");
		printf("\n9- Tim sinh vien theo ten");
		printf("\n10- Xoa sinh vien theo ID");
		printf("\n0- Thoat");
		scanf("%d", &chon);
		
		switch(chon){
			case 1:
					nhapDanhSachSinhVien(ds, n); 
					nhapPhimBatKy();
					break;
			case 2:
					xuatDanhSachSinhVien(ds, n);
					nhapPhimBatKy();
					break;	
			case 3:
					printf("\n Max DTB = %.2f", timMax_DiemTrungBinh(ds, n));
					nhapPhimBatKy();
					break;
			case 4:
					printf("\n Min Tuoi = %d", timMin_Tuoi(ds, n));
					nhapPhimBatKy();
					break;
			case 5:
					char lop[20];
					printf("\nNhap Ma Lop can hien thi: "); fflush(stdin); fgets(lop, sizeof(lop), stdin);XoaXuongDong(lop); 
					xuatDanhSachSinhVienTheoLop(ds, n,lop);
					nhapPhimBatKy();
					break;
			case 6:
					char xepLoai[20];
					printf("\nNhap xep loai can hien thi: "); fflush(stdin); fgets(xepLoai, sizeof(xepLoai), stdin);XoaXuongDong(xepLoai); 
					xuatDanhSachSinhVienXepLoai(ds,n, xepLoai);
					nhapPhimBatKy();
					break;
					
			case 7:
					printf("\nDanh sach sau khi sap xep theo DTB\n");
					sapXepDanhSachSinhVienTheoTen(ds, n);
					xuatDanhSachSinhVien(ds, n);
					nhapPhimBatKy();
					break;
			case 8:
					printf("\nDanh sach sau khi sap xep theo ten\n");
					xuatDanhSachSinhVien(ds, n);
					xoaSinhVienTheoId(ds, n, 1);
					nhapPhimBatKy();
					break;
			case 9:
					char tensv[20];
					printf("\nNhap ten sinh vien can tim: "); fflush(stdin); fgets(tensv, sizeof(tensv), stdin);XoaXuongDong(tensv); 
					printf("\nKet qua tim sinh vien: %d", timSinhVienTheoTen(ds, n, tensv));
					nhapPhimBatKy();
					break;
			case 10:
					int id;
					printf("\nNhap id can xoa"); scanf("%d", &id);
					printf("\nDanh sach sau khi xoa\n");
					xoaSinhVienTheoId(ds, n, id);
					xuatDanhSachSinhVien(ds, n);
					nhapPhimBatKy();
					break;
		}
	} while(n!=0);
}