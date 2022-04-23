/*
Bài tập C: in bảng cửu chương rút gọn
Bảng cửu chương rút gọn là bảng có hàng là kết quả của phép nhân một số với các giá trị từ 1 tới 10. 
Chúng ta sẽ in 9 hàng tương ứng với các số từ 2 tới 10.
*/
// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=2;i<=10;i++){
//         for(j=1;j<=10;j++){
//             printf("%3.d",i*j);
//         }
//         printf("\n");
//     }
// }
#include <stdio.h>
 
int main() {
   int i, j, count;
   int start, end;
 
   start = 2, end = 10;
 
   printf("In bang cuu chuong rut gon:\n");
   for(i = start; i <= end; i++) {
      count = i;
 
      for(j = 1; j <= 10; j++) {
         printf(" %3d", count*j);
      }
 
      printf("\n");
   }
 
   return 0;
}