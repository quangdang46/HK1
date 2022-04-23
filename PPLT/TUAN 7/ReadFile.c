#include<stdio.h>
#include<stdlib.h>
int main()
{
    // Khai bao bien
    FILE *infile;
    FILE *outfile;
    int x,y,z;
    // Mo file va kiem tra
    infile = fopen("input1.txt", "r");
    outfile = fopen("output1.out", "w");
    if (!infile)
    {
        printf("Can not open file \n");
        exit(1);
    }
    if (!outfile)
    {
        printf("Can not open file \n");
        exit(2);
    }

    // Lam cai gi do
    while (!feof(infile))
    {
        fscanf(infile, "%d%d%d", &x, &y, &z);
        fprintf(outfile, "Data read: %d %d %d \n", x, y, z);
    }

    // Dong file
    fclose(infile);
    fclose(outfile);
    return 0;
}
