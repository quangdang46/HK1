#include <stdio.h>
#include <string.h>
#define SIZE 100
int main(){
    char str[] = "Happy New Year";
    char y[] = " 2017";
    char x[SIZE];
    strcpy (x, str);
    printf("x is copied: %s\n", x);
    printf ("Compare x and str: %d\n", strcmp(str, x));
    printf("Concatenate y to x: %s\n", strcat (x, y));
    return 0;
}