
#include <stdio.h>
int main()
{
    int a = 10, b = 5;
    printf("Before swapping: a = %d, b = %d", a, b);
    // Code to swap a and b:
    a = a + b;//a=15,b=5
    b = a - b;//a=15,b=10
    a = a - b;//a=5,b=10
    printf("\nAfter swapping: a = %d, b = %d", a, b);
    return 0;
}