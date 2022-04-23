#pragma once

#include "SoTietKiem.h"

// Lớp SoCoKyHan kế thừa lại từ SoTietKiem
class SoCoKyHan : public SoTietKiem
{
private:
	int KyHanGui;
public:
	friend istream &operator >>(istream &, SoCoKyHan &);
	friend ostream &operator <<(ostream &, SoCoKyHan);
	float TinhTienLai();
	SoCoKyHan(void);
	~SoCoKyHan(void);
};

