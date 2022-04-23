// Chương trình tính phí dịch vụ taxi theo chiều dài đường đi d như sau
#include<stdio.h>
#define TIEN1 18000
#define TIEN2 8000
#define TIEN3 6000
#define TIEN4 4000
int main(){
    float d;
    printf("\nNhap chieu dai duong di: ");
    scanf("%f",&d);
    float Tien=0;
    if(d<=1){
        Tien+=d*TIEN1;
    }else if(d<=10){
        Tien+=TIEN1+(d-1)*TIEN2;
    }else if(d<=30){
        Tien+=TIEN1+10*TIEN2+(d-11)*TIEN3;
    }else{
        Tien+=TIEN1+10*TIEN2+20*TIEN3+(d-30)*TIEN4;
    }
    printf("\nGia tien la:%f",Tien);

}