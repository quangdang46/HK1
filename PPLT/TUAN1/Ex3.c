/* thực hiện yêu cầu sau: Viết chương trình nhập vào một ký tự alphabet.
Kiểm tra xem ký tự vừa nhập là nguyên âm hay phụ âm.
Cho biết nguyên âm là các ký tự: a, e, i, o, u */
#include <stdio.h>

int main(){
    char luachon;
    printf("\nKiem tra nguyen am hay phu am");
    printf("\nNhap ki tu can kiem tra: ");
    scanf("%c",&luachon);
    printf("%c",luachon);
    switch(luachon){
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':{
            printf("\n'%c' la nguyen am",luachon);
            break;
        }default:printf("\n'%c' la phu am",luachon);
    }
}