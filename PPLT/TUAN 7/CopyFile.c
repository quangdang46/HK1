#include<stdio.h>
#include<stdlib.h>
int main()
{
    // Khai bao bien
    FILE *infile;
    FILE *outfile;
    int ch;
    // Mo file va kiem tra
    infile = fopen("input1.txt", "r");
    outfile = fopen("output2.out", "w");
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

    while ((ch = fgetc(infile)) != EOF)
    {
        if(fputc(ch, outfile) == EOF)
        {
            fclose(infile);
            fclose(outfile);
            exit(3);
        }
    }


    // Dong file
    fclose(infile);
    fclose(outfile);
    return 0;
}
