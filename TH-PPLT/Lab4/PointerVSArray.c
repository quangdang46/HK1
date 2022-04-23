// pointers3.c
#include <stdio.h>
int main(){
    int arr[3] = {10, 200, 3000};
    int *ptr; // pointer variable declaration
    int i = 0;
    ptr = arr; // ptr points to 'arr'
    for(i = 0; i < 3; i++){
        printf("Address of arr[%d] is %x\n", i, ptr);
        printf("Value of arr[%d] is %d\n", i, *ptr);
        /* Move ptr to the next location*/
        ptr++;
    }
    return 0;
}