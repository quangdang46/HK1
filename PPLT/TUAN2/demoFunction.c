#include <stdio.h>
// Nguyen mau ham
void inHoten();              // Loai 1: khong co kieu du lieu tra ve, khong co tham so
void tinhTong(int a, int b); // Loai 2: khong co kieu du lieu tra ve, co tham so
int tinhTich();              // Loai 3: co kieu du lieu tra ve, khong co tham so
int tinhTongN(int n);        // Loai 4: co kieu du lieu tra ve, co tham so
int main()
{
    /*-- Khai bao bien --*/
    int a, b, c, n;
    /*-- Cau lenh thuc thi --*/
    // input
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    printf("Nhap n: ");
    scanf("%d", &n);
    // compute
    inHoten();      // Goi ham loai 1
    tinhTong(3, 4); // Goi ham loai 2
    tinhTong(a, b);
    c = tinhTich();
    // output
    printf("Tich cua 6 va 7 la %d \n", tinhTich()); // Goi ham loai 3
    printf("Tich cua 6 va 7 la %d \n", c);
    printf("Tong tu 0 den %d la %d \n", n, tinhTongN(n)); // Goi ham loai 4
    printf("Tong tu 0 den 7 la %d \n", tinhTongN(7));
    return 0;
}
void inHoten()
{
    printf("Toi ten la Nguyen Lam \n");
}
void tinhTong(int a, int b)
{
    printf("Tong cua %d va %d la %d \n", a, b, a + b);
}
int tinhTich()
{
    int a = 6;
    int b = 7;
    return a * b; // Cau lenh return co the tra ve 1 gia tri, 1 bieu thuc, 1 bien
}
int tinhTongN(int n)
{
    int i;
    int S = 0;
    for (i = 0; i <= n; i++)
    {
        S += i;
    }
    return S;
}