/*
Bài tập kiểm tra số armstrong
Viết chương trình trên ngôn ngữ C để nhập một số nguyên và kiểm tra xem số đó có phải là số Armstrong hay không. Đưa thông báo kết quả kiểm tra lên màn hình.

Số armstrong là gì?
Số armstrong là số mà từng chữ số trong số đó lũy thừa với số chữ số của nó bằng chính nó. Ví dụ:

137 != 1^3 + 3^3 + 7^3 => 137 không phải là số armstrong
153 = 1^3 + 5^3 + 3^3 => 153 là số armstrong
Ý tưởng giải bài toán

Đếm số lượng chữ số.
Tính tổng các lũy thừa: cơ số là các chữ số, số mũ là số lượng chữ số.
So sánh và kết luận.
Ý tưởng đếm số chữ số của số n

Khởi tạo biến dem = 0.
Chừng nào n còn lớn hơn 0. Thực hiện tăng đếm, xóa bỏ chữ số cuối của n
*/
// #include<stdio.h>
// #include<math.h>

// int dem(int n){
//     int chuso=0;
//     while(n>0){
//         chuso+=1;
//         n =n/10;
//     }
//     return chuso;
// }

// int main(){
//     int n;
//     int last,tong=0;
//     printf("\nNhap gia tri n: ");scanf("%d",&n);
//     int n1=n;
//     int x=dem(n);
//     while(n>0){
//         last=n%10;
//         tong+=pow(last,x);
//         n=n/10;
//     }
//     if (tong==n1)
//     {
//         printf("\nDay la so armstrong");
//     }else{
//         printf("\nday khong phai la so amstrong");
//     }
// }
//CACH 2
#include <stdio.h>
#include <math.h>
/*
    1. Đếm số lượng chữ số
    2. Tính tổng các lũy thừa: cơ số là các chữ số, số mũ là số lượng chữ số
    3. So sánh và kết luận
 */
 
// Đếm số lượng chữ số của số n
/*
    1023
    1. 102
    2. 10
    3. 1
    4. 0
    => Có 4 chữ số
 */
int CountDigit(int n)
{
    int count = 0;
    while (n > 0)
    {
        n /= 10;
        ++count;
    }
    return count;
}
 
// Kiểm tra số armstrong
/*
    n = 1023
    => 1^4 + 0^4 + 2^4 + 3^4 so sánh với 1023
 
    1023 % 10 = 3
    1023 / 10 = 102
 */
bool IsArmstrong(int n)
{
    int numDigit = CountDigit(n);
    int tmp = n, sum = 0, last;
    while (tmp > 0)
    {
        last = tmp % 10; // lấy chữ số cuối cùng
        tmp /= 10;       // bỏ chữ số cuối cùng
        sum += pow(last, numDigit);
    }
    if (sum == n)
        return true;
    return false;
}
 
int main()
{
    int n;
    printf("\nNhap n = ");
    scanf("%d", &n);
 
    if (IsArmstrong(n) == true)
    {
        printf("\n%d la so armstrong!", n);
    }else{
        printf("\n%d khong la so armstrong!", n);
    }
}