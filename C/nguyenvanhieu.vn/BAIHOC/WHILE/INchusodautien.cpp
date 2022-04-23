#include<stdio.h>

int main(){
    int a,b;
    printf("nhap so: ");scanf("%d",&a);
    //dung lenh for
    b=a;
    // for(;b>9;){
    //     b=b/10;
    // }
    //dung lenh while
    // b=a;
    // while(b>9){
    //     b=b/10;
    // }
    //dung vong lap while do
    b=a;
    do{
        if(b<10){
            printf("so dau tien la:%d",b);
            return 0;//thoat chuong trinh
        }
        b=b/10;
    }while(true);
    // 
}