#include<stdio.h>

int main(){
    int n;
    char n1,luachon;
    printf("CHUONG TRINH KIEM TRA THANG");
    printf("A.Nhap thang can kiem tra\nB.thoat ct");
    printf("nhap lua chon cua ban(A hoac B");
    luachon=getchar();
    switch(luachon){
        case 'b':
        case 'B':break;
        case 'a':
        case 'A':{
            printf("nhap thang can kiem tra");
            n1=getchar();
            switch(n1){
                case '1':
                case '3':
                case '5':
                case '7':
                case '8':
                case '12':{
                    printf("thang nay co 31 ngay");
                    break;
                }
                case '4':
                case '6':
                case '9':
                case "11":{
                    printf("thang co 30 ngay");
                    break;
                }
                case '2':{
                    int thang;
                    printf("nhap nam can kiem tra");
                    scanf("%d",&thang);
                    if(thang%4==0 && thang %100!=0){
                        printf("thang nay co 29 ngay");

                    }else{
                        printf("thang cos 28 ngay");
                    }
                    break;
                }

            }
        }default:printf("khong co lua chon nay moi ban nhap lai ");
    
    }   
}