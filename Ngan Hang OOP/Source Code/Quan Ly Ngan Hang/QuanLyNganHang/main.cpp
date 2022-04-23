#include "NganHang.h"

int main()
{
	NganHang x;
	cin >> x;
	cout << x;
	float TongTienLai = x.TinhTongTienLaiTra();
	cout << "\ntong tien lai = " << (size_t)TongTienLai;




	system("pause");
	return 0;
}