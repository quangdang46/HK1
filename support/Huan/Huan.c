#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
// MENU
void menu()
{
	printf("\n\n    --- DANH SACH CHUONG TRINH ---\n");
	printf("========================================\n");
	printf("| [1]  Kiem tra so nguyen              |\n");
	printf("| [2]  Uoc chung & Boi chung           |\n");
	printf("| [3]  Tinh tien karaoke               |\n");
	printf("| [4]  Tinh tien dien                  |\n");
	printf("| [5]  Doi tien                        |\n");
	printf("| [6]  Lai suat ngan hang              |\n");
	printf("| [8]  Thong tin sinh vien             |\n");
	printf("| [9]  FPOLY-LOTT                      |\n");
	printf("| [10] Tinh toan phan so               |\n");
	printf("| [0]  Thoat                           |\n");
	printf("========================================\n");
	printf("Moi ban chon chuong trinh : ");
}
// Chuc nang 1
void sont(float n)
{ // VOID SO NGUYEN TO
	if (n < 2)
	{
		printf("So %.1f khong phai so nguyen to\n", n);
	}
	else
	{
		int dem = 0;
		for (int i = 2; i < n; i++)
		{
			if ((int)n % i == 0)
			{
				dem++;
				break;
			}
		}
		if (dem == 0)
		{
			printf("So %.1f la so nguyen to\n", n);
		}
		else
		{
			printf("So %.1f khong phai la so nguyen to\n", n);
		}
	}
}
void socp(float n)
{ // VOID SO CHINH PHUONG
	int check = 0;
	int i;
	if (n < 0)
	{
		printf("So %.1f khong phai la so chinh phuong\n", n);
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			if (i * i == n)
			{
				check++;
				break;
			}
		}
		if (check == 0)
		{
			printf("So %.1f khong la so chinh phuong\n", n);
		}
		else
		{
			printf("So %.1f la so chinh phuong\n", n);
		}
	}
}
void ctr1()
{
	int back = 0;
	float n;
	do
	{
		printf("KIEM TRA SO NGUYEN\n");
		printf("Moi nhap n : ");
		scanf("%f", &n);
		if (n == (int)n)
		{
			printf("So %.1f la so nguyen\n", n);
		}
		else
		{
			printf("So %.1f khong phai so nguyen.\n", n);
		}
		sont(n);
		socp(n);
		printf("\n\nNhan (PHIM 1) de su dung lai chuong trinh , (PHIM 0) de quay lai menu : ");
		scanf("%d", &back);

	} while (back != 1);
}
// Chuc nang 2
void ctr2()
{
	int back = 0;
	int x, y, ucln, bcnn;
	int check = 0;
	do
	{

		printf("UOC CHUNG & BOI CHUNG\n");
		printf("Moi nhap x : ");
		scanf("%d", &x);
		printf("Moi nhap y : ");
		scanf("%d", &y);
		int x1 = x, y1 = y;
		if (x == 0 && y == 0)
		{
			printf("Khong ton tai UCLN\n");
			printf("BCNN la : 0");
			check = 1;
		}
		if (x == 0)
		{
			ucln = y;
			bcnn = 0;
		}
		else if (y == 0)
		{
			ucln = x;
			bcnn = 0;
		}
		else if (x == y)
		{
			bcnn = x;
			ucln = x;
		}
		else
		{
			while (x != y)
			{
				if (x > y)
				{
					x -= y;
					ucln = x;
					bcnn = x1 * y1 / x;
				}
				else
				{
					y -= x;
					ucln = x;
					bcnn = x1 * y1 / x;
				}
			}
		}
		printf("UCLN cua %d va %d la : %d\n", x1, y1, ucln);
		printf("BCNN cua %d va %d la : %d", x1, y1, bcnn);
		printf("\n\nNhan (PHIM 1) de su dung lai chuong trinh , (PHIM 0) de quay lai menu : ");
		if (check == 0)
		{
			scanf("%d", &back);
		}
		else
		{
			back = 1;
		}
	} while (back != 1);
}
// Chuc nang 3
void ctr3()
{
	int a, b, soTien, khuyenMai = 0, tienHat = 0;
	int back = 0;
	do
	{
		printf("TINH TIEN KARAOKE\n");
		do
		{
			printf("Hay nhap gio bat dau : ");
			scanf("%d", &a);
		} while (a < 12 || a > 23);
		do
		{
			printf("Hay nhap gio ket thuc : ");
			scanf("%d", &b);
		} while (b < 12 || b > 23);
		if (a > b)
		{
			int c = a;
			a = b;
			b = c;
		}
		printf("Gio bat dau hat :%dh\nGio ket thuc hat :%dh\n", a, b);
		if (a == b)
		{
			printf("So gio hat la : %dh\n", a - b);
			printf("So tien phai tra la 0 VND\n");
		}
		else
		{
			if (a + 3 < b)
			{
				tienHat = (b - a) * 150000;
			}
			else
			{
				tienHat = 3 * 150000 + (b - a - 3) * 150000 * 70 / 100;
			}
		}
		if (a >= 14 && a <= 17)
		{
			khuyenMai = tienHat * 10 / 100;
		}
		printf("So gio hat la : %dh\n", b - a);
		printf("So tien phai tra la : %dVND\n", tienHat);
		printf("Tien khuyen mai : %dVND\n", khuyenMai);
		printf("So tien phai tra la : %dVND", tienHat - khuyenMai);
		printf("\n\nNhan (PHIM 1) de su dung lai chuong trinh , (PHIM 0) de quay lai menu : ");
		scanf("%d", &back);

	} while (back != 1);
}
// Chuc nang 4
void ctr4()
{
	double tienDien, soDien;
	int back = 0;

	do
	{

		printf("TINH TIEN DIEN\n");
		printf("Nhap so dien tieu thu thang nay: ");
		scanf("%lf", &soDien);
		printf("So dien thang nay la : %.0lfkWh\n", soDien);
		if (soDien < 0)
		{
			printf("Vui long nhap lai\n");
		}
		else if (soDien == 0)
		{
			printf("Quy khach khong phai tra tien dien thang nay\n");
		}
		else if (soDien < 50)
		{
			printf("Tien dien phai dong thang nay la %.0lfVND\n", soDien * 1678);
		}
		else if (soDien < 100)
		{
			printf("Tien dien phai dong thang nay la %.0lfVND\n", ((50 * 1678) + ((soDien - 50) * 1734)));
		}
		else if (soDien < 200)
		{
			printf("Tien dien phai dong thang nay la %.0lfVND\n", ((50 * 1678) + (50 * 1734) + ((soDien - 100) * 2014)));
		}
		else if (soDien < 300)
		{
			printf("Tien dien phai dong thang nay la %.0lfVND\n", ((50 * 1678) + (50 * 1734) + (100 * 2014) + ((soDien - 200) * 2536)));
		}
		else if (soDien < 400)
		{
			printf("Tien dien phai dong thang nay la %.0lfVND\n", ((50 * 1678) + (50 * 1734) + (100 * 2014) + (100 * 2536) + ((soDien - 300) * 2834)));
		}
		else
		{
			printf("Tien dien phai dong thang nay la %.0lfVND\n", ((50 * 1678) + (50 * 1734) + (100 * 2014) + (100 * 2536) + (100 * 2834) + ((soDien - 400) * 2927)));
		}
		printf("\n\nNhan (PHIM 1) de su dung lai chuong trinh , (PHIM 0) de quay lai menu : ");
		scanf("%d", &back);
	} while (back != 1);
}
// Chuc nang 5
void ctr5()
{
	int soTien, i, j;
	int back = 0;
	do
	{

		printf("DOI TIEN\n");
		printf("Cach nhap : 500 000VND --> Ban nhap : 500\n");
		do
		{
			printf("Hay nhap so tien : ");
			scanf("%ld", &soTien);

		} while (soTien <= 1);
		int tien = soTien;
		printf("%ld000 VND doi duoc :\n", soTien);
		int menhGia[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
		for (i = 0; i < 9; i++)
		{
			if (i == 0)
			{
				while (soTien <= menhGia[i])
				{
					i++;
				}
			}
			if (soTien >= menhGia[i])
			{
				j = (int)(soTien / menhGia[i]);
				printf(" %d to %d000 VND\n", j, menhGia[i]);
				soTien -= (j * menhGia[i]);
				if (soTien == 0)
				{
					break;
				}
			}
		}
		printf("\n\nNhan (PHIM 1) de su dung lai chuong trinh , (PHIM 0) de quay lai menu : ");
		scanf("%d", &back);
	} while (back != 1);
}
// Chuc nang 6
void ctr6()
{
	int tienVay;
	int back = 0;
	do
	{
		printf("LAI SUAT NGAN HANG\n");
		printf("Cach nhap : 100 000VND --> Ban nhap : 100000\n");
		printf("Moi ban nhap so tien muon vay : ");
		scanf("%d", &tienVay);
		printf("Ban da vay %d VND tu ngan hang day la so tien ban phai tra :\n\n", tienVay);
		int tienGoc = tienVay / 12;
		int tienLai, tienTra, tienCon;
		tienCon = tienVay;
		printf("                               BANG LAI SUAT\n\n");
		printf("Ki han | Lai phai tra | Goc phai tra | So tien phai tra | So tien con lai | \n");
		for (int i = 1; i <= 12; i++)
		{
			tienLai = tienCon * 0.05;
			tienTra = tienGoc + tienLai;
			tienCon = tienCon - tienGoc;
			printf("--------------------------------------------------------------------------\n");
			printf("%6d | ", i);
			printf("%12d |", tienLai);
			printf("%13d |", tienGoc);
			printf("%17d |", tienTra);
			printf("%16d |", tienCon);
			printf("\n");
		}
		printf("--------------------------------------------------------------------------\n");
		printf("\n\nNhan (PHIM 1) de su dung lai chuong trinh , (PHIM 0) de quay lai menu : ");
		scanf("%d", &back);
	} while (back != 1);
}
// Chuc nang 8
struct sinhVien
{
	char hoTen[50];
	float diem;
};
void ctr8()
{
	int back = 0;
	do
	{
		printf("THONG TIN SINH VIEN\n");
		struct sinhVien ds[5];
		int i;
		fflush(stdin);
		for (i = 0; i < 5; i++)
		{
			printf("Ten sinh vien thu %d :", i + 1);
			gets(ds[i].hoTen);
			do
			{
				printf("Diem cua sinh vien thu %d :", i + 1);
				scanf("%f", &ds[i].diem);
				getchar();
			} while (0 > ds[i].diem || ds[i].diem > 10);
		}
		int j;
		for (i = 0; i < 4; i++)
		{
			for (j = i + 1; j < 5; j++)
			{
				if (ds[i].diem < ds[j].diem)
				{
					float swap = ds[i].diem;
					ds[i].diem = ds[j].diem;
					ds[j].diem = swap;

					char swap1[50];
					strcpy(swap1, ds[i].hoTen);
					strcpy(ds[i].hoTen, ds[j].hoTen);
					strcpy(ds[j].hoTen, swap1);
				}
			}
		}
		printf("Danh sach sinh vien\n");
		for (i = 0; i < 5; i++)
		{
			printf("\nTen sinh vien thu %d la : %s\n", i + 1, ds[i].hoTen);
			printf("Diem sinh vien thu %d la : %.1f\n", i + 1, ds[i].diem);
			if (ds[i].diem >= 9)
			{
				printf("Hoc luc : Xuat sac\n");
			}
			else if (ds[i].diem >= 8)
			{
				printf("Hoc luc : Gioi\n");
			}
			else if (ds[i].diem >= 6.5)
			{
				printf("Hoc luc : Kha\n");
			}
			else if (ds[i].diem >= 5)
			{
				printf("Hoc luc : TB\n");
			}
			else
			{
				printf("Hoc luc : Yeu");
			}
		}
		printf("\n\nNhan (PHIM 1) de su dung lai chuong trinh , (PHIM 0) de quay lai menu : ");
		scanf("%d", &back);

	} while (back != 1);
}
// Chuc nang 9
void ctr9()
{
	int back = 0;
	do
	{
		printf("FPOLY-LOTT\n");
		srand((int)time(0));
		int a, b, i;
		do
		{
			printf("Quy khach hay chon hai so khac nhau tu 1-->15\n");
			printf("Xin moi nhap so thu 1 : ");
			scanf("%d", &a);
			printf("Xin moi nhap so thu 2 : ");
			scanf("%d", &b);
		} while (1 > a || 1 > b || 15 < a || 15 < b || a == b);
		int check = 0;
		int ketQua[2];
		for (i = 0; i < 2; i++)
		{
			int kq = rand() % 15 + 1;
			ketQua[i] = kq;
		}
		for (i = 0; i < 2; i++)
		{
			if (a == ketQua[i])
			{
				check++;
			}
			if (b == ketQua[i])
			{
				check++;
			}
		}
		printf("Ket qua FPOLY-LOTT la :\n");
		printf("So thu 1 : %d\n", ketQua[0]);
		printf("So thu 2 : %d\n", ketQua[1]);
		if (check == 2)
		{
			printf("Chuc mung ban trung giai nhat !! ^^\n");
		}
		else if (check == 1)
		{
			printf("Chuc mung ban trung giai nhi !! ^^\n");
		}
		else
		{
			printf("Chuc ban may man lan sau !! :< ");
		}
		printf("\n\nNhan (PHIM 1) de su dung lai chuong trinh , (PHIM 0) de quay lai menu : ");
		scanf("%d", &back);

	} while (back != 1);
}
// Chuc nang 10
struct phanSo
{
	int tuSo;
	int mauSo;
};
void ctr10()
{
	int back = 0;
	do
	{
		printf("TINH TOAN PHAN SO\n");
		printf("Cach nhap : 2/5 --> Ban nhap : 2 5\n");
		struct phanSo ps1, ps2;
		printf("Xin moi nhap vao phan so thu nhat : ");
		scanf("%d%d", &ps1.tuSo, &ps1.mauSo);
		printf("Xin moi nhap vao phan so thu nhat : ");
		scanf("%d%d", &ps2.tuSo, &ps2.mauSo);
		struct phanSo tong, hieu, tich, thuong;
		tich.tuSo = ps1.tuSo * ps2.tuSo;
		tich.mauSo = ps1.mauSo * ps2.mauSo;
		thuong.tuSo = ps1.tuSo * ps2.mauSo;
		thuong.mauSo = ps1.mauSo * ps2.tuSo;
		tong.mauSo = ps1.mauSo * ps2.mauSo;
		tong.tuSo = ps1.tuSo * ps2.mauSo + ps2.tuSo * ps1.mauSo;
		hieu.mauSo = ps1.mauSo * ps2.mauSo;
		hieu.tuSo = ps1.tuSo * ps2.mauSo - ps2.tuSo * ps1.mauSo;
		printf("Hai phan so ban vua nhap la : %d/%d va %d/%d\n", ps1.tuSo, ps1.mauSo, ps2.tuSo, ps2.mauSo);
		printf("Tong hai phan so la : %d/%d\n", tong.tuSo, tong.mauSo);
		printf("Hieu hai phan so la : %d/%d\n", hieu.tuSo, hieu.mauSo);
		printf("Tich hai phan so la : %d/%d\n", tich.tuSo, tich.mauSo);
		printf("Thuong hai phan so la : %d/%d\n", thuong.tuSo, thuong.mauSo);
		printf("\n\nNhan (PHIM 1) de su dung lai chuong trinh , (PHIM 0) de quay lai menu : ");
		scanf("%d", &back);

	} while (back != 1);
}
int main()
{
	int chon;
	while (1)
	{
		system("color 07");
		menu();
		scanf("%d", &chon);
		switch (chon)
		{
		case 1:
			printf("KIEM TRA SO NGUYEN\n");
			system("color B0");
			ctr1();
			break;
		case 2:
			printf("UOC CHUNG & BOI CHUNG\n");
			system("color B0");
			ctr2();
			break;
		case 3:
			printf("TINH TIEN KARAOKE\n");
			system("color B0");
			ctr3();
			break;
		case 4:
			printf("TINH TIEN DIEN\n");
			system("color B0");
			ctr4();
			break;
		case 5:
			printf("DOI TIEN\n");
			printf("Cach nhap : 500 000VND --> Ban nhap : 500\n");
			system("color B0");
			ctr5();
			break;
		case 6:
			printf("LAI SUAT NGAN HANG\n");
			printf("Cach nhap : 100 000VND --> Ban nhap : 100000\n");
			system("color B0");
			ctr6();
			break;
		case 8:
			printf("THONG TIN SINH VIEN\n");
			system("color B0");
			ctr8();
			break;
		case 9:
			printf("FPOLY-LOTT\n");
			system("color B0");
			ctr9();
			break;
		case 10:
			printf("TINH TOAN PHAN SO\n");
			system("color B0");
			printf("Cach nhap : 2/5 --> Ban nhap : 2 5\n");
			ctr10();
			break;
		case 0:
			printf("Hen gap lai quy khach ^^ ");
			break;
		default:
			printf("Muc ban chon khong co moi nhap lai !!!\n");
			break;
		}
	}
	return 0;
}
