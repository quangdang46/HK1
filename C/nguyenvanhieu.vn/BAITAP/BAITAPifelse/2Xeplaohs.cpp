/* SỬ DỤNG defind để gán các xếp loại cho nhanh hơn
*/
#include <stdio.h>
 
#define GIOI "\nXep loai gioi"
#define KHA "\nXep loai kha"
#define TB "\nXep loai trung binh"
#define YEU "\nXep loai yeu"
int main()
{
    // Nhập điểm 3 môn
    float diemToan;
    float diemVan;
    float diemAnh;
    float dtb;
 
    printf("\nNhap diem toan = ");
    scanf("%f", &diemToan);
    printf("\nNhap diem van = ");
    scanf("%f", &diemVan);
    printf("\nNhap diem anh = ");
    scanf("%f", &diemAnh);
 
    dtb = (diemToan + diemVan + diemAnh) / 3;
    printf("\nDTB = %.2f", dtb);
    if (dtb < 4)
    {
        printf(YEU);
    }else if (dtb < 6.5){
        printf(TB);
    }else if(dtb < 8.0){
        printf(KHA);
    }else{
        printf(GIOI);
    }
}