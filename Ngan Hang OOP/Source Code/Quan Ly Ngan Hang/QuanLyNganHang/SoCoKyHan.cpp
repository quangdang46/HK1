#include "SoCoKyHan.h"

istream& operator >>(istream &is, SoCoKyHan &x)
{
	// Cách 1: Cha::Nhap();

	// Gọi lại operator nhập của cha
	SoTietKiem *cha = static_cast<SoTietKiem *>(&x);
	is >> *cha;

	do{
		cout << "\nNhap vao ky han gui: ";
		is >> x.KyHanGui;

		if(x.KyHanGui <= 0)
		{
			cout << "\nKy han gui khong hop le. Xin kiem tra lai !";
		}
	}while(x.KyHanGui <= 0);

	return is;
}

ostream& operator <<(ostream &os, SoCoKyHan x)
{
	// Gọi lại operator xuất của cha
	SoTietKiem cha = static_cast<SoTietKiem>(x);
	os << cha;

	os << "\nKy han gui: " << x.KyHanGui;

	return os;
}

float SoCoKyHan::TinhTienLai()
{
	/* 
	gửi: 18 tháng 5 năm 2015
	rút: 5 tháng 3 năm 2017
	=> 22 tháng
	*/

	if(n >= KyHanGui)
	{
		return SoTienGui * LaiSuat / 100 * n;
	}
	return 0;
}



SoCoKyHan::SoCoKyHan(void)
{
}


SoCoKyHan::~SoCoKyHan(void)
{
}
