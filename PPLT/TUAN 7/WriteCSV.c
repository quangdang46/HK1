#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *file;
    char name[50];
    int total;

    file = fopen("output2.csv", "a+");

    if (!file)
    {
        printf("Can not open file \n");
        exit(1);
    }

    printf("\nEnter name: ");
    scanf("%s", name);
    printf("\nTotal money i have: \n");
    scanf("%d", &total);

    fprintf(file, "%s,%d\n", name, total);

    fclose(file);

    return 0;
}
