/*
Viết chương trình C giải phương trình bậc 2: ax2 + bx + c = 0.
*/
#include <stdio.h>
#include<math.h>
int main(){
    printf("\nGIAI PHUONG TRINH ax2 + bx + c = 0");
    int a,b,c;
    float x1,x2,x3;
    printf("\nNhap lan luot cac gia tri a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);
    int denta;
    denta=pow(b,2)-4*a*c;
    if(denta>=0){
        if(denta>0){
            x1=(-b+sqrt(denta))/(2*a);
            x1=(-b-sqrt(denta))/(2*a);
            printf("\nphuong trinh co 2 nghiem la:");
            printf("x1= %0.1f\n",x1);
            printf("x2= %0.1f\n",x2);
        }else{
            printf("\nphuong trinh co 1 nghiem");
            x3=-b/(2*a);
            printf("\nx3= %0.1f\n",x3);
        }

    }else{
        printf("\n pt vo nghiem");
    }
}