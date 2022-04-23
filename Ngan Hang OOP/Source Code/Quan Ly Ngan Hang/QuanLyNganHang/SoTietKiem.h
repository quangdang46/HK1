#pragma once
#include "Ngay.h"
#include <string>
#include <ctime>

class SoTietKiem
{
protected:
	string CMND, HoTen;
	float SoTienGui;
	CNgay NgayLapThe;
	float LaiSuat;
	float n; // n là số tháng đã gửi được (tính dựa trên ngày giờ hệ thống)
public:
	friend istream &operator >>(istream &, SoTietKiem &);
	friend ostream &operator <<(ostream &, SoTietKiem);
	void TinhSoThangDaGui();
	string Getter_CMND();
	void Setter_CMND(string);
	SoTietKiem(void);
	~SoTietKiem(void);
};

