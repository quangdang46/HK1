#include <stdio.h>
void swap(int *a, int *b);
int main()
{
    int a = 6;
    int b = 7;
    printf("Truoc hoan vi: a = %d co dia chi %p va b = %d co dia chi %p\n", a, &a, b, &b);
    swap(&a, &b);
    printf("sau hoan vi: a = %d co dia chi %p va b = %d co dia chi %p\n", a, &a, b, &b);
    return 0;
}
void swap(int *a, int *b)
{
    /*-- Giai thuat hoan vi --*/
    int temp = *a;
    *a = *b;
    *b = temp;
    /*------------------------*/
}