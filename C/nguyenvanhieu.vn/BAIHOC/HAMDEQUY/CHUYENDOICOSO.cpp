// #include<stdio.h>
/*
    Chuyển số nhị phân sang thập phân.
        Hệ thập phân: 1234 = 1 * 10^3 + 2 * 10^2 + 3 * 10^1 + 4 * 10^0
        Hệ nhị phân: 101 = 1 * 2^2 + 0 * 2^1 + 1 * 2^0
 
    Cách chuyển:
        n = 8
        0, 4 => 8 % 2 * 10 ^ 0
        0, 2 => 4 % 2 * 10 ^ 1
        0, 1 => 2 % 2 * 10 ^ 2
        1, 0 => 1 % 2 * 10 ^ 3
        int kq = 1000
 */
#include <stdio.h>
#include<math.h>
//chuyen doi nhi phan sang thap phan
int chuyendoi(int n){
    int giatri=0,mu=0;
    while(n > 0){
        giatri+=(n%10)*pow(2,mu);
        mu+=1;
        n/=10;
    }
    return giatri;
}
int main(){
    int n;
    printf("\nNhap so can chuyen doi: ");
    scanf("%d", &n);
    chuyendoi(n);
    // printf("\ngia tri thap phan cua no la: %d",chuyendoi(n));
    printf("%d",chuyendoi(n));
}