// bài tập in ra con chó có mấy chân
/*NÊN NHỚ CASE PHẢI ĐI VỚI BREAK
NOT CASE..{

}
DEFAULT:........................
*/
#include<stdio.h>

int main(){
    char luachon;
    printf("Cau hoi:Con cho co may chan");
    printf("\nA.1\nB.2\nC.3\nD.4");
    printf("\nNhap chua chon cua ban(a,b,c,d): ");
    luachon=getchar();
    switch(luachon){
        case 'a':
        case 'b':
        case 'c':
        case 'A':
        case 'B':
        case 'C':{
            printf("Ban da chon sai");
            break;
        }
        case 'd':
        case 'D':{
            printf("chuc mung ban chon chinh xac");
            break;
        }
        default: printf("Khong co dap an cua ban ,vui long nhap lai");

    }
}