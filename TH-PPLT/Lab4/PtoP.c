// pointers4.c
#include <stdio.h>
int main(){
    int val = 10;
    int *ptr1; // pointer variable declaration
    int **ptr2;
    ptr1 = &val; // ptr1 stores the address of 'val'
    ptr2 = &ptr1; // ptr2 stores the address of 'ptr1'
    printf("Address of val is %x\n", &val);
    printf("Address stored in ptr1 is %x\n", ptr1);
    printf("Address of ptr1 is %x\n", &ptr1);
    printf("Address stored in ptr2 is %x\n", ptr2);
    printf("Value of val through ptr1 is %d\n", *ptr1);
    printf("Value of val through ptr2 is %d\n", **ptr2);
    return 0;
}