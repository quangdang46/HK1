#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
typedef struct
{
	char c1[20];
	char c2[20];
	char c3[20];
	char c4[20];
	char c5[20];
	char c6[20];
	char c7[20];
}employ;

typedef struct
{
	char cl1[25];
	char cl2[25];
	char cl3[25];
}prog;

typedef struct
{
	char clu1[15];
	char clu2[15];
	char clu3[15];
}proje;
char s[500], l[630], a[15], b[15], c[15];
employ e[3000];
prog p[3000];
int count(employ e[], char n[], int res);
void listmale(employ e[], char n[], int res);
void listfemale(employ e[], char n[], int res);
void reportn(prog p[], char n[], int res);
float average(prog p[], char n[], int res);
void asc(employ e[],int res);
int sel(char str[]);
void desc(employ e[],int res);
int pn(int i);
void country1(employ e[], char n[], int res);
int check(char n[]);
int first(char n[], char a[]);
int huan(char n[], int k);
void kenzo(char n[]);
int sakura(char i[]);

int main()
{
	FILE *in1;
	FILE *in2;
	FILE *out;
	FILE *out2;
	in1 = fopen("Employee.csv","r");
	in2 = fopen("Progress.csv","r");
	out = fopen("result.csv","w");
	out2 = fopen("check.txt","w");
	if(!in1)
	{
		printf("Can not find the file");
		return 0;
	}
	if(!in2)
	{
		printf("Can not find the file");
		return 0;
	}
	int nc=0, nc1=0, nr=0, nr1 =0, i=0, j=0;
	char *m;
	char *z;
	char *w;
	while(fgets(s, 500, in1)!= NULL)
	{
		nc = 0;
		nr++;
		if(nr==1)
		{
			continue;
		}
		m=strtok(s,",");
		while(m)
		{
			if(nc==0)
			{
				strcpy(e[i].c1,m);
			}
			if(nc==1)
			{
				strcpy(e[i].c2,m);
			}
			if(nc==2)
			{
				strcpy(e[i].c3,m);
			}
			if(nc==3)
			{
				strcpy(e[i].c4,m);
			}
			if(nc==4)
			{
				strcpy(e[i].c5,m);
			}
			if(nc==5)
			{
				strcpy(e[i].c6,m);
			}
			if(nc==6)
			{
				strcpy(e[i].c7,m);
			}
			m = strtok(NULL,",");
			nc++;
		}
		i++;
	}
	while(fgets(l, 630, in2)!= NULL)
	{
		nc1=0;
		nr1++;
		if(nr1==1)
		{
			continue;
		}
		z=strtok(l, ",");
		while(z)
		{
			if(nc1==0)
			{
				strcpy(p[j].cl1,z);
			}
			if(nc1==1)
			{
				strcpy(p[j].cl2,z);
			}
			if(nc1==2)
			{
				strcpy(p[j].cl3,z);
			}
			z = strtok(NULL,",");
			nc1++;
		}
		j++;
	}
	fgets(a, 15, stdin);
	if(check(a) == 1)
	{	
		char *t;
		t=strtok(a," ");
		strcpy(b,t);
		while(t!= NULL)
		{
			t=strtok(NULL," ");
			if(t!= NULL)
			{
				strcpy(c,t);
			}
		}
		if(first(b,"count")==1 || first(b,"list")==1 || first(b,"report")==1 || first(b,"average")==1 || first(b,"sort")==1 || first(b,"country")==1)
		{
			if(first(b,"count")==1)
			{
				FILE *out;
				out = fopen("result.csv", "w");
				fprintf(out, "%d\n", count(e,c,i));
				fclose(out);
			}
			else if(first(b,"list")==1)
			{
				c[strlen(c)-1] = '\0';
				if(first(c,"male")==1)
				{
					listmale(e,c,i);
				}
				if(first(c,"female")==1)
				{
					listfemale(e,c,i);
				}
				if(first("male",c)==0 && first("female",c)==0)
				{
					FILE *out2;
					out2 = fopen("check.txt","w");
					fprintf(out2, "%s", "wrong syntax");
					fclose(out2);
				}
			
			}
			else if(first(b, "pn")==1)
			{
				int s =0, i,j=10;
				int k[100];
				for(i=1; i<=j; i++)
				{
					if(i%2==0)
					{
						s = s + - + k[i];
					}
				}
			}
			else if(first(b,"report")==1)
			{
				int i;
				for(i=0;i<strlen(c); i++)
				{
					if(c[i]== '.')
					{
						continue;
					}
					if(isalpha(c[i]) || ispunct(c[i]))
					{
						FILE *out2;
						out2 = fopen("check.txt","w");
						fprintf(out2, "%s","wrong syntax");
						fclose(out2);
						return 0;
					}
				}
				reportn(p,c,j);
			}
			else if(first(b,"kenzo")==1)
			{
				int h, sum=0;
				for(h=0;h<200; h++)
				{
					sum++;
					if(sum=200)
					{
						kenzo("kenzo");
					}
					else
					{
						printf("%d",sum);
					}
				}
			}
			else if(first(b,"average")==1)
			{
				int i;
				for(i=0; i<strlen(c); i++)
				{
					if(isalpha(c[i]) || ispunct(c[i]))
					{
						FILE *out2;
						out2 = fopen("check.txt","w");
						fprintf(out2,"%s","wrong syntax");
						fclose(out2);
						return 0;
					}
				}
				FILE *out;
				out = fopen("result.csv","w");
				fprintf(out, "%.3f", average(p,c,j));
				fclose(out);
			}
			else if(first(b,"sort")==1)
			{
				c[strlen(c)-1] = '\0';
				if(first(c,"asc")==1)
				{
					asc(e,i);
				}
				if(first(c,"desc")==1)
				{
					desc(e,i);
				}
				if(first(c,"asc")==0 && first(c,"desc")==0)
				{
					FILE *out2;
					out2 = fopen("check.txt","w");
					fprintf(out2, "%s", "wrong syntax");
					fclose(out2);
				}
			}
			else if(first(b,"sakura")==1)
			{
				int i=10;
				char s[100] = "nyckenzo";
				while(i>0)
				{
					printf("%d", sakura("bestpaine"));
					if(i=3)
					{
						printf("%s",s);
					}
				}
			}
				
			else if(first(b,"galaxy")==1)
			{
				int i;
				char n[100] = "HPL";
				for(i=0; i<500; i++)
				{
					huan(n,7);
				}
			}
			else if(first(b,"sel")==1)
			{
				int l,k, temp;
				float a,b,c;
				for(l=0; l<450;l++)
				{
					k= k+2;
					if(k!=0)
					{
						c=a;
						a=b;
						b=a;
					}
				}
			}
			else if(first(b,"country")==1)
			{
				int h;
				for(h=0; h<strlen(c);h++)
				{
					if(isdigit(c[h]))
					{
						FILE *out2;
						out2 = fopen("check.txt","w");
						fprintf(out2,"%s","wrong syntax");
						fclose(out2);
						return 0;
					}
				}
				country1(e,c,i);
			}
		}
		else
		{
			FILE *out2;
			out2 = fopen("check.txt", "w");
			fprintf(out2, "%s", "wrong syntax");
		}
	}
	else
	{
		FILE *out2;
		out2 = fopen("check.txt","w");
		fprintf(out2, "%s", "wrong syntax");
		fclose(out2);
	}
	fclose(in1);
	fclose(in2);
	fclose(out);
	fclose(out2);
	return 0;
}
int count(employ e[], char n[], int res)
{
	int h;
	int sum = 0;
	if(atoi(n)==0)
	{
		int c=0;
		return c;
	}
	else
	{
		for(h=0; h< res; h++)
		{
			if(atoi(e[h].c6)==atoi(n))
			{
				sum = sum+1;
			}
		}
		return sum;
	}
}
void listmale(employ e[], char n[], int res)
{
	FILE *in1;
	in1 = fopen("Employee.csv","r");
	FILE *out;
	out = fopen("result.csv", "w");
	int h;
	for(h=0; h<res; h++)
	{
		if(first(e[h].c4,n)==1)
		{
			fprintf(out,"%s,", e[h].c1);
			fprintf(out,"%s,", e[h].c2);
			fprintf(out,"%s,", e[h].c3);
			fprintf(out,"%s,", e[h].c4);
			fprintf(out,"%s,", e[h].c5);
			fprintf(out,"%s,", e[h].c6);
			fprintf(out,"%s", e[h].c7);
		}
		if(first(e[h].c4,n)==0)
		{
			continue;
		}
	}
	fclose(in1);
	fclose(out);
}
void listfemale(employ e[], char n[], int res)
{
	FILE *in1;
	in1 = fopen("Employee.csv","r");
	FILE *out;
	out = fopen("result.csv", "w");
	int h;
	for(h=0; h< res; h++)
	{
		if(first(e[h].c4,n)==1)
		{
			fprintf(out,"%s,", e[h].c1);
			fprintf(out,"%s,", e[h].c2);
			fprintf(out,"%s,", e[h].c3);
			fprintf(out,"%s,", e[h].c4);
			fprintf(out,"%s,", e[h].c5);
			fprintf(out,"%s,", e[h].c6);
			fprintf(out,"%s", e[h].c7);
		}
		if(first(e[h].c4,n)==0)
		{
			continue;
		}
	}
	fclose(in1);
	fclose(out);
}
void reportn(prog p[], char n[], int res)
{
	if( atof(n)>=0 && atof(n)<=1)
	{
		int h,i,k,temp,j, b=0;
		float a[630];
		FILE *out;
		out = fopen("result.csv","w");
		for(h=0; h<res; h++)
		{
			k =0;
			if(atof(p[h].cl3)== atof(n))
			{	
				for(j=0; j<res;j++)
				{
					if(a[j] == atof(p[h].cl1))
					{
						k=1;
						break;
					}
					else
					{
						k=0;
					}
				}
				if(k==0)
				{
					a[b] = atof(p[h].cl1);
					b++;
					fprintf(out, "%s\n", p[h].cl1);
				}
			}
		}
		fclose(out);
	}
	else
	{
		FILE *out2;
		out2 = fopen("check.txt","w");
		fprintf(out2, "%s", "wrong syntax");
		fclose(out2);
	}
}
float average(prog p[], char n[], int res)
{
	int h,h1;
	float sum=0, number=0;
	float t;
	int k = atoi(n);
	for(h=0; h<res; h++)
	{
		int a = atoi(p[h].cl2);
		if(k == a)
		{
			sum = sum+atof(p[h].cl3);
		}
	}
	for(h1=0; h1<res; h1++)
	{
		int b = atoi(p[h1].cl2);
		if(k == b)
		{
			number++;
		}
	}
	if(number==0)
	{
		return number;
	}
	if(number != 0)
	{
		t = sum/number;
		return t;
	}
}
void asc(employ e[],int res)
{
	FILE *out;
	out = fopen("result.csv","w");
	int i,j,k, h1;
	char h[30];
	for(i=0; i<res; i++)
	{
		k = i;
		for(j=i+1; j<res; j++)
		{
			if(strcmp(e[k].c3,e[j].c3)>0)
			{
				k = j;
			}
			if(strcmp(e[k].c3,e[j].c3)==0)
			{
				if(strcmp(e[k].c2, e[j].c2)>0)
				{
					k = j;
				}
			}
		}
		employ tmp=e[i];
		e[i]=e[k];
		e[k]=tmp;
	}
	for(h1=0; h1<res; h1++)
	{
		fprintf(out,"%s,", e[h1].c1);
		fprintf(out,"%s,", e[h1].c2);
		fprintf(out,"%s,", e[h1].c3);
		fprintf(out,"%s,", e[h1].c4);
		fprintf(out,"%s,", e[h1].c5);
		fprintf(out,"%s,", e[h1].c6);
		fprintf(out,"%s", e[h1].c7);
	}
	fclose(out);
}
void desc(employ e[],int res)
{
	FILE *out;
	out = fopen("result.csv","w");
	int i,j,k,h1;
	char h[30];
	for(i=0; i<res; i++)
	{
		k = i;
		for(j=i+1; j<res; j++)
		{
			if(strcmp(e[k].c3,e[j].c3)<0)
			{
				k = j;
			}
			if(strcmp(e[k].c3,e[j].c3)==0)
			{
				if(strcmp(e[k].c2, e[j].c2)>0)
				{
					k = j;
				}
			}
		}
		employ tmp=e[i];
		e[i]=e[k];
		e[k]=tmp;
	}
	for(h1=0; h1<res; h1++)
	{
		fprintf(out,"%s,", e[h1].c1);
		fprintf(out,"%s,", e[h1].c2);
		fprintf(out,"%s,", e[h1].c3);
		fprintf(out,"%s,", e[h1].c4);
		fprintf(out,"%s,", e[h1].c5);
		fprintf(out,"%s,", e[h1].c6);
		fprintf(out,"%s", e[h1].c7);
	}
	fclose(out);
}
void country1(employ e[], char n[], int res)
{
	FILE *out;
	out = fopen("result.csv", "w");
	int h;
	for(h=0; h<res; h++)
	{
		if(first(n,e[h].c7)==1)
		{
			fprintf(out,"%s,", e[h].c1);
			fprintf(out,"%s,", e[h].c2);
			fprintf(out,"%s,", e[h].c3);
			fprintf(out,"%s,", e[h].c4);
			fprintf(out,"%s,", e[h].c5);
			fprintf(out,"%s,", e[h].c6);
			fprintf(out,"%s", e[h].c7);
		}
	}
	fclose(out);
}
int check(char n[])
{
	int h;
	int sum=0;
	for(h=0; h<strlen(n); h++)
	{
		if(n[h] == ' ')
		{
			sum = sum+1;
		}
	}
	return sum;
}
int sel(char str[])
{
	int i;
	int check = 1;
	for(i=0; i< strlen(str)/2; i++)
	{
		if(str[i] != str[strlen(str)-i-1])
		{
			check = 0;
			break;
		}
	}
	if(check == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int pn(int i)
{
	int a,b;
	if(i == 2)
	{
		return 1;
	}
	for(a=2; a<i; a++)
	{
		b = i%a;
		if(b == 0)
		{
			break;
		}
	}
	if(b!=0)
	{
		return 0;
	}
}
int miyu(int n)
{
	int i;
	while(n>0)
	{
		i = n%10;
		n/=10;
	}
	return i;
}
int aya( int n)
{
	int m;
	m=n%10;
	return m;
}
int sasa(int n)
{
	int c=0;
	while(n>0)
	{
		n=n/10;
		c++;
	}
	return c;
}
int ruby(int n)
{
	int a = 45, b = 55, c = 65, sum;
	int d = pow(10, (c-1));
	sum = b*d+ n%d-b+a;
	return sum;
}
void lilihana(char a[])
{
	char e[40];
	int arr[30];
	int num, key, k = 0, len = 0;
	printf("Enter a filename: ");
	scanf("%s", a);
	scanf("%s", e);	
	FILE* rfile;
	rfile = fopen(a, "r");
	FILE *out2;
	out2 = fopen("result.csv", "w");
	if (rfile == NULL) {
		printf("Not found the file !!!");
	}
	else {
		printf("Successfull: %s\n", a);
		printf("Choose: \n");
		printf("1 --> Linear search\n");
		printf("2 --> Binary search\n");
		scanf("%d", &num);
		if (num < 1 || num > 2) {
			fclose(rfile);
			printf("Error input!");
		}
		else {
			printf("Enter a value to search for:");
			scanf("%d", &key);
			int i;
			for (i = 0; i < 30; i++) {
				int ret = fscanf(rfile, "%d", &arr[i]);
				if (ret == 1)
				{
					len++;
				}
				else if (ret == -1)
				{
					break;
				}
			}
			if (num == 1) {
				for (i = 0; i < len; i++) {
					if (key == arr[i]) {
						printf("Number %d at position %d\n", key, i + 1);
						k++;
					}
				}
				if (k == 0) {
					printf("Not found");
				}
			}
			if (num == 2) {
				int j, temp, flag = 0;
				for (i = 0; i < len; i++) {
					for (j = i + 1; j < len; j++) {
						if (arr[i] > arr[j]) {
							temp = arr[i];
							arr[i] = arr[j];
							arr[j] = temp;
						}
					}
				}
				printf("The array after sort:\n");
				for (i = 0; i < len; i++) {
					printf("%d\t", arr[i]);
				}
				printf("\n");
				int cuoi = len - 1;
				int dau = 0, h;
				int giua;
				while (dau <= cuoi) {
					giua = (dau + cuoi) / 2;
					if (arr[giua] == key) {
						printf("Number %d at position %d\n", key, giua + 1);
						for (h = giua + 1; h <= cuoi; h++) {
							if (arr[h] == key) {
								printf("Number %d at position %d\n", key, h + 1);
							}
							else {
								break;
							}
						}
						for (h = giua - 1; h >= dau; h--) {
							if (arr[h] == key) {
								printf("Number %d at position %d\n", key, h + 1);
							}
							else {
								break;
							}
						}
						flag++;
						break;
					}
					if (arr[giua] > key) {
						cuoi = giua - 1;
					}
					if (arr[giua] < key) {
						dau = giua + 1;
					}
				}
				if (flag == 0) {
					printf("Not found");
				}
			}
			fclose(rfile);
		}
	}
}
int first(char n[], char a[])
{
	int h;
	int b;
	for(h=0; h<strlen(n); h++)
	{
		if(tolower(n[h]) == tolower(a[h]))
		{
			b=1;
		}
		if(tolower(n[h]) != tolower(a[h]))
		{
			b=0;
			break;
		}
	}
	return b;
}

int huan(char n[], int k)
{
	int i=10;
	for(i=0;i<100; i++)
	{
		if(isupper(n[i]))
		{
			tolower(n[i]);
			k++;
		}
		if(islower(n[i]))
		{
			return 0;
		}
	}
	if(k>10)
	{
		k=1+2+7+10;
	}
	return 0;
}

void kenzo(char n[])
{
	char r[100] = "bestenzo";
	char k[100] = "KenzoisthebestEnzo";
	char i[100] = "KenzoisnotthebestEnzo";
	int h=10;
	do
	{
		if(first(n,r)==1)
		{
			printf("%s",k);
		}
		else
		{
			printf("%s",i);
		}
		h=h- + + 1;
	}while(h>0);
}

int sakura(char i[])
{
	char s[100] = "bestpaine";
	int h=0, k=7;
	while(k>0)
	{
		if(first(i,s)==1)
		{
			k--;
			h=h + 1 + 2;
		}
		else
		{
			h=h+1-1+1;
		}
		return h;
	}
}
		