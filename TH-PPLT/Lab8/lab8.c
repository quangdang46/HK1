#include <stdio.h>
#include <string.h>
#define MAX 100

typedef struct
{
    char id[MAX];
    char name[MAX];
    char sex[MAX];
    int birthyear;
    char phonenumber[MAX];
    int salary;
} sinhvien_st;
void inputInfosinhvien(sinhvien_st A[], int n);
void outputInfosinhvien(sinhvien_st A[], int n);
void TimId(sinhvien_st A[], int n);
void DemNhanVien(sinhvien_st A[], int n);
void XepThuTuNam(sinhvien_st A[], int n);
void XepThuTuLuong(sinhvien_st A[], int n);
void MaxLuong(sinhvien_st A[], int n);
void TreNhanVien(sinhvien_st A[], int n);
void XoaId(sinhvien_st A[], int n);
int main()
{
    sinhvien_st A[MAX];
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d",&n);
    printf("Moi ban nhap thong tin sinh vien \n");
    inputInfosinhvien(A, n);
    printf("Thong tin cua cac sinh vien la: \n");
    outputInfosinhvien(A, n);
    TimId(A,n);
    DemNhanVien(A,n);
    printf("\n");
    XepThuTuNam(A,n);
    printf("\n");
    XepThuTuLuong(A,n);
    printf("\n");
    MaxLuong(A,n);
    printf("\n");
    TreNhanVien(A,n);
    printf("\n");
    XoaId(A,n);
    return 0;
}
void inputInfosinhvien(sinhvien_st A[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Moi ban nhap thong tin cua sinh vien thu %d: \n",i+1);
        printf("Nhap id: ");
        scanf("%s", &A[i].id);
        fflush(stdin);
        printf("Nhap ten: ");
        scanf("%s", &A[i].name);
        fflush(stdin);
        printf("Nhap gioi tinh: ");
        scanf("%s", &A[i].sex);
        fflush(stdin);
        printf("Nhap nam sinh: ");
        scanf("%d", &A[i].birthyear);
        fflush(stdin);
        printf("Nhap SDT: ");
        scanf("%s",&A[i].phonenumber);
        fflush(stdin);
        printf("Nhap luong: ");
        scanf("%d",&A[i].salary);
        fflush(stdin);
    }
}


void outputInfosinhvien(sinhvien_st A[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("ID: %s, Ten: %s, Gioi tinh: %s, Nam sinh: %d, SDT: %s, Luong: %d \n", A[i].id, A[i].name, A[i].sex, A[i].birthyear, A[i].phonenumber, A[i].salary);
        printf("\n----------------\n");
    }
}
void TimId(sinhvien_st A[], int n){
    char id1[100];
    int i;
    printf("Nhap id can tim:");scanf("%s",&id1);fflush(stdin);
    printf("Cac nhan vien co id: %s\n",id1);
    for (i = 0; i < n; i++){
        if(strcmp(A[i].id,id1)==0){
            printf("ID: %s, Ten: %s, Gioi tinh: %s, Nam sinh: %d, SDT: %s, Luong: %d \n", A[i].id, A[i].name, A[i].sex, A[i].birthyear, A[i].phonenumber, A[i].salary);
            printf("\n----------------\n");  
        }
    }
}
void DemNhanVien(sinhvien_st A[], int n){
    int nam=0,nu=0,i;
    for (i = 0; i < n; i++){
        if(strcmp(strupr(A[i].sex),"NAM")==0){
            nam++;
        }
        if(strcmp(strupr(A[i].sex),"NU")==0){
            nu++;
        }
    } 
    printf("So nhan vien nam:%d\nSo nhan vien nu:%d",nam,nu);
}
void XepThuTuNam(sinhvien_st A[], int n){
    printf("\n----------------\n");
    int i,j;
    for (i = 0; i<n; i++){
        for (j=i+1; j<n; j++){
            if(A[j].birthyear<A[i].birthyear){
                sinhvien_st tmp=A[i];
                A[i]=A[j];
                A[j]=tmp;
            }
        }
    }
    printf("Nhan vien theo thu tu tang dan nam sinh\n");
    outputInfosinhvien(A,n);
}
void XepThuTuLuong(sinhvien_st A[], int n){
    int i,j;
    for (i = 0; i<n; i++){
        for (j=i+1; j<n; j++){
            if(A[j].salary<A[i].salary){
                sinhvien_st tmp=A[i];
                A[i]=A[j];
                A[j]=tmp;
            }
        }
    }
    printf("Nhan vien theo thu tu tang dan luong\n");
    outputInfosinhvien(A,n);
}
void MaxLuong(sinhvien_st A[], int n){
    int max=A[0].salary;
    int index,i;
    for(i = 1; i < n; i++){
        if(A[i].salary>max){
            max=A[i].salary;
            index=i;
        }
    }
    printf("Nhan vien muc luong Max\n");
    printf("ID: %s, Ten: %s, Gioi tinh: %s, Nam sinh: %d, SDT: %s, Luong: %d \n", A[index].id, A[index].name, A[index].sex, A[index].birthyear, A[index].phonenumber, A[index].salary);
}
void TreNhanVien(sinhvien_st A[], int n){
    int min=A[0].birthyear;
    int index,i;
    for(i = 1; i < n; i++){
        if(A[i].birthyear<min){
            min=A[i].birthyear;
            index=i;
        }
    }
    printf("Nhan vien tre nhat\n");
    printf("ID: %s, Ten: %s, Gioi tinh: %s, Nam sinh: %d, SDT: %s, Luong: %d \n", A[index].id, A[index].name, A[index].sex, A[index].birthyear, A[index].phonenumber, A[index].salary);
}

void XoaId(sinhvien_st A[], int n){
    int i,j;
    char k[MAX];
    printf("Nhap id can xoa: ");
    scanf("%s",&k);
    fflush(stdin);
    for(i=0;i < n; i++){
        if(strcmp(A[i].id,k)==0){
            for(j=i;j < n-1;j++){
                A[j]=A[j+1];
            }
            n-=1;
        }
    }
    outputInfosinhvien(A,n);
}