#include <stdio.h>
int main()
{
  char c;
  int i, j;
  printf("Moi ban nhap ky tu c: ");
  scanf("%c", &c);
  printf("Ky tu vua nhap: %c ,", c);
  i = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
  j = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

  if (i == 1 || j == 1)
  {
    printf("la nguyen am");
  }
  else
  {
    printf("la phu am");
  }

  return 0;
}