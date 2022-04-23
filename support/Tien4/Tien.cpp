#include <stdio.h>
struct DATE {
	unsigned char ngay;
	unsigned char thang;
	int nam;
};
struct TBDT{
	int ma;
	char hoten[16];
	DATE ngaydk;
	char SoDT[11];
	char loai;
	int tgiannoi,tgianngoai;
};

void nhapDATE(DATE &x){
	printf("Nhap vao ngay : ");
	scanf("%u",&x.ngay);
	printf("Nhap vao thang :");
	scanf("%u",&x.thang);
	printf("Nhap vao nam :");
	scanf("%d",&x.nam);
}
void xuatDATE(DATE x)
{
	printf("%02u/%02u/%d", x.ngay, x.thang, x.nam);
	printf("\n--------------------------------\n");
}
void Nhapthuebao(TBDT &x)
{
	printf("Ma thue bao : ");
	scanf("%d",&x.ma);
	printf("Ho ten thue bao :");
	fflush(stdin);
	gets(x.hoten);
	printf("So dien thoai :");
	gets(x.SoDT);
	fflush(stdin);
	printf("Loai thue bao :");
	scanf("%s",&x.loai);
	fflush(stdin);
	printf("Thoi gian noi mang :");
	scanf("%d",&x.tgiannoi);
	printf("Thoi gian ngoai mang :");
	scanf("%d",&x.tgianngoai);
	nhapDATE(x.ngaydk);
}
void Xuatthuebao(TBDT x)
{
	printf("%d - %-16s", x.ma, x.hoten);
	xuatDATE(x.ngaydk);
	printf("%-12s -%-3s -%5d -%5d", x.SoDT, x.loai, x.tgiannoi, x.tgianngoai);
	printf("\n------------------------------\n");
}
void nhapDSTB(TBDT a[], int n){
	int i;
	for(i = 0; i < n; i++){
		printf("Nhap phan tu a[%d]",i);
		Nhapthuebao(a[i]);
	}
}
// void xuatDSTB(TBDT a[], int n)
// {
// 	int i;
// 	for (i = 0; i < n; i++)
// 		Xuatthuebao(a[i]);
// }
int main()
{
	TBDT b[100];
	int n;
	printf("Nhap vao n : ");
	scanf("%d",&n);
	// Nhapthuebao(a);
	// Xuatthuebao(a);
	nhapDSTB(b,n);
	// xuatDSTB(b,n);
	return 0;
}