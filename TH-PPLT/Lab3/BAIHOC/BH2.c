// function3.
#include <stdio.h>
// Global decleration
int isEven (int);
int main (){
    int number;
    printf("Input number ");
    scanf ("%d", &number);
    printf("%d", isEven(number));
    return 0;
}
// Function definition
int isEven (int n){
    if (n % 2 == 0)
        return 1; // n is even number
    return 0;
}