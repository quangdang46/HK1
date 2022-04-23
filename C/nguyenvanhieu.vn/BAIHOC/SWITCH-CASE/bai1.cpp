/*Bài tập 1: Viết chương trình C# kiểm tra bàn phím khi ấn xuống.
Nếu người dùng ấn một phím (từ 0 tới 9) thì chương trình sẽ hiển thị số số được nhấn này,
ngược lại hiển thị “Phím bạn ấn không phải là số!”.
*/
#include<stdio.h>
int main(){
    printf("KIEM TRA SO DA NHAP");
    char luachon;
    luachon=getchar();
    switch(luachon){
        case '0':{printf("Bạn đã ấn số 0"); break;}
        case '1':{printf("Bạn đã ấn số 1"); break;}
        case '2':{printf("Bạn đã ấn số 2"); break;}
        case '3':{printf("Bạn đã ấn số 3"); break;}
        case '4':{printf("Bạn đã ấn số 4"); break;}
        case '5':{printf("Bạn đã ấn số 5"); break;}
        case '6':{printf("Bạn đã ấn số 6"); break;}
        case '7':{printf("Bạn đã ấn số 7"); break;}
        case '8':{printf("Bạn đã ấn số 8"); break;}
        case '9':{printf("Bạn đã ấn số 9"); break;}
        default:printf("Phím bạn ấn không phải là số!");
    }
}

