#include "stdio.h"
#include "math.h"
struct PhanSo{
	int tuSo;
	int mauSo;
};
void rutGon(PhanSo *ps){
	// Tim USCLN
	int a = ps->tuSo;
	int b = ps->mauSo;

	a = abs(a);
	b = abs(b);
	
	int USCLN =1;
	// TH1
	if(a==0 || b==0){
		USCLN = (a+b);
	}else{
	//TH2
		while(a!=b){
			if(a>b){
				a = a-b;
			}else{
				b = b-a;
			}
		}
		USCLN = a;	
	}
	ps->tuSo/=USCLN;
	ps->mauSo/=USCLN;
}

void nhapPhanSo(PhanSo *ps){
	printf("\nNhap vao tu so: ");
	scanf("%d", &ps->tuSo);
	do{
		printf("\nNhap vao mau so: ");
		scanf("%d", &ps->mauSo);
	}while(ps->mauSo==0);
}

void inPhanSo(PhanSo ps){
	if(ps.mauSo<0){
		ps.tuSo*=-1;
		ps.mauSo*=-1;
	}
	rutGon(&ps);
	printf("%d/%d", ps.tuSo, ps.mauSo);
}

int main(){
	PhanSo ps1, ps2;
	printf("\nPhan so thu nhat: ");
	nhapPhanSo(&ps1);
	printf("\nPhan so vua nhap la: ");
	inPhanSo(ps1);
}