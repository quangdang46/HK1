//IN RA CÁC SỐ LẺ TỪ 1 ĐẾN N
#include<stdio.h>

int main(){
    int n;
    printf("Nhap gioi han in so le: ");scanf("%d",&n);
    int number=1;
    while(number<=n){
        if(number%2==1){
            printf("%d\t",number);
        }
        number++;//THÊM ĐIỀU KIỆN LẶP
    }
}