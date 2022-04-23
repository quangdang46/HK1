#include "NganHang.h"

istream& operator >>(istream &is, NganHang &x)
{
	int LuaChon;

	do{
		cout << "\n------------- Menu -------------\n";
		cout << "\n1. So khong ky han";
		cout << "\n2. So co ky han";
		cout << "\n3. Thoat";
		cout << "\n--------------------------------\n";

		do{
			cout << "\nNhap vao lua chon cua ban: ";
			is >> LuaChon;

			if(LuaChon < 1 || LuaChon > 3)
			{
				cout << "\nLua chon khong hop le. Xin kiem tra lai !";
			}
		}while(LuaChon < 1 || LuaChon > 3);


		string cmnd;
		bool CheckTrung;

		if(LuaChon != 3)
		{
			do{
				fflush(stdin);
				cout << "\nNhap vao CMND: ";
				getline(is, cmnd);

				CheckTrung = true; // Mặc định ban đầu là true

				// Kiểm tra bị trùng bên số có kỳ hạn
				int size_socokyhan = x.ListSoCoKyHan.size();

				for(int i = 0; i < size_socokyhan; i++)
				{
					if(x.ListSoCoKyHan[i].Getter_CMND() == cmnd)
					{
						CheckTrung = false;
						break;
					}
				}

				// Nếu vẫn là true tức là bên sổ có kỳ hạn không bị trùng => xét tiếp bên sổ không kỳ hạn
				if(CheckTrung == true)
				{
					int size_sokhongkyhan = x.ListSoKhongKyHan.size();

					for(int i = 0; i < size_sokhongkyhan; i++)
					{
						if(x.ListSoKhongKyHan[i].Getter_CMND() == cmnd)
						{
							CheckTrung = false;
							break;
						}
					}

				}

				if(CheckTrung == false)
				{
					cout << "\nCMND da bi trung roi. Xin kiem tra lai !";
				}

			}while(CheckTrung == false);
		}



		// Không kỳ hạn
		if(LuaChon == 1)
		{
			SoKhongKyHan a;
			is >> a;
			a.Setter_CMND(cmnd);

			x.ListSoKhongKyHan.push_back(a);
		}

		// Có kỳ hạn
		else if(LuaChon == 2)
		{
			SoCoKyHan a;
			is >> a;
			a.Setter_CMND(cmnd);

			x.ListSoCoKyHan.push_back(a);
		}

	}while(LuaChon != 3);

	return is;
}

ostream& operator <<(ostream &os, NganHang x)
{
	int size_khongkyhan = x.ListSoKhongKyHan.size();

	for(int i = 0; i < size_khongkyhan; i++)
	{
		os << "\nSo khong ky han thu " << i + 1;
		os << x.ListSoKhongKyHan[i];
	}

	int size_cokyhan = x.ListSoCoKyHan.size();

	for(int i = 0; i < size_cokyhan; i++)
	{
		os << "\nSo co ky han thu " << i + 1;
		os << x.ListSoCoKyHan[i];
	}

	return os;
}

float NganHang::TinhTongTienLaiTra()
{
	float Tong = 0;

	int size_khongkyhan = ListSoKhongKyHan.size();

	for(int i = 0; i < size_khongkyhan; i++)
	{
		Tong += ListSoKhongKyHan[i].TinhTienLai();
	}

	int size_cokyhan = ListSoCoKyHan.size();

	for(int i = 0; i < size_cokyhan; i++)
	{
		Tong += ListSoCoKyHan[i].TinhTienLai();
	}

	return Tong;
}

NganHang::NganHang(void)
{
}


NganHang::~NganHang(void)
{
}
