#include<stdio.h>
struct NhanVien{
    int id;
    char name[30];
    int age;
    char sex[3];
    int salary;
    long int number;
};
typedef struct NhanVien NV;


void Nhap(NV &nv){
    printf("Id:");scanf("%d",&nv.id);fflush(stdin);
    
}
void NhapN(NV A[],int n){
    for(int i=1;i<=n;i++){
        printf("Nhan vien %d\n",i);
        Nhap(A[i]);
    }
}
void Xuat(NV nv){
    printf("Id:%d       Name:%s         Age:%d       Sex:%s      Salary:%d      Number:%d\n",nv.id,nv.name,nv.age,nv.sex,nv.salary,nv.number);
}
void XuatN(NV A[],int n){
    for(int i=1;i<=n;i++){
        Xuat(A[i]);
    }
}
int main(){
    NV A[100];
    int n;
    printf("Nhap so luong nhan vien:");
    scanf("%d",&n);
    NhapN(A,n);
    XuatN(A,n);
}