/*Bài tập tìm số lớn nhất trong 3 số a b c
Tìm số lớn nhất trong 3 số a, b, c nhập từ bàn phím
Ý tưởng giải bài tập
Nhập vào 3 số nguyên từ bàn phím
Giả sử số đầu tiên là số lớn nhất
Nếu số thứ 2 lớn hơn số lớn nhất, => số lớn nhất là số thứ 2
Nếu số thứ 3 lớn hơn số lớn nhất => số lớn nhất là số thứ 3
In ra giá trị của số lớn nhất
*/
#include<stdio.h>
int main(){
    int a,b,c;
    printf("a= ");scanf("%d",&a);
    printf("b= ");scanf("%d",&b);
    printf("c= ");scanf("%d",&c);
    // CACH 1
    // int max=a;
    // if (b>max){
    //     max=b;
    // }
    // if(c>max){
    //     max=c;
    // }
    // printf("so lon nhat la: %d",max);
    // CACH 2 su dung cau truc &&
    if(a>=b && a>=c){
        printf("max=%d",a);
    }
    if (b>=a && b>=c){
        printf("max=%d",b);
    }
    if(c>=a && c>=b){
        printf("max=%d",c);
    }
}

