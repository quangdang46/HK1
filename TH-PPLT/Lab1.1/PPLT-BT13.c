/*Viết chương trình C để nhập điểm của 5 môn Lý, Hóa, Sinh,
    Toán học và Máy tính. Phân chia tỷ lệ phần trăm và phân loại theo quy trình sau:
    Tỷ lệ> 90%: Hạng A
   Tỷ lệ> 80%: Hạng B
   Tỷ lệ> 70%: Hạng C
    Tỷ lệ> 60%: Hạng D
    Tỷ lệ> 40%: Hạng E
    Tỷ lệ phần trăm <40%: Hạng F
*/
#include<stdio.h>
int main(){
    float a,b,c,d,e,xeploai;
    printf("\nNhap diem lan luot cua cac mon Ly,Hoa,Sinh,Toan,Tin hoc: ");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    xeploai=(a+b+c+d+e)/0.5;
    printf("\nBan duoc hang ");
    if(xeploai>90){
        printf("A");
    }else if(xeploai>80 && xeploai<90){
        printf("B");
    }else if(xeploai>70 && xeploai<80){
        printf("C");
    }else if(xeploai>60 && xeploai<70){
        printf("D");
    }else if(xeploai>40 && xeploai<60){
        printf("E");    
    }else{
        printf("F");
    }
}