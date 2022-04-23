#include <stdio.h>
typedef struct
{
    int day,month,year;
} birthday_t;
typedef struct
{
    float toan,li,hoa,diemtb;
}diemtb_t;
typedef struct
{
    char name[12];
    int age;
    char gender;
    birthday_t ns;
    diemtb_t tb;
} sinhvien_t;
float TrungBinh(sinhvien_t sv);
int main()
{
    sinhvien_t sv1 = {"Lam",34,'M',{17,3,2003}}; // Bien nay ten la sv1, co kieu du lieu la sinhvien_t
    //Khai bao bao sv2
    sinhvien_t sv2 = {"Linda",81,'M',{13,4,2005}};
    sinhvien_t sv3;
    printf("Moi ban nhap thong tin cua sinh vien 3 \n");
    printf("Nhap ten: ");
    scanf("%s",sv3.name);
    fflush(stdin);
    printf("Nhap tuoi: ");
    scanf("%d", &sv3.age);
    fflush(stdin);
    printf("Nhap gioi tinh: ");
    scanf("%c", &sv3.gender);
    fflush(stdin);
    printf("Nhay ngay thang nam sinh: \n");
    scanf("%d%d%d", &sv3.ns.day, &sv3.ns.month, &sv3.ns.year);
    fflush(stdin);
    printf("Nhap diem Toan,Li,Hoa: ");
    scanf("%f%f%f",&sv3.tb.toan,&sv3.tb.li,&sv3.tb.hoa);
    fflush(stdin);
    printf("SV3: ten: %s, tuoi: %d, gioitinh: %c, ngay: %d, thang: %d, nam: %d  Diem Toan:%f Diem Li:%f Diem Hoa:%f Diem TB:%f \n",sv3.name,sv3.age,sv3.gender,sv3.ns.day,sv3.ns.month,sv3.ns.year,sv3.tb.toan,sv3.tb.li,sv3.tb.hoa,TrungBinh(sv3));
    return 0;
}
float TrungBinh(sinhvien_t sv){
    return (sv.tb.toan+sv.tb.li+sv.tb.hoa)/3;
}
