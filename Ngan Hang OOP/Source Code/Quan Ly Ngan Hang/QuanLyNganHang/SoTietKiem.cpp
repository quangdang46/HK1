#include "SoTietKiem.h"

istream& operator >>(istream &is, SoTietKiem &x)
{
	//fflush(stdin); // Xóa bộ nhớ đệm nha
	//cout << "\nNhap vao CMND: ";
	//getline(is, x.CMND);

	fflush(stdin);
	cout << "\nNhap vao ho ten: ";
	getline(is, x.HoTen);

	cout << "\nNhap vao ngay lap the: ";
	is >> x.NgayLapThe;

	do{
		cout << "\nNhap vao lai suat: ";
		is >> x.LaiSuat;

		if(x.LaiSuat <= 0)
		{
			cout << "\nLai suat khong hop le. Xin kiem tra lai !";
		}
	}while(x.LaiSuat <= 0);

	return is;
}

ostream &operator <<(ostream &os, SoTietKiem x)
{
	os << "\nCMND: " << x.CMND;
	os << "\nHo ten: " << x.HoTen;
	os << "\nNgay lap the: " << x.NgayLapThe;
	os << "\nLai suat: " << x.LaiSuat << "%";

	return os;
}

void SoTietKiem::TinhSoThangDaGui()
{
	int ngayhientai, thanghientai, namhientai;

	time_t t = time(0);
	struct tm *Now = localtime(&t);
	ngayhientai = Now ->tm_mday;
	thanghientai = Now ->tm_mon + 1;
	namhientai = Now ->tm_year + 1900;

	int ngaygui, thanggui, namgui;
	ngaygui = NgayLapThe.Getter_Ngay();
	thanggui = NgayLapThe.Getter_Thang();
	namgui = NgayLapThe.Getter_Nam();

	int mangngay[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	// Xét năm nhuận
	if((namhientai % 4 == 0 && namhientai % 100 != 0) || namhientai % 400 == 0)
	{
		mangngay[1] = 29;
	}


	n = 12 * (namhientai - namgui); // Tính ra sự chênh lệch năm => * 12 để ra tháng
	
	// Xét sự chênh lệch tháng
	if(thanghientai > thanggui)
	{
		n += thanghientai - thanggui;
	}
	else
	{
		n -= thanggui - thanghientai;
	}

	// Xét sự chênh lệch ngày
	if(ngayhientai > ngaygui)
	{
		n += (float)(ngayhientai - ngaygui) / mangngay[thanghientai - 1];
	}
	else
	{
		n--;
		n += (float)(mangngay[thanghientai] - (ngaygui - ngayhientai)) / mangngay[thanghientai - 1];
	}
}

string SoTietKiem::Getter_CMND()
{
	return CMND;
}

void SoTietKiem::Setter_CMND(string x)
{
	CMND = x;
}

SoTietKiem::SoTietKiem(void)
{
}


SoTietKiem::~SoTietKiem(void)
{
}
