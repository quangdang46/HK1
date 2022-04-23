//TÍNH TƯỞNG BÌNH PHƯƠNG CÁC SỐ TỪ X-->Y
#include <stdio.h>
#include<math.h>

int main(){
    int x,y,sum;
    printf("x=");scanf("%d",&x);
    printf("y=");scanf("%d",&y);
    sum=0;
    int i;
    for(i=x;i<=y;i++){
        sum=sum+i*i;
    }
    printf("tong binh phuong co ket qua la:%d",sum);
}