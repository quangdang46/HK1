
#include <stdio.h>
int main() 
{
    int n;
    int min;
    int check;
    check = 0;
    do {
        printf("Enter n:");
        scanf("%d", &n);
        if (check == 0) {
            check = 1;
            min = n;
        }
        if (n>=0 && min > n) {
            min = n;
        }
    } while (n>=0);
    printf("Gia tri nho nhat la %d", min);
}

