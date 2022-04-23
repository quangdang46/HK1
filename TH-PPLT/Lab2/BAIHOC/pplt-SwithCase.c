// switch.c
#include<stdio.h>
int main (){
    int choice= 0;
    printf("Enter your choice: ");
    scanf ("%d", &choice);
    switch (choice){
        case 0: case 1:
            printf("Coke\n");
            break;
        case 2:
            printf ("Coffee \n");
            break;
        case 3:
            printf("Tea\n");
            break;
        default:
            printf("Water\n");
            break;
    }
}
