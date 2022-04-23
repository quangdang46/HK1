#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define LENGTH 100
void removeVowel(char str[]);
int countWords(char str[]);
void newlineWords(char str[]);
int countCharK(char str[], char k);
int main()
{
	char str[LENGTH];
	char newstr[LENGTH];
	char k;
	int len; // Bien chua chieu dai cua chuoi
	
	printf("Moi ban nhap vao 1 chuoi chieu dai khong duoc lon hon %d :",LENGTH-1);
	//Cach 1 dung scanf
	//scanf("%s",str); // Dung khi gap khoang trang
	//printf("str = %s\n",str);
	
	//Cach 2 dung fgets va puts
	fgets(str,LENGTH,stdin);
	printf("str = ");
	puts(str);
	
	/*-- Ham xu ly chuoi khi su dung fgets --*/
	len = strlen(str); //Ham strlen de do chieu dai cua chuoi
	printf("Chieu dai cua chuoi truoc khi xu ly la %d \n",len);
	if(str[len-1] == '\n') // Kiem tra ky tu cuoi cung cua chuoi vua nhap co phai la '\n'
	{
		str[len-1] = '\0';
	}
	len = strlen(str);
	printf("Chieu dai cua chuoi sau khi xu ly la %d \n",len);
	
	removeVowel(str);
	
	printf("Chuoi str co %d tu \n",countWords(str));
	
	//newlineWords(str);
	fflush(stdin);
	printf("Moi ban nhap ky tu ");
	scanf("%c",&k);
	printf("Chuoi co %d ky tu %c trong chuoi \n",countCharK(str,k),k);
	
	return 0;
}
void removeVowel(char str[])
{
	int i;
	int count = 0;
	char newstr[LENGTH];
	for (i=0; i<strlen(str); i++) // phai su dung ham strlen de lay ra chieu dai cua chuoi
	{
		switch (toupper(str[i])) // Ham duoc su dung de tranh bo xot ky tu thuong
		{
			case 'A': case 'E':
			case 'I': case 'O': case 'U': break; 
			default: newstr[count++] = str[i];
		}
	}
   	newstr[count] = '\0';
	printf("New string: %s\n", newstr);
}
int countWords(char str[])
{
	int i;
	int count = 0;
	for(i=0;i<strlen(str);i++)
	{
		if(str[i] == ' ')
		{
			count++;
		}
	}
	return count + 1;
}
void newlineWords(char str[])
{
	int i;
	for(i=0;i<strlen(str);i++)
	{
		printf("%c",str[i]);
		printf("\n");
	}
}
int countCharK(char str[], char k)
{
	int i;
	int count = 0;
	for(i=0;i<strlen(str);i++)
	{
		if(str[i] == k)
		{
			count++;
		}	
	}
	return count;
}






