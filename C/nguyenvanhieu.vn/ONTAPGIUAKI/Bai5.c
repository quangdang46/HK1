#include<stdio.h>
#include<math.h>
int main(){
    float x,y,s;
    printf("\nNhap gia tri x va y: ");
    scanf("%f%f",&x,&y);
    s=(3*pow(x,3)*y-(1/2)*pow(x,2)+(1/5)*x*y)*6*x*pow(y,3);
    printf("\nGia tri bieu thuc s: %f",s);
}