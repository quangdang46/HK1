/*
 * C program to print Armstrong numbers from 1 to n
 */
#include <stdio.h>
#include <math.h>
int main(){
    int num, lastDigit, digits, sum, i,n,bientam;
    /* Input upper limit from user */
    printf("Nhap gia tri n: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        sum = 0;
        num = i;
        bientam=num;
        /* Số lượng chữ số */
        digits = (int) log10(num) + 1;
        /*Tổng lũy thừa các số */
        while(num > 0){
            //Lấy số cuối cùng
            lastDigit = num % 10;
            //Tổng lũy thừa và dùng ceil() đẻ làm tròn
            sum+=ceil(pow(lastDigit, digits));
            num /= 10;
        }
        //Kiem tra
        if(bientam == sum){
            printf("%d\t",i);
        }
    }
}