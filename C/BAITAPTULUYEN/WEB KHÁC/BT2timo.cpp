#include<stdio.h>

int main(){
    char luachon;
    printf("\nChon 4 dap an sau: \nA\nB\nC\nD");
    printf("\nNhap su lua chon cua ban:" );
    luachon=getchar();
    switch(luachon){
        case 'a':
        case 'A':{
            printf("\nban chon a");
            break;
        }
        case 'b':
        case 'B':{
            printf("Ban da chon b");
            break;
        }
        case 'c':
        case 'C':{
            printf("\n ban da chon c");
            break;
        }
        case 'd':
        case 'D':{
            printf("\n ban da chon d");
            break;
        }
        default:printf("moi ban nhap lai lua chon");
    }
}   