// function2.c
#include <stdio.h>
void printSquare ();
int main(){
    int i;
    printSquare ();
    printSquare ();
    return 0;
}
void printSquare (){
    int i;
    for (i = 1; i <= 5; i++){
        printf("%d\n", i * i) ;
    }
}