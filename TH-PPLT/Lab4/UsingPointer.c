// pointers2.c
#include <stdio.h>
int main(){
    int a = 10; // actual variable declaration
    int *b; // pointer variable declaration
    b = &a; // store address of 'a' in pointer variable
    printf("Address of a is %x\n", &a);
    printf("Address of b is %x\n", &b);
    printf("Address stored in b is %x\n", b);
    printf("Value of a is %d\n", a);
    printf("Value of b is %d\n", *b);
    return 0;
}