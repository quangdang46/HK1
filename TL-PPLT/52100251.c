#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//////////////////////////////////
//////////////////////////////////
typedef struct
{
    char ID[25],ID_[25],check[25];
    char First_nm[25],Last_nm[25];
    char First[25],Last[25],Birth[25],Country[25],Gender[25],Dep[25];
}Employee;
//////////////////////////////////
//////////////////////////////////
void Input(Employee Info[],int *max);
void Count(Employee Info[],int max,char find[]);
void Ma_Fe(Employee Info[],int max,char find[]);
void Report(Employee Info[],double find);
void Average(Employee Info[],char find[]);
void Sort(Employee Info[],int max,char find[]);
void Quicksort(int l, int r,Employee Info[]);
void Nation(Employee Info[],int max,char find[]);
void Lower(char a[],int i);
int Fouls(char find[],int x);
//////////////////////////////////
//////////////////////////////////
int main()
{
    FILE * out;
    out = fopen("check.txt","w+");
    int max,i,check = 1;
    char order[25];
    Employee Info[5000];
    Input(Info,&max);
    gets(order);
    Lower(order,strlen(order) - 1);
    //////////////////////////////////
    //////////////Count//////////////
    if(strncmp(order,"count",5) == 0 && order[5] == ' ' && strlen(order) > 6 && Fouls(order,1) == 0)
    {
        char temp[100] = "";
        for(i = 6; i < strlen(order); i++)
            temp[i - 6] = order[i];
        Count(Info,max,temp);
        check = 0;
    }
    //////////////////////////////////
    //////////////List///////////////
    if(strcmp(order,"list male") == 0)
    {
        Ma_Fe(Info,max,"Male");
        check = 0;
    }
    else
    {
        if(strcmp(order,"list female") == 0)
        {
            Ma_Fe(Info,max,"Female");
            check = 0;
        }
    }
    //////////////////////////////////
    /////////////Report//////////////
    if(!strncmp(order,"report",6) && order[6] == ' ' && (order[7] == '0' || order[7] == '1') && Fouls(order,1) == 0)
    {
        double temp;
        char *token = strtok(order," ");
        token = strtok(NULL,"\0");
        temp = atof(token);
        if(temp <= 1 && temp >= 0)
        {
            Report(Info,temp);
            check = 0;
        }
    }
    //////////////////////////////////
    ////////////Average//////////////
    if(strncmp(order,"average",7) == 0 && order[7] == ' ' && Fouls(order,1) == 0 && strlen(order) > 8)
    {
        char temp[100] = "";
        for(i = 8; i < strlen(order); i++)
            temp[i - 8] = order[i];
        Average(Info,temp);
        check = 0; 
    }
    //////////////////////////////////
    //////////////Sort///////////////
    if(strncmp(order,"sort",4) == 0)
    {
        if(strcmp(order,"sort asc") == 0)
        {
            Sort(Info,max - 1,"asc");
            check = 0;
        }
        else
        {
            if(strcmp(order,"sort desc") == 0)
            {
                Sort(Info,max - 1,"");
                check = 0;
            }
        }
    }
    //////////////////////////////////
    /////////////Country/////////////
    if(strncmp(order,"country",7) == 0 && order[7] == ' ' && Fouls(order,1) == 0 && strlen(order) > 8)
    {
        char temp[100] = "";
        temp[0] = order[8] - 32;
        for(i = 9; i < strlen(order); i++)
        {
            temp[i - 8] = order[i];
        }
        check = 0;
        Nation(Info,max,temp);
    }
    
    if(check == 1)
    {
        FILE * abc;
        abc = fopen("result.csv","w+");
        fclose(abc);
        fprintf(out,"wrong syntax");
    }
    fclose(out);
    //return 0;
}
//////////////////////////////////
//////////////////////////////////
int Fouls(char find[],int x)
{
    int i,temp;
    while(x != 0)
    {
        int y = x % 10;
        x /= 10;
        switch (y)
        {
        case 1:
            temp = 0;
            for(i = 0; i < strlen(find); i++)
            {
                if(find[i] == ' ')
                    temp++;
            }
            if(temp != 1)
                return y;
        default:
            break;
        }
    }
    return 0;
}

void Lower(char a[],int i)
{
    while(i >= 0)
    {
        a[i] = tolower(a[i]);
        i--;
    }
}

void Lower_for_name(Employee Info[],int max)
{
    int i,j;
    while(max >= 0)
    {
        strcpy(Info[max].Last_nm,Info[max].Last);
        strcpy(Info[max].First_nm,Info[max].First);
        for(i = 0,j = 0; i < strlen(Info[max].Last), j < strlen(Info[max].First); i++,j++)
        {
            Info[max].First_nm[j] = tolower(Info[max].First[j]);
            Info[max].Last_nm[i] = tolower(Info[max].Last[i]);  
        }
        max--;
    }
}

void Input(Employee Info[],int *max)
{
    FILE *in,*out;
    in = fopen("Employee.csv","r");
    out = fopen("check.txt","w");
    char Buffer[1024];
    fgets(Buffer,sizeof(Buffer),in);
    int i = 0;
    while(fgets(Buffer,sizeof(Buffer),in))
    {
        char * token = strtok(Buffer,",");
        strcpy(Info[i].ID,token);
        token = strtok(NULL,",");
        strcpy(Info[i].First,token);
        token = strtok(NULL,",");
        strcpy(Info[i].Last,token);
        token = strtok(NULL,",");
        strcpy(Info[i].Gender,token);
        token = strtok(NULL,",");
        strcpy(Info[i].Birth,token);
        token = strtok(NULL,",");
        strcpy(Info[i].Dep,token);
        token = strtok(NULL,",\n");
        strcpy(Info[i].Country,token);
        i++;
    }
    *max = i;
    fclose(in);
}

void Count(Employee Info[],int max,char find[])
{
    FILE *out;
    out = fopen("result.csv","w+");
    int i,count = 0;
    for(i = 0; i < max; i++)
    {
        if(strcmp(Info[i].Dep,find) == 0)
            count++;
    }
    fprintf(out,"%d",count);
    fclose(out);
}

void Ma_Fe(Employee Info[],int max,char find[])
{
    FILE *out;
    out = fopen("result.csv","w+");
    int i;
    for(i = 0; i <= max; i++)
    {
        if(Info[i].Gender[1] == find[1])
            fprintf(out,"%s,%s,%s,%s,%s,%s,%s\n",Info[i].ID,Info[i].First,Info[i].Last,Info[i].Gender,Info[i].Birth,Info[i].Dep,Info[i].Country);
    }
    fclose(out);
}

void Report(Employee Info[],double find)
{
    FILE *in,*out;
    in = fopen("Progress.csv","r");
    out = fopen("result.csv","w+");
    char Buffer[1024];
    int i = 0,j;
    double Pro;
    fgets(Buffer,sizeof(Buffer),in);
    while(fgets(Buffer,sizeof(Buffer),in))
    {
        char *token = strtok(Buffer,",");
        strcpy(Info[i].ID_,token);
        token = strtok(NULL,",");
        token = strtok(NULL,",\n");
        Pro = atof(token);
        if(Pro == find) 
        {
            strcpy(Info[i].check,Info[i].ID_);
            j = 0;
            while(j < i)
            {
                if(strcmp(Info[j].check,Info[i].check) == 0)
                    break;
                j++;
            }
            if(j == i)
            {
                i++;
                fprintf(out,"%s\n",Info[j].ID_);
            }
        }
    }
    fclose(in);
    fclose(out);
}

void Average(Employee Info[],char find[])
{
    FILE *in,*out;
    in = fopen("Progress.csv","r");
    out = fopen("result.csv","w+");
    char Buffer[1024];
    double Pro;
    double count = 0, ave = 0;
    fgets(Buffer,sizeof(Buffer),in);
    while(fgets(Buffer,sizeof(Buffer),in))
    {
        char *token = strtok(Buffer,",");
        token = strtok(NULL,",");
        if(strcmp(token,find) == 0)
        {
            token = strtok(NULL,", ");
            Pro = atof(token);
            ave += Pro;
            count++;
        }
    }
    if(count != 0)
        fprintf(out,"%.3f",(double)(ave/count));
    /*
    else
    {
        FILE * wrong;
        wrong = fopen("check.txt","w");
        fprintf(wrong,"wrong syntax");
        fclose(wrong);
    }
    */
    fclose(in);
    fclose(out);
}

void Sort(Employee Info[],int max,char find[])
{
    FILE *out;
    out = fopen("result.csv","w+");
    Lower_for_name(Info,max);
    Quicksort(0,max,Info);
    int i;
    if(find == "asc")
    {
        for(i = 0; i <= max; i++)
            fprintf(out,"%s,%s,%s,%s,%s,%s,%s\n",Info[i].ID,Info[i].First,Info[i].Last,Info[i].Gender,Info[i].Birth,Info[i].Dep,Info[i].Country);
    }
    else
    {
        for(i = max; i >= 0; i--)
        {
            int end = i;
            while(strcmp(Info[i].Last,Info[i - 1].Last) == 0)
                i--;
            int j;
            for(j = i; j < end; j ++)
                fprintf(out,"%s,%s,%s,%s,%s,%s,%s\n",Info[j].ID,Info[j].First,Info[j].Last,Info[j].Gender,Info[j].Birth,Info[j].Dep,Info[j].Country);
        }
    }
    fclose(out);
}

void swap(char a[],char b[])
{
    char c[100];
    strcpy(c,a);
    strcpy(a,b);
    strcpy(b,c);
}

void Quicksort(int l, int r,Employee Info[])
{
    
    int left = l, right = r;
    int mid = (l + r) / 2;
    while(l < r)
    {
        while(l < mid)
        {
            if(strcmp(Info[l].Last_nm,Info[mid].Last_nm) > 0)
                break;
            else 
            {
                if(strcmp(Info[l].Last_nm,Info[mid].Last_nm) == 0)
                {
                    if(strcmp(Info[l].First_nm,Info[mid].First_nm) > 0)
                        break;
                }
            }
            
            l++;
        }
        while(r > mid)
        {
            if(strcmp(Info[mid].Last_nm,Info[r].Last_nm) > 0)
                break;
            else 
            {
                if(strcmp(Info[mid].Last_nm,Info[r].Last_nm) == 0)
                {
                    if(strcmp(Info[mid].First_nm,Info[r].First_nm) > 0)
                        break;
                }  
            }
            r--;
        }
        if(r != l)
        {
            swap(Info[l].First_nm,Info[r].First_nm);
            swap(Info[l].Last_nm,Info[r].Last_nm);
            //printf("%d,%s,%s,%s,%s,%d,%s\n",Info[l].ID,Info[l].First,Info[l].Last,Info[l].Gender,Info[l].Birth,Info[l].Dep,Info[l].Country);
            swap(Info[l].ID,Info[r].ID);
            swap(Info[l].Dep,Info[r].Dep);
            swap(Info[l].First,Info[r].First);
            swap(Info[l].Last,Info[r].Last);
            swap(Info[l].Gender,Info[r].Gender);
            swap(Info[l].Birth,Info[r].Birth);
            swap(Info[l].Country,Info[r].Country);
            //printf("%d,%s,%s,%s,%s,%d,%s\n\n",Info[l].ID,Info[l].First,Info[l].Last,Info[l].Gender,Info[l].Birth,Info[l].Dep,Info[l].Country);
            if (l == mid)
                mid = r;
            else
            {
                if(r == mid)
                    mid = l;
            }
        }
    }
    if(mid - 1 > left)
        Quicksort(left,mid - 1,Info);
    if(mid + 1 < right)
        Quicksort(mid + 1,right,Info);
}

void Nation(Employee Info[],int max,char find[])
{
    FILE *out;
    out = fopen("result.csv","w+");
    int i, count = 0;
    for(i = 0; i < max; i++)
    {
        if(strcmp(Info[i].Country,find) == 0)
            fprintf(out,"%s,%s,%s,%s,%s,%s,%s\n",Info[i].ID,Info[i].First,Info[i].Last,Info[i].Gender,Info[i].Birth,Info[i].Dep,Info[i].Country);
    }
    fclose(out);
}