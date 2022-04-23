#include<stdio.h>
#include<math.h>
struct PhanSo{
    int TuSo;
    int MauSo;
};
void RutGon(PhanSo *ps){
    int a=abs(ps->TuSo);
    int b=abs(ps->MauSo);
    int UCLN=1;
    if(a==0||b==0){
        UCLN=(a+b);
    }else{
        if(a>b){
            a-=b;
        }else{
            b-=a;
        }
        UCLN=a;
    }
    ps->TuSo/=UCLN;
    ps->MauSo/=UCLN;
}
void NhapPhanSo(PhanSo *ps){
    printf("\nNhap tu so: ");
    scanf("%d", &ps->TuSo);
    do{
        printf("\nNhap mau so: ");
        scanf("%d", &ps->MauSo);
    }while(ps->MauSo==0);
}
void InPhanSo(PhanSo ps){
    if(ps.MauSo<0){
        ps.MauSo*-1;
        ps.TuSo*-1;
    }
    RutGon(&ps);
    if(ps.MauSo==1){
        printf("\n%d",ps.TuSo);
    }else{
        printf("\nPhan so rut gon:%d/%d ",ps.TuSo,ps.MauSo);
    }
}
// Phep +
PhanSo CongHaiPhanSo(PhanSo ps1, PhanSo ps2){
    PhanSo ketqua;
    ketqua.TuSo=ps1.TuSo*ps2.MauSo+ps2.TuSo*ps1.MauSo;
    ketqua.MauSo=ps1.MauSo*ps2.MauSo;
    return ketqua;
}
// Phep -
PhanSo TruHaiPhanSo(PhanSo ps1, PhanSo ps2){
    PhanSo ketqua;
    ketqua.TuSo=ps1.TuSo*ps2.MauSo-ps2.TuSo*ps1.MauSo;
    ketqua.MauSo=ps1.MauSo*ps2.MauSo;
    return ketqua;
}
// Phep x
PhanSo NhanHaiPhanSo(PhanSo ps1, PhanSo ps2){
    PhanSo ketqua;
    ketqua.TuSo=ps1.TuSo*ps2.TuSo;
    ketqua.MauSo=ps1.MauSo*ps2.MauSo;
    return ketqua;
}
// Phep Chia
PhanSo ChiaHaiPhanSo(PhanSo ps1, PhanSo ps2){
    PhanSo ketqua;
    ketqua.TuSo=ps1.TuSo*ps2.MauSo;
    ketqua.MauSo=ps1.MauSo*ps2.TuSo;
    return ketqua;
}
int main(){
    PhanSo ps1,ps2;
    printf("\nNhap phan so 1: ");
    NhapPhanSo(&ps1);
    printf("\nNhap phan so 1: ");
    NhapPhanSo(&ps2);
    printf("\nKet qua cong hai phan so:");
    InPhanSo(CongHaiPhanSo(ps1,ps2));
}