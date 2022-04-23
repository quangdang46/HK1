/*
-      In ra tác giả có nhiều sách nhất
-      In ra Nhà xuất bản có nhièu sách nhất.
*/ 

#include<stdio.h>
#include<string.h>

struct cuonsach{
    char ten[20],nhasanxuat[50],tacgia[30];
    float gia;
    int trang;
};
typedef struct cuonsach sach;
void NhapSach(sach arr[],int n){
    int i;
    for(i=1;i<=n;i++){
        printf("Nhap cuon sach thu %d\n",i);
        printf("Ten sach:");
        fflush(stdin);
        gets(arr[i].ten);
        printf("Nha san xuat:");
        fflush(stdin);
        gets(arr[i].nhasanxuat);
        printf("Tac gia:");
        fflush(stdin);
        gets(arr[i].tacgia);
        printf("Gia:");
        fflush(stdin);
        scanf("%f",&arr[i].gia);
        printf("So trang:");
        fflush(stdin);
        scanf("%d",&arr[i].trang);
    }
}
void XuatSach(sach arr[],int n){
    int i;
    printf("\n________________________\n");
    for(i=1;i<=n;i++){
        printf("Ten:%3s   Nha san xuat:%3s   Tac gia:%3s   Gia:%2f   Trang:%d\n",arr[i].ten,arr[i].nhasanxuat,arr[i].tacgia,arr[i].gia,arr[i].trang);
    }
}
void InMaxTrang(sach arr[],int n){
    int max=arr[1].trang;
    int i,index;
    for(i=1;i<=n;i++){
        if(arr[i].trang>max){
            max=arr[i].trang;
            index=i;
        }
    }
    printf("\nSach co so trang lon nhat:\n");
    printf("Ten:%3s   Nha san xuat:%3s   Tac gia:%3s   Gia:%2f   Trang:%d",arr[index].ten,arr[index].nhasanxuat,arr[index].tacgia,arr[index].gia,arr[index].trang);
}
void InMinGia(sach arr[],int n){
    int min=arr[1].gia;
    int i,index;
    for(i=1;i<=n;i++){
        if(arr[i].gia<min){
            min=arr[i].gia;
            index=i;
        }
    }
    printf("\nSach co gia thap nhat:\n");
    printf("Ten:%3s   Nha san xuat:%3s   Tac gia:%3s   Gia:%2f   Trang:%d",arr[index].ten,arr[index].nhasanxuat,arr[index].tacgia,arr[index].gia,arr[index].trang);
}
int main(){
    sach arr[100];
    int n;
    printf("Nhap so luong cuon sach: ");
    scanf("%d",&n);
    NhapSach(arr,n);
    XuatSach(arr,n);
    InMaxTrang(arr,n);
    InMinGia(arr,n);
}