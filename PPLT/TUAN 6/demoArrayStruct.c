#include <stdio.h>

#define MAX 100

typedef struct
{
    int day, month, year;
} ngaysinh_t;

typedef struct
{
    int toan, ly, hoa;
} dtb_t;

typedef struct
{
    char name[12];
    int age;
    char gender;
    ngaysinh_t ns;
    dtb_t dtb;
} sinhvien_t;

void intputInfoSinhvien(sinhvien_t A[], int n);
void outputInfoSinhvien(sinhvien_t A[], int n);
float aveofToan(sinhvien_t A[], int n);
void MaxToan(sinhvien_t A[], int n);
int main()
{
    sinhvien_t A[MAX]; // Mang ten A, co kieu du lieu la sinhvien_t, co 100
    int n;
    do
    {
        printf("So sinh vien can nhap: ");
        scanf("%d", &n);
    } while (n <= 0);

    printf("Moi ban nhap thong tin sinh vien \n");
    intputInfoSinhvien(A, n);
    printf("Thong tin cua cac sinh vien la: \n\n");
    outputInfoSinhvien(A, n);

    printf("Cac ket qua thong ke: \n");
    printf("Trung binh diem Toan cua tat cac sinh vien: %f \n",aveofToan(A,n));
    MaxToan(A,n);
    return 0;
}

void intputInfoSinhvien(sinhvien_t A[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Moi ban nhap thong tin cua sinh vien thu %d\n", i + 1);
        printf("Nhap ten: ");
        scanf("%s", A[i].name);
        fflush(stdin);
        printf("Nhap tuoi: ");
        scanf("%d", &A[i].age);
        fflush(stdin);
        printf("Nhap gioi tinh: ");
        scanf("%c", &A[i].gender);
        fflush(stdin);
        printf("Nhay ngay thang nam sinh: \n");
        scanf("%d%d%d", &A[i].ns.day, &A[i].ns.month, &A[i].ns.year);
        fflush(stdin);
        printf("Diem Toan: \n");
        scanf("%d", &A[i].dtb.toan);
        fflush(stdin);
        printf("Diem Ly: \n");
        scanf("%d", &A[i].dtb.ly);
        fflush(stdin);
        printf("Diem Hoa: \n");
        scanf("%d", &A[i].dtb.hoa);
        fflush(stdin);
    }
}

void outputInfoSinhvien(sinhvien_t A[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Sinh vien thu %d \n", i + 1);
        printf("Ten: %s, tuoi: %d, gioitinh: %c, ngaysinh: %d/%d/%d \n", A[i].name, A[i].age, A[i].gender, A[i].ns.day, A[i].ns.month, A[i].ns.year);
        printf("Diem Toan: %d, Ly: %d, Hoa: %d \n", A[i].dtb.toan, A[i].dtb.ly, A[i].dtb.hoa);

        printf("\n----------------\n");
    }
}

float aveofToan(sinhvien_t A[], int n)
{
    int i;
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += A[i].dtb.toan;
    }
    return sum/n;
}
void MaxToan(sinhvien_t A[], int n){
    int max=A[0].dtb.toan;
    int i;
    for (i = 0; i < n; i++){
        if(A[i].dtb.toan>max){
            max=A[i].dtb.toan;
        }
    }
    printf("Max Toan:%d ",max);
}
