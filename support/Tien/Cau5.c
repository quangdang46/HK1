#include<stdio.h>
#include<math.h>
struct Diem{
    int m,n;
};
typedef struct Diem poin;
void CheckTamGiac(float x,float y,float z){
    if(x+y<z || x+z<y || y+z<x){
        printf("Khong phai tam giac");
    }else{
        if(x==y && y==z){
            printf("Tam giac deu");
        }else if(x==y || y==z ||z==x){
            printf("Tam giac can");
        }else if(x*x+y*y==z*z ||x*x+z*z==y*y ||y*y+z*z==x*x){
            printf("Tam giac vuong");
        }else{
            printf("Tam giac thuong");
        }
    }
}
void CheckThangHang(poin a, poin b,poin c){
    float da,db,dc;
    da = sqrt(pow(a.m - b.m,2)+pow(a.n - b.n,2));
    db = sqrt(pow(b.m - c.m,2)+pow(b.n - c.n,2));
    dc = sqrt(pow(a.m - c.m,2)+pow(a.n - c.n,2));
    if (da+db==dc || db+dc==da || da+dc==db){
        printf("Ba Diem Thang Hang");
    }else{
        printf("Khong Thang Hang\n");
        CheckTamGiac(da,db,dc);
    }
}
int main(){
    poin a,b,c;
    printf("Nhap Toa Do A: ");scanf("%d%d",&a.m,&a.n);
    printf("Nhap Toa Do B: ");scanf("%d%d",&b.m,&b.n);
    printf("Nhap Toa Do C: ");scanf("%d%d",&c.m,&c.n);
    CheckThangHang(a,b,c);
}