#include <stdio.h>
int UCLN(int a, int b)
{
  if (b == 0)
    return a;
  return UCLN(b, a % b);
}

// tim BSCNN dung de qui
int BCNN(int a, int b){
  return a*b/UCLN(a,b);
}
int main()
{
  int a, b;
  printf("Nhap a,b: ");
  scanf("%d%d", &a, &b);
  printf("USCLN: %d\n", UCLN(a, b));
  printf("BCSN: %d\n", BCNN(a, b));
}