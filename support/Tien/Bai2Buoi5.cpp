#include <stdio.h>
#include <math.h>

//Phan khai bao profile

void Nhap_sl(int &);
void Nhap_phan_Tu(int [], int );
void Xuat_phan_tu(int [], int );

void Cac_phan_tu_chia_het_3(int [], int );	/*Khai bao cau a*/
int Dem_so_luong_so_duong(int [], int );	/*Khai bao cau b*/
int Tong_cac_so(int [], int );	/*Khai bao cau c*/
float TBC(int [], int );	/*Khai bao cau d*/
float Trung_binh_cong_cac_phan_tu_duong(int [], int );	/*Khai bao cau e*/

int Kiem_tra_so_nguyen_to(int );
void Xuat_cac_so_nguyen_to(int [], int );	/*Khai bao cau f*/
int Dem_so_luong_so_nguyen_to(int [], int );	/*Khai bao cau g*/
int Tong_cac_so_nguyen_to(int [], int );	/*Khai bao cau h*/
float Trung_binh_cong_cac_so_nguyen_to(int [], int );	/*Khai bao cau i*/

void Tim_phan_tu_duong_dau_tien_(int [], int );	/*Khai bao cau j*/
void Tim_phan_tu_duong_cuoi_cung(int [], int );	/*Khai bao cau k*/

void Tim_phan_tu_gia_tri_lon_nhat_va_be_nhat(int [], int );	/*Khai bao cau l*/

//Phan giai thuat toan

void Nhap_sl(int &sl){
	do{
		printf("\nSo luong cac phan tu > 0 va <= 10\n");
		printf("\nNhap so luong: ");
		scanf("%d",&sl);
		if(sl <= 0 || sl > 100){
			printf("\nSai cu phap vui long nhap lai\n");
		}
	}while(sl <= 0 || sl > 100);
}

//*************************************************************************

void Nhap_phan_Tu(int n[], int sl){
	printf("\n");
	for(int i = 0; i < sl ; i++){
		printf("n[%d] = ",i);
		scanf("%d",&n[i]);
	}
}

//*************************************************************************

void Xuat_phan_tu(int n[], int sl){
	printf("\n");
	printf("Mang cua n gom: ");
	for(int i = 0; i < sl ; i++){
		printf(" %d ",n[i]);	
	}
	printf("\n");
}

//*************************************************************************

void Cac_phan_tu_chia_het_3(int n[], int sl){	/*Cau a liet ke cac phan tu chia het cho 3 co trong mang*/
	int Dem = 0;
	printf("\n");
	printf("Cac phan tu chia het cho 3 co trong mang:\n");
	for(int i = 0; i < sl ; i++){
		if(n[i] % 3 == 0){
			printf("n[%d] = %d\n",i,n[i]);
		}
		else{
			Dem++;
		}
	}
	if(Dem == sl){
		printf("Mang khong co phan tu chia het cho 3\n");
	}
}

//*************************************************************************

int Dem_so_luong_so_duong(int n[], int sl){ /*Cau b dem so luong so duong co trong mang*/
	int Dem = 0;
	for(int i = 0; i < sl ; i++){	
		if(n[i] > 0){
			Dem++;
		}
	}
	return Dem;
}

//*************************************************************************

int Tong_cac_so(int n[], int sl){	/*Cau c tinh tong cac chu so trong mang*/
	int Tong = 0;
	for(int i = 0; i < sl ; i++){
		Tong = Tong + n[i];
	}
	return Tong;
}

//*************************************************************************

float TBC(int n[], int sl){	/*Cau d tinh trung binh tong cac phan tu trong mang*/
	float Tb_cong = 0;
	// Tb_cong = (float)TBC(n,sl)/sl;
	for(int i = 0; i < sl ; i++){
		Tb_cong = Tb_cong + n[i];
	}
	return 1.0*Tb_cong/sl;
}

//*************************************************************************

float Trung_binh_cong_cac_phan_tu_duong(int n[], int sl){	/*Cau e tinh trung binh tong cac phan tu duong co trong mang*/
	int Dem = 0,Tong = 0;
	float Tb_cong;
	for(int i = 0; i < sl ; i++){	
		if(n[i] > 0){
			Tong = Tong + n[i];
			Dem++;
		}
	}
	Tb_cong = (float)Tong/Dem;
	return Tb_cong;
}

//*************************************************************************

int Kiem_tra_so_nguyen_to(int n){
	if(n <= 1){
		return 0;
	}
	int Dem = 2;
	for(int i = 2; i <= n/2 ; i++){
		if(n%i == 0){
			return 0;
		}
	}
	if(Dem == 2){
		return 1;
	}
	else{
		return 0;
	}
}

//*************************************************************************

void Xuat_cac_so_nguyen_to(int n[], int sl){	/*Cau f xuat cac so nguyen to co trong mang*/
	int So_nguyen_to, Dem = 0;
	printf("\nCac so nguyen to co trong mang: ");
	for(int i = 0; i < sl ; i++){
		So_nguyen_to = Kiem_tra_so_nguyen_to(n[i]);
		if(So_nguyen_to){
			printf("%d ", n[i]);
		}
		else{
			Dem++;	
		}
	}
	if(Dem == sl){
		printf("\nMang khong chua so nguyen to");
	}
	printf("\n");
}

//*************************************************************************

int Dem_so_luong_so_nguyen_to(int n[], int sl){	/*Cau g dem so nguyen to trong mang*/
	int So_nguyen_to, Dem = 0;
	for(int i = 0; i < sl ; i++){
		So_nguyen_to = Kiem_tra_so_nguyen_to(n[i]);
		if(So_nguyen_to){
			Dem++;
		}
	}
	return Dem;
}

//*************************************************************************

int Tong_cac_so_nguyen_to(int n[], int sl){	/*Cau h tinh tong cac so nguyen to trong mang*/
	int So_nguyen_to, Tong = 0;
	for(int i = 0; i < sl ; i++){
		So_nguyen_to = Kiem_tra_so_nguyen_to(n[i]);
		if(So_nguyen_to){
			Tong = Tong + n[i];
		}
	}
	return Tong;
}

//*************************************************************************

float Trung_binh_cong_cac_so_nguyen_to(int n[], int sl){	/*Cau i tinh trung binh cong cac so nguyen to trong mang*/
	int Dem = Dem_so_luong_so_nguyen_to(n,sl);
	int Tong = Tong_cac_so_nguyen_to(n,sl);
	float Tb_cong = 0;
	Tb_cong = (float)Tong/Dem;
	return Tb_cong;
}

//*************************************************************************

void Tim_phan_tu_duong_dau_tien(int n[], int sl){	/*Cau j tim cac phan tu dung dau tien co trong mang*/
	for(int i = 0; i < sl ; i++){
		if(n[i] > 0){
			printf("\nPhan tu dau tien duong: n[%d] = %d",i,n[i]);
			break;
		}
	}
}

//*************************************************************************

void Tim_phan_tu_duong_cuoi_cung(int n[], int sl){	/*Cau k tim cac phan tu dung dau tien co trong mang*/
	printf("\n");
	for(int i = sl-1; i < sl ; i--){
		if(n[i] > 0){
			printf("\nPhan tu cuoi cung duong: n[%d] = %d",i,n[i]);
			break;
		}
	}
	printf("\n");
}

//*************************************************************************

void Tim_phan_tu_gia_tri_lon_nhat_va_be_nhat(int n[], int sl){	/*Cau l tim phan tu co gia tri lon nhat va phan tu co gia tri nho nhat co trong mang*/
	int Max = n[0],Min = n[0];
	for(int i =	1; i < sl ; i++){
		if(n[i] > Max){
			Max = n[i];
		}
		if(n[i] < Min){
			Min = n[i];
		}
	}
	printf("\nPhan tu co gia tri lon nhat = %d\n",Max);
	printf("\nPhan tu co gia tri be nhat = %d",Min);
}

//Phan in ra ket qua

int main (){
	int sl;
	
	int So_luong_so_duong,Tong_cua_mang,So_luong_so_nguyen_to,Tong_cac_so_nt,Sd_dau_tien;
	
	float TB_cong_cua_mang,TB_cong_sd_cua_mang,TB_cong_so_nguyen_to_cua_mang;
	
	int a[100];
	
	Nhap_sl(sl);
	
	Nhap_phan_Tu(a,sl);
	
	printf("\n==============================================================================================================\n");
	
	Xuat_phan_tu(a,sl);
	
	printf("\n==============================================================================================================\n");
	
	Cac_phan_tu_chia_het_3(a,sl);
	
	So_luong_so_duong = Dem_so_luong_so_duong(a,sl);
	printf("\nSo luong so duong trong mang: %d\n",So_luong_so_duong);
	
	Tong_cua_mang = Tong_cac_so(a,sl);
	printf("\nTong cac phan tu trong mang: %d\n",Tong_cua_mang);
	
	TB_cong_cua_mang = TBC(a,sl);
	printf("\nTrung binh cong cac phan tu trong mang: %.2f\n",TB_cong_cua_mang);
	
	TB_cong_sd_cua_mang = Trung_binh_cong_cac_phan_tu_duong(a,sl);
	printf("\nTrung binh cong cac phan tu duong trong mang: %.2f\n",TB_cong_sd_cua_mang);
	
	printf("\n==============================================================================================================\n");
	
	Xuat_cac_so_nguyen_to(a,sl);
	
	So_luong_so_nguyen_to = Dem_so_luong_so_nguyen_to(a,sl);
	printf("\nSo luong so nguyen to trong mang: %d\n",So_luong_so_nguyen_to);
	
	Tong_cac_so_nt = Tong_cac_so_nguyen_to(a,sl);
	printf("\nTong cac so nguyen trong mang: %d\n",Tong_cac_so_nt);
	
	TB_cong_so_nguyen_to_cua_mang = Trung_binh_cong_cac_so_nguyen_to(a,sl);
	printf("\nTrung binh cong cac so nguyen trong mang: %.2f\n",TB_cong_so_nguyen_to_cua_mang);
	
	printf("\n==============================================================================================================\n");
	
	Tim_phan_tu_duong_dau_tien(a,sl);
	
	Tim_phan_tu_duong_cuoi_cung(a,sl);
	
	printf("\n==============================================================================================================\n");
	
	Tim_phan_tu_gia_tri_lon_nhat_va_be_nhat(a,sl);
	return 0;
}










