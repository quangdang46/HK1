/*Bài tập C: in bảng nhân
In một bảng nhân của một số bất kỳ với các số từ 1 tới 10 và hiển thị kết quả.
Với bài tập C này, chúng ta chỉ sử dụng một vòng lặp và tăng dần giá trị của số nhân lên.
*/
// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<=10;i++){
//         for (j=i;j<i+1;j++){
//             int ketqua;
//             ketqua=6*j;
//             printf("6 x %d = %d",j,ketqua);
//         }
//         printf("\n");
        
//     }
// }
#include <stdio.h>
 
int main() {
   int i, n;
   n = 6; 
   printf("In bang nhan:\n");
   for(i = 1; i <= 10; i++) {
      printf("%3d  x %2d  =  %3d\n", n, i, n*i);
   }
   return 0;
}