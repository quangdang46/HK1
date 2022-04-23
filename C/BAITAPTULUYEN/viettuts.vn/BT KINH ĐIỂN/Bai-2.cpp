/*
Bài tập C: in bảng số từ 1 đến 100
In một bảng số thỏa mãn điều kiện:
Bảng số gồm 10 hàng và 10 cột
Các giá trị trong cột là liên tiếp nhau
Các giá trị trong hàng hơn kém nhau 10
*/
#include <stdio.h>
int main(){
    int i,j;
    for(i=1;i<=10;i++){
        for(j=i;j<=100;j+=10){
            printf("%3.d\t",j);
        }
        printf("\n");
    }
    return 0;
}