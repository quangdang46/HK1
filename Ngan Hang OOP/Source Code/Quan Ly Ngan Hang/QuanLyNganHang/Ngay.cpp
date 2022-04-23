#include "Ngay.h"

istream& operator >>(istream &is, CNgay &x)
{
	cout << "\nNhap vao ngay: ";
	is >> x.Ngay;

	cout << "\nNhap vao thang: ";
	is >> x.Thang;

	cout << "\nNhap vao nam: ";
	is >> x.Nam;

	return is;
}

ostream& operator <<(ostream &os, CNgay x)
{
	os << "Ngay " << x.Ngay << " thang " << x.Thang << " nam " << x.Nam;

	return os;
}

int CNgay::Getter_Ngay()
{
	return Ngay;
}

void CNgay::Setter_Ngay(int x)
{
	Ngay = x;
}

int CNgay::Getter_Thang()
{
	return Thang;
}

void CNgay::Setter_Thang(int x)
{
	Thang = x;
}

int CNgay::Getter_Nam()
{
	return Nam;
}

void CNgay::Setter_Nam(int x)
{
	Nam = x;
}



CNgay::CNgay(void)
{
}


CNgay::~CNgay(void)
{
}
