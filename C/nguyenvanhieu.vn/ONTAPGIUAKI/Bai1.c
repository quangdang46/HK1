#include<stdio.h>
int main(){
    int m,h,n;
    // h la so gio m la so tien tren h
    printf("\nNhap m va h: ");
    scanf("%d%d",&m,&h);
    if(h<=40){
        n=h*m;
    }else if(h<=45){
        n=40*m+(h-40)*m*1.8;
    }else if(h<=50){
        n=40*m+5*m*1.8+(h-45)*m*2.5;
    }else{
        n=40*m+5*m*1.8+5*m*2.5+(h-50)*m*2.6;
    }
    printf("So tien tra cho nhan vien la:%d",n);
}