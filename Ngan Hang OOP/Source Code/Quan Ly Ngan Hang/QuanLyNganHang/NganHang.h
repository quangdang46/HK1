#pragma once
//#ifndef sondeptrai
//#define sondeptrai
#include "SoCoKyHan.h"
#include "SoKhongKyHan.h"
#include <vector>

class NganHang
{
private:
	vector<SoCoKyHan> ListSoCoKyHan;
	vector<SoKhongKyHan> ListSoKhongKyHan;
public:
	friend istream &operator >>(istream &, NganHang &);
	friend ostream &operator <<(ostream &, NganHang);
	float TinhTongTienLaiTra();
	NganHang(void);
	~NganHang(void);
};
//#endif sondeptrai
