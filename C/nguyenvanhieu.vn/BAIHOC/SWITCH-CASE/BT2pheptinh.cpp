#include<stdio.h>
#include<stdlib.h>
/*
hàm thoát chương trình
phải khai báo thư viện
#include<stdlib.h>
hàm thoát ct
exit(0);
*/
int main(){
    printf("======MENU=====");
    int a,b;
    char luachon;
    printf("\n1.Cong 2 so nguyen");
    // printf("\n2.");
    printf("\n2.Tru 2 so nguyen");
    printf("\n3.Chia 2 so nguyen");
    printf("\n4.Chia du 2 so nguyen");
    printf("\n5.thoat chuong trinh");
    printf("\nNHAP SU LUA CHON CUA BAN:");
    luachon=getchar();
    switch(luachon){
        case '1':{
            printf("Nhap 2 so nguyen a va b: ");
            scanf("%d%d",&a,&b);
            printf("\ntong cua chung la: %d",a+b);
            break;
        }
        case '2':{
            printf("Nhap 2 so nguyen a va b: ");
            scanf("%d%d",&a,&b);
            printf("\nhieu cua chung la: %d",a-b);
            break;
        }
        case '3':{
            printf("Nhap 2 so nguyen a va b: ");
            scanf("%d%d",&a,&b);
            if(b==0){
                printf("b khong the bang 0 duoc");
                printf("\nmoi ban nhap lai b");
            }else{
                printf("\nthuong cua chung la:%f",(float)a/b);
            }
            break;
        }
        case '4':{
            printf("Nhap 2 so nguyen a va b: ");
            scanf("%d%d",&a,&b);
            if(b==0){
                printf("b khong the bang 0 duoc");
                printf("\nmoi ban nhap lai b");
            }else{
                int last;
                last=a%b;
                printf("\nthuong cua chung la:%d",last);
            }
            break;
        }
        case '5':{
            exit(0);
        }
        default:printf("\nkhong co lua chon nay");
    }
    return 0;
}
    