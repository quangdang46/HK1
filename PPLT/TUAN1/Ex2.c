/*Viết chương trình tính và in số tiền điện phải trả cho tháng đó, giá định mức theo bảng sau.
Giả sử gọi n là lượng điện tiêu thụ (kWh) và người dùng luôn nhập đúng (số n là số nguyên dương) *
*/
#include<stdio.h>
const int MUC1=100,MUC2=150,MUC3=200,MUC4=300;
int main(){
    int dien,tiendien;
    printf("Nhap so dien(kWh) can tinh tien: ");
    scanf("%d",&dien);
    if(dien<=MUC1){
        tiendien=dien*350000;
    }else if(dien<=MUC2){
        tiendien=MUC1*350000+(dien-MUC1)*400000;
    }else if(dien<=MUC3){
        tiendien=MUC1*350000+MUC2*400000+(dien-MUC1-MUC2)*450000;
    }else if(dien<=MUC4){
        tiendien=MUC1*350000+MUC2*400000+MUC3*450000+(dien-MUC1-MUC2-MUC3)*500000;
    }else{
        tiendien=MUC1*350000+MUC2*400000+MUC3*450000+MUC4*500000+(dien-MUC1-MUC2-MUC3-MUC4)*550000;
    }
    printf("\nSo tien dien la: %d VND",tiendien);
}