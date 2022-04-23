#include<stdio.h>
#include<ctype.h>
int main()
{
    char c;
  
    printf("Moi ban nhap ky tu c: ");
    c = getchar();
    printf("Ky tu vua nhap la: ");
    putchar(c);
    putchar('\n');
    fflush(stdin);
    if(isalpha(c)) // Kiem tra xem ky tu co phai la ky tu alpha
    {
    	printf("Day la ky tu alphabe \n");
    	if(isupper(c)) // Kiem tra xem ky tu co phai la ky tu hoa khong ?
    	{
    		printf("%c la ky tu hoa \n",c);
    		printf("Chuyen doi sang ky tu thuong: %c \n",tolower(c)); // Chuyen doi tu ky tu hoa sang ky tu thuong
		}
		if(islower(c))
		{
			printf("%c la ky tu thuong \n",c);
    		printf("Chuyen doi sang ky tu hoa: %c \n",toupper(c)); // Chuyen doi tu ky tu hoa sang ky tu thuong
		}
	}
	
	
    return 0;
}
/*

*/