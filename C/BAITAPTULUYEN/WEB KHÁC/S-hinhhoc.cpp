#include<stdio.h>
#include<math.h>
int main(){
    const float pi=3.14;
    char luachon;
    printf("\nCHUONG TRINH TINH DIEN TICH HINH HOC");
    printf("\nNhap su lua chon cua ban");
    printf("\n1.Dien tich hinh tron\n2.Dien tich hinh chu nhat\n3.Dien tich hinh thang\n0.thoat");
    printf("\nmoi ban nhap: ");
    // scanf("%d",&luachon);
    luachon=getchar();
    //BODY
    switch(luachon){
        case '1':{
            int r;
            printf("Ban hay nhap ban kinh:");scanf("%d",&r);
            printf("\nDien tich hinh tron:%2.f",pi*pow(r,2));
            break;
        }
        case '2':{
            int a,b;
            printf("\nNhap canh thu nhat: ");scanf("%d",&a);
            printf("\nnhap canh thu hai: ");scanf("%d",&b);
            printf("\ndien tich hinh chu nhat:%d",(a+b)*2);
            break;
        }
        case '3':{
            int c,d,h;
            printf("\nNhap lan luot cac do dai cua hinh thang");
            printf("\nmoi ban nhap lan luot 2 canh va chieu cao");
            scanf("%d%d%d",&c,&d,&h);
            printf("\ndien tich hinh thang la:%2.f",0.5*(c+d)*h);
            break;
        }
        case '0':break;
        default:printf("\nmoi ban nhap lua chon khac");
    }
    return 0;
}