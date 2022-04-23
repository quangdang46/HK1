#include<stdio.h>
#include<string.h>
struct NhanVien{
	char Ho[50];
	char Ten[50];
	int TienLuong30NgayCong;
	int SoNgayNghiLamViec;
	int SoNgayLamThem;
};
//Nhap mot doi bong
void Nhap(struct NhanVien &a){
	printf("Nhap Ho NhanVien : ");
	fflush(stdin);
	gets(a.Ho);
    printf("Nhap Ten NhanVien : ");
	fflush(stdin);
	gets(a.Ten);
	printf("Nhap So Ngay Nghi Lam Viec : ");
	scanf("%d", &a.SoNgayNghiLamViec);
	printf("Nhap So Ngay Lam Them : ");
	scanf("%d", &a.SoNgayNghiLamViec);
}
void NhapDanhSach(struct NhanVien DS[],int n){
	for(int i=0;i<n;i++){
		printf("Nhap nhan vien thu %d: \n",i+1);
		Nhap(DS[i]);
	}
}
void TinhLuong30Ngay(struct NhanVien a[], int n){
	for (int i=0;i<n;i++){
		int SoNgayLamViecChinhThuc=30 - a[i].SoNgayNghiLamViec;
		if (28<SoNgayLamViecChinhThuc && SoNgayLamViecChinhThuc<=30){
			SoNgayLamViecChinhThuc+=5;
		}
		a[i].TienLuong30NgayCong=SoNgayLamViecChinhThuc + a[i].SoNgayLamThem;
	    printf("Tien Luong 30 Ngay Cong" , a[i].TienLuong30NgayCong);
	}
}
void Xuat(struct NhanVien a){
	printf("\tHo NhanVien: %s\n",a.Ho);
	printf("\tTen NhanVien: %d\n",a.Ten);
	printf("\tSo Ngay Nghi Lam Viec: %d\n",a.SoNgayNghiLamViec);
}
void XuatDanhSach(struct NhanVien DS[], int n){
	printf("STT     HO&TEN    SO NGAY LT     T.LUONG\n");
	for(int i=0;i<n;i++){
		printf("%d     %s %s    %5d           %6d\n",i+1,DS[i].Ho,DS[i].Ten,DS[i].SoNgayLamThem,DS[i].TienLuong30NgayCong);
	}
}
int main()
{
	struct NhanVien a[50];
	int SoNhanVien;
	do{
		printf("Nhap vao nhan vien !=0: ");
		scanf("%d", &SoNhanVien);
	}
	while(SoNhanVien<0 && SoNhanVien >30);
	NhapDanhSach(a,SoNhanVien);
	XuatDanhSach(a,SoNhanVien);
	TinhLuong30Ngay(a,SoNhanVien);
}