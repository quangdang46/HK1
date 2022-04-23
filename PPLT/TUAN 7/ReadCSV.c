#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *file;

    file = fopen("input2.csv", "r");

    if (!file)
    {
        printf("Can not open file \n");
        exit(1);
    }

    char buffer[1024];
    int row = 0;
    int column = 0;
    while (fgets(buffer, sizeof(buffer), file))
    {
        column = 0;
        row++;
        char *value = strtok(buffer, ", ");

        while (value)
        {
            printf("%s", value);
            value = strtok(NULL, ", ");
            column++;
        }
    }

    fclose(file);

    return 0;
}
