// CHUYEN NGAY THANH NGAY THANG NAM
#include <stdio.h> 
int main(){
    int ngay,nam,tuan; 
    printf("\nNhap so ngay can chuyen doi: ");
    scanf("%d",&ngay);
    nam = ngay/365; 
    tuan = (ngay % 365)/7;
    ngay = ngay- ((nam*365) + (tuan*7));

    printf("Nam: %d\n",nam);
    printf("Tuan: %d\n",tuan);
    printf("Ngay: %d \n",ngay);
    return 0;
}
