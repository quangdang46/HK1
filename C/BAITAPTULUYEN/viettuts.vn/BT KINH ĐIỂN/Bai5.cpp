/*
Bài tập C: in các số chẵn trong dãy từ 1-10
và số lẻ từ 1 đến 10
Yêu cầu là in các số chẵn trong dãy số từ 1 tới 10 bởi sử dụng vòng lặp trong ngôn ngữ C.
Với bài tập C này, ngoài sử dụng vòng lặp,
chúng ta cần kết hợp thêm một lệnh để kiểm tra điều kiện xem số đó là số chẵn hay lẻ,
nếu là số chẵn thì in còn nếu là số lẻ thì không.
Chúng ta sử dụng lệnh IF và toán tử % (để lấy phần dư) trong C.
*/
#include<stdio.h>
int sochan(int a){
    if(a%2==0){
        printf("%3.d",a);
    }
}
int sole(int b){
    if(b%2!=0){
        printf("%3.d",b);
    }
}
int main(){
    int i,j;
    for(i= 1; i <= 10; i++){
        sochan(i);
    }
    printf("\n");
    for(j=1; j <= 10; j++){
        sole(j);
    }
    
}