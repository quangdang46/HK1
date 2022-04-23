#include<stdio.h>
//fibonacy sequence
int fibonacy(int n){
  if (n == 0)
    return 0;
  if (n == 1 || n == 2)
    return 1;
  return fibonacy(n - 1) + fibonacy(n - 2);
}
int main(){
  int n;
  printf("Nhap n: ");
  scanf("%d", &n);
  printf("%d", fibonacy(n));
}