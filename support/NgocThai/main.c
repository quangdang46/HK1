#include<stdio.h>
#include<string.h>
typedef struct {
    char ma[5];
    int tinhtrang;
    //1:da co, 0:chua co
    int dongia;
}PHONG;

void Nhap(PHONG p[],int n){
    int i;
    for(i=0;i<n;i++){
        fflush(stdin);
        printf("\nNhap ma phong: ");
        gets(p[i].ma);
        printf("\nNhap tinh trang: ");
        scanf("%d",&p[i].tinhtrang);
        printf("\nNhap don gia: ");
        scanf("%d",&p[i].dongia);
    }
}
void Xuat(PHONG p[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("\nMa phong: %s",p[i].ma);
        printf("\nTinh trang: %d",p[i].tinhtrang);
        printf("\nDon gia: %d",p[i].dongia);
    }
}

//đếm số lượng phòng đã có khách đặt
int Dem(PHONG p[],int n){
    int i,dem=0;
    for(i=0;i<n;i++){
        if(p[i].tinhtrang==1)
            dem++;
    }
    return dem;
}
//tính tổng đơn giá tất cả các phòng bằng đệ quy
int Tong(PHONG p[],int n,int i){
    if(i==n) return 0;
    return p[i].dongia+Tong(p,n,i+1);

}
int main(){
    PHONG p[100];
    int n;
    printf("Nhap so luong phong: ");
    scanf("%d",&n);
    Nhap(p,n);
    printf("\n_______\n");
    Xuat(p,n);
    printf("\n________\n");
    printf("\nSo luong phong da co khach: %d",Dem(p,n));
    printf("\nTong don gia: %d",Tong(p,n,0));
    return 0;
}