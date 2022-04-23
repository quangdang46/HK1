/*Exercise 1: Tạo file có tên là Ex1.c thực hiện yêu cầu sau: Viết chương trình nhập x từ bàn phím 
và tính các biểu thức (đa thức và công thức lượng giác, hàm mũ)
*/
#include<stdio.h>
#include<math.h>
const float Pi=3.14;
int main(){
    // CHƯƠNG TRÌNH THỰC HIỆN TÍNH CÁC ĐA THỨC,LƯỢNG GIÁC
    float x,y1,y2,y3,y4;
    printf("\nNhap gia tri x: ");scanf("%f",&x);
    
    //Giá trị biểu thức y1
    y1=pow(2,3)+pow(5,2)+7*x+15;
    printf("\nGia tri bieu thuc y1:%0.1f",y1);
    
    //Giá trị biểu thức y2
    float rad=x*Pi/180;
    y2=sin(2*rad)+cos(4*rad)+tan(6*rad);
    printf("\nGia tri bieu thuc y2:%0.1f",y2);
    
    //Giá trị biểu thức y3
    y3=pow((x+10),(x+5));
    printf("\nGia tri bieu thuc y3:%0.1f",y3);
    
    //Giá trị biểu thức y4
    if(x>0){
        y4=log(x);
        printf("\nGia tri bieu thuc y4:%0.1f",y4);
    }else{
        printf("\nKhong the tinh y4");
    }
}