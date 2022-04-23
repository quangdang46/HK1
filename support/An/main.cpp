#include<bits/stdc++.h>
using namespace std;
typedef struct{
	string id;
	string name;
	string gioitinh;
	int ngay;
	string phong;
	int luong;
	int phucap;
	int thuclinh;
	string thidua;
}NV;

void nhap(NV &x){
	cout<<"Nhap ma nhan vien: ";
	fflush(stdin);
	getline(cin,x.id);
	cout<<"Nhap ten nhan vien: ";
	getline(cin,x.name);
	cout<<"Nhap gioi tinh: ";
	fflush(stdin);
	getline(cin,x.gioitinh);
	cout<<"Nhap ngay cong: ";
	cin>>x.ngay;
	cout<<"Nhap phong ban: ";
	fflush(stdin);
	getline(cin,x.phong);
	cout<<"Nhap luong: ";
	cin>>x.luong;
	cout<<"Nhap phu cap: ";
	cin>>x.phucap;
	x.thuclinh=x.luong+x.phucap;
	if(x.ngay>=26){
		x.thidua="Tot";
	}
	else if(x.ngay>=23){
		x.thidua="Tot";
	}else{
		x.thidua="Dat";
	}
}
void nhapN(NV nv[],int n){
	for(int i=0;i<n;i++){
		cout<<"Nhap thong tin nhan vien thu "<<i+1<<endl;
		nhap(nv[i]);
	}
}
void xuat(NV x){
	cout<<setw(10)<<x.id<<setw(20)<<x.name<<setw(10)<<x.gioitinh<<setw(10)<<x.ngay<<setw(10)<<x.phong<<setw(10)<<x.luong<<setw(10)<<x.phucap<<setw(10)<<x.thuclinh<<setw(10)<<x.thidua<<endl;
}
void xuatN(NV nv[],int n){
	cout<<setw(10)<<"Ma"<<setw(20)<<"Ho va ten"<<setw(10)<<"Gioi tinh"<<setw(10)<<"Ngay cong"<<setw(10)<<"Phong ban"<<setw(10)<<"Luong"<<setw(10)<<"Phu cap"<<setw(10)<<"Thuc linh"<<setw(10)<<"Thi dua"<<endl;
	for(int i=0;i<n;i++){
		xuat(nv[i]);
	}
}
//đưa ra nhân viên phụ cấp thấp nhất
void xuatNhanVienPhuCapThapNhat(NV nv[],int n){
	int min=nv[0].phucap;
	for(int i=0;i<n;i++){
		if(nv[i].phucap<min){
			min=nv[i].phucap;
		}
	}
	cout<<setw(10)<<"Ma"<<setw(20)<<"Ho va ten"<<setw(10)<<"Gioi tinh"<<setw(10)<<"Ngay cong"<<setw(10)<<"Phong ban"<<setw(10)<<"Luong"<<setw(10)<<"Phu cap"<<setw(10)<<"Thuc linh"<<setw(10)<<"Thi dua"<<endl;
	for(int i=0;i<n;i++){
		if(nv[i].phucap==min){
			xuat(nv[i]);
		}
	}
}
//sắp xếp nhân viên giảm dần theo phụ cấp
void sapXepNhanVienTheoPhuCap(NV nv[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(nv[i].phucap>nv[j].phucap){
				NV temp=nv[i];
				nv[i]=nv[j];
				nv[j]=temp;
			}
		}
	}
}
//đưa ra các nhân viên có thực linh trên 10 triêu
void xuatNhanVienThucLinhLonHon10Trieu(NV nv[],int n){
	for(int i=0;i<n;i++){
		if(nv[i].thuclinh>10000000){
			xuat(nv[i]);
		}
	}
}
//tra cứu nhân viên theo mã
void traCuuNhanVienTheoMa(NV nv[],int n){
	fflush(stdin);
	string ma;
	cout<<"Nhap ma nhan vien can tra cuu: ";
	getline(cin,ma);
	bool kt=false;
	for(int i=0;i<n;i++){
		if(nv[i].id==ma){
			xuat(nv[i]);
			kt=true;
		}
	}
	if(!kt){
		cout<<"Khong tim thay nhan vien co ma "<<ma<<endl;
	}
}
int main(){
	NV nv[31];
	int n;
	cout<<"Nhap so luong nhan vien: ";
	cin>>n;
	nhapN(nv,n);
	xuatN(nv,n);
	xuatNhanVienPhuCapThapNhat(nv,n);
	sapXepNhanVienTheoPhuCap(nv,n);
	xuatN(nv,n);
	xuatNhanVienThucLinhLonHon10Trieu(nv,n);
	traCuuNhanVienTheoMa(nv,n);
	return 0;
}
