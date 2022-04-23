#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct 
{
    char cotso1[10];
    char cotso2[10];
    char cotso3[10];
    char cotso4[10];
}proj_t;
typedef struct
{
    char cot1[50];
    char cot2[50];
    char cot3[50];
    char cot4[50];
    char cot5[50];
    char cot6[50];
    char cot7[50];
    char cot8[50];
}em_t;
typedef struct
{
    char coot1[50];
    char coot2[50];
    char coot3[50];
}pro_t;
pro_t val1[1600];
em_t val[1600];
void hamcount(em_t val[],int a,int a1);
void hammale(em_t val[],int a);
void hamfemale(em_t val[],int a);
void hamreport(pro_t val1[],char f[],int j);
void hamcountry(em_t val[],char co[],int a);
void hamaverage(pro_t val1[],int x,int j);
void hamsortasc(em_t val[],int u);
void hamsortdesc(em_t val[],int u);
int kiemtra(char k[]);
int che(char f[]);
int maxave(pro_t val1[],int j);
int minave(pro_t val1[],int j);
void swap(em_t *a,em_t *b);
void filecheck();
void fileresult();
void hamstrlwr(char k[]);
void hamstrupr(char k[]);
void chere();
void checheck();
int space(char k[]);
int cheis(char f[]);
int main()
{
    FILE *file1;
    FILE *file2;
    FILE *file3;
    FILE *file4;
    file1=fopen("Employee.csv","r");
    file2=fopen("Progress.csv","r");
    file3=fopen("result.csv","w");
    file4=fopen("check.txt","w");
    if(!file1)
    {
        printf("Can not open file \n");
        return 0;
    }
    if(!file2)
    {
        printf("Can not open file \n");
        return 0;
    }
    char buffer[1600];
    int row=0;
    int column=0;
    int i=0;
    while(fgets(buffer,1600,file1)!=NULL)
    {
        column=0;
        row++;
        if(row==1)
        {
            continue;
        }
        char *gt=strtok(buffer,",");
        while(gt)
        {
            if(column==0)
            {
                strcpy(val[i].cot1,gt);
            }
            if(column==1)
            {
                strcpy(val[i].cot2,gt);
            }
            if(column==2)
            {
                strcpy(val[i].cot3,gt);
            }
            if(column==3)
            {
                strcpy(val[i].cot4,gt);
            }
            if(column==4)
            {
                strcpy(val[i].cot5,gt);
            }
            if(column==5)
            {
                strcpy(val[i].cot6,gt);
            }
            if(column==6)
            {
                strcpy(val[i].cot7,gt);
            }
            gt=strtok(NULL,",");
            column++;
        }
        i++;
    }
    char line[1600];
    int cot=0;
    int dong=0;

    int j=0;
    while(fgets(line,1600,file2)!=NULL)
    {
        cot=0;
        dong++;
        if(dong==1)
        {
            continue;
        }
        char *gt2=strtok(line,",");
        while(gt2)
        {
            if(cot==0){
                strcpy(val1[j].coot1,gt2);
            }
            if(cot==1){
                strcpy(val1[j].coot2,gt2);
            }
            if(cot==2){
                strcpy(val1[j].coot3,gt2);
            }
            gt2=strtok(NULL,",");
            cot++;
        }
        j++;
    }
    char bandau[30];
    char lenht[15];
    char lenhs[15];
 	int ch1=0;
 	char ch[]="wrong syntax";
    gets(bandau);
    if(kiemtra(bandau)!=2 || space(bandau)==1)
    {
		fprintf(file4,"%s",ch);
    }
    else
    {
        char *n=strtok(bandau," ");
        strcpy(lenht,n);
        n=strtok(NULL," ");  
        strcpy(lenhs,n); 
        int a;
        char re[5];
        int ave;
        char b1[]="count";
        char b2[]="list";
        char b3[]="male";
        char b4[]="female";
        char b5[]="report";
        char b6[]="country";
        char b7[]="sort";
        char b8[]="asc";
        char b9[]="desc";
        char b10[]="average";
        hamstrlwr(lenht);
        hamstrlwr(lenhs);
        hamstrlwr(b1);
        hamstrlwr(b2);
        hamstrlwr(b3);
        hamstrlwr(b4);
        hamstrlwr(b5);
        hamstrlwr(b6);
        hamstrlwr(b7);
        hamstrlwr(b8);
        hamstrlwr(b9);
        hamstrlwr(b10);
        //count
        if(strcmp(lenht,b1)==0)
        {
            if(che(lenhs)==0)
            {
				fprintf(file3,"%d",ch1);
            }
            else
            {
                a=atoi(lenhs);
                hamcount(val,a,i);
            }
        }
        //male and female
        else if(strcmp(lenht,b2)==0)
        {
            if(strcmp(lenhs,b3)==0)
            {
                hammale(val,i);
            }
            else if (strcmp(lenhs,b4)==0)
            {
                hamfemale(val,i);
            }
            else
            {
				fprintf(file4,"%s",ch);
            }
        }
        //report
        else if(strcmp(lenht,b5)==0)
        {
            strcpy(re,lenhs);
            if(cheis(re)==0)
            {
				fprintf(file4,"%s",ch);
            }
            else
            {
                if(atof(re)>1||atof(re)<0)
                {
					fprintf(file4,"%s",ch);
                }
                else
                {
                    hamreport(val1,re,j);
                }
            }
        }
        //country
        else if (strcmp(lenht,b6)==0)
        {
            if(che(lenhs)==1)
            {
                fprintf(file4,"%s",ch);
            }  
            else 
            { 
                char na[10];
                strcpy(na,lenhs);
                hamcountry(val,na,i);
            }
        }
        //average
        else if(strcmp(lenht,b10)==0)
        {
            if(che(lenhs)==0)
            {
                fprintf(file4,"%s",ch);
            }
            else 
            {
                ave=atoi(lenhs);
                if(ave<=maxave(val1,j) && ave>=minave(val1,j))
                {  
                    hamaverage(val1,ave,j);
                }
                else 
                {
				    fprintf(file3,"%d",ch1);
                }
            }
        }
        //sort
        else if (strcmp(lenht,b7)==0)
        {
            if (strcmp(lenhs,b8)==0)
            {
                hamsortasc(val,i);
            }
            else if (strcmp(lenhs,b9)==0)
            {
                hamsortdesc(val,i);
            }
            else
            {
				fprintf(file4,"%s",ch);
            }        
        }
        else
        {
			fprintf(file4,"%s",ch);
            return 0;
        }
    }
    fclose(file1);
    fclose(file2);
    fclose(file3);
    fclose(file4);
    return 0;
}
int che(char f2[])
{
    int i;
    for(i=0;i<strlen(f2);i++)
    {
        if(f2[i]>=49&&f2[i]<=57)
        {
            return 1;
        }
    }
    return 0;
}
int cheis(char f[])
{
    int i;
    for(i=0;i<strlen(f);i++)
    {
        if((f[i]>=97&&f[i]<=122)||(f[i]>=65&&f[i]<=90))
        {
            return 0;
        }
    }
    return 1;  
}
int kiemtra(char k[]){
    int c=0,i,a=10,b,d;
    if(k[0]!=' ') 
    {
        c++;
    }
    for(i=0;i<strlen(k)-1;i++)
    {
        if(k[i]==' '&& k[i+1]!=' ') 
        {
            c++;
        }
    }
    for(b=0;b<a;b++)
    {
        d++;
    }
    return c;
}
int space(char k[])
{
    int i;
    for(i=0;i<strlen(k)-1;i++)
    {
        if(k[i]==' ')
        {
            if(k[i+1]==' ')
            {
                return 1;
            }
        }
    }
    return 0;
}
void hamcount(em_t val[],int a,int a1)
{
    FILE *f;
    f=fopen("result.csv","w");
    int i,b;
    int j=0;
    for(i=0;i<a1;i++)
    {
        b=atoi(val[i].cot6);
        if(b==a)
        {
            j++;
        }
    }
    fprintf(f,"%d",j);
    fclose(f);
}
void swap(em_t *a,em_t *b)
{
    em_t temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void hammale(em_t val[],int a)
{
    int i;
    FILE *f;
    f=fopen("result.csv","w");
    char h[8]="Male";
    for(i=0;i<a;i++)
    {
        if(strcmp(val[i].cot4,h)==0)
        {
            fprintf(f,"%s,%s,%s,%s,%s,%s,%s",val[i].cot1,val[i].cot2,val[i].cot3,val[i].cot4,val[i].cot5,val[i].cot6,val[i].cot7 );
        }
    }
    fclose(f);
}
void hamstrupr(char k[])
{
    int i;
    for(i=0; i<strlen(k); i++){
        if(k[i]>=97 && k[i]<=122){
            k[i]=k[i]-32;
        }
    }
}
void hamfemale(em_t val[],int a)
{
    int i;
    FILE *f;
    f=fopen("result.csv","w");
    char h[8]="Female";
    for(i=0;i<a;i++)
    {
        if(strcmp(val[i].cot4,h)==0)
        {
            fprintf(f,"%s,%s,%s,%s,%s,%s,%s",val[i].cot1,val[i].cot2,val[i].cot3,val[i].cot4,val[i].cot5,val[i].cot6,val[i].cot7 );
        }
    }
    fclose(f);
}
void fileresult()
{
    FILE *file3;
    file3=fopen("result.csv","w");
    int ch1=0;
    fprintf(file3,"%d",ch1);
    fclose(file3);
}
void hamreport(pro_t val1[],char f[],int j)
{
    FILE *file;
    file=fopen("result.csv","w");
    int i,o;
    int dodai=0;
    int u,l,y,a=0,b=0,c=0,d,e=10,g=0;
    int pi=0,ui=10,yi;
    int len[630];
    for(i=0;i<j;i++)
    {
        c=c*1;
        if(atof(val1[i].coot3)==atof(f))
        {
            len[dodai]=atoi(val1[i].coot1);
            dodai++;
        }
    }
    for(yi=0;yi<ui;yi++)
    {
        pi++;
    }
    for(l=0;l<=dodai;l++)
    {
        a=a*1;
    	for(u=dodai;u>=0;u--)
    	{
            b=b*1;
    		if(l!=u&&len[l]==len[u])
    		{
    			for(o=u;o<=dodai;o++)
    			{
    				len[o]=len[o+1];
				}	
                    dodai--;
                    u--;	
			}
		}
	}
    for(d=0;d<e;d++)
    {
        g++;
    }
	for(y=0;y<dodai;y++)
	{	
        fprintf(file,"%d\n",len[y]);   
    }
    fclose(file);
}
void chere()
{
    FILE *file;
    file=fopen("result.csv","w");
    fclose(file);
}
void checheck()
{
    FILE *file;
    file=fopen("check.txt","w");
    fclose(file);
}
void hamcountry(em_t val[],char co[],int a)
{
    FILE *f;
    f=fopen("result.csv","w");
    int i;
    char k0[10];
    for (i = 0; i < a; i++)
    {
        strncpy(k0,val[i].cot7,5);
        hamstrlwr(co);
        hamstrlwr(k0);        
        if(strncmp(k0,co,3)==0)
        {
            fprintf(f,"%s,%s,%s,%s,%s,%s,%s",val[i].cot1,val[i].cot2,val[i].cot3,val[i].cot4,val[i].cot5,val[i].cot6,val[i].cot7 );
        }
    }
    fclose(f);
}
void filecheck()
{
    FILE *check;
    check=fopen("check.txt","w");
    char ch[20] = "wrong syntax";    
    fprintf(check,"%s",ch);
    fclose(check);
}
void hamaverage(pro_t val1[],int x,int j)
{
    FILE *f;
    f=fopen("result.csv","w");
    int i,b;
    float tong=0,c=0,ketqua;
    for(i=0;i<j;i++)
    {
        b=atoi(val1[i].coot2);
        if(x==b){
            c++;
            tong+=atof(val1[i].coot3);
        }
    }
    ketqua=tong/c;
    fprintf(f,"%0.3f",ketqua);
    fclose(f);
}
int maxave(pro_t val1[],int j)
{
    int i,max=atoi(val1[0].coot2);
    for(i=0;i<j;i++)
    {
        if(atoi(val1[i].coot2)>max)
        {
            max=atoi(val1[i].coot2);
        }
    }
    return max;
}
void hamsortasc(em_t val[],int u)
{
    FILE *file;
    file=fopen("result.csv","w");
    int i,j;
    for(i=0;i<u;i++)
    {
        for(j=i+1;j<u;j++)
        {
            if(strcmp(val[i].cot3,val[j].cot3)>0)
            {
                swap(&val[i],&val[j]);
            }
            if(strcmp(val[i].cot3,val[j].cot3)==0)
            {
                if(strcmp(val[i].cot2,val[j].cot2)>0)
                {
                    swap(&val[i],&val[j]);  
                }
            }
        }
    }
    for(i=0;i<u;i++)
    {
        fprintf(file,"%s,%s,%s,%s,%s,%s,%s",val[i].cot1,val[i].cot2,val[i].cot3,val[i].cot4,val[i].cot5,val[i].cot6,val[i].cot7 );
    }
    fclose(file);  
}
int minave(pro_t val1[],int j)
{
    int i,min=atoi(val1[0].coot2);
    for(i=0;i<j;i++)
    {
        if(atoi(val1[i].coot2)<min)
        {
            min=atoi(val1[i].coot2);
        }
    }
    return min;
}
void hamsortdesc(em_t val[],int u)
{
    FILE *file;
    file=fopen("result.csv","w");
    int i,j;
    for(i=0;i<u;i++)
    {
        for(j=i+1;j<u;j++)
        {
            if(strcmp(val[i].cot3,val[j].cot3)<0)
            {
                swap(&val[i],&val[j]);
            }
            if(strcmp(val[i].cot3,val[j].cot3)==0)
            {
                if(strcmp(val[i].cot2,val[j].cot2)>0)
                {
                    swap(&val[i],&val[j]);  
                }
            }
        }
    }
    for(i=0;i<u;i++)
    {
        fprintf(file,"%s,%s,%s,%s,%s,%s,%s",val[i].cot1,val[i].cot2,val[i].cot3,val[i].cot4,val[i].cot5,val[i].cot6,val[i].cot7 );
    }
    fclose(file);  
}
void hamstrlwr(char k[]){
    int i;
    for(i=0; i<strlen(k); i++){
        if(k[i]>=65 && k[i]<=90){
            k[i]=k[i]+32;
        }
    }
}
