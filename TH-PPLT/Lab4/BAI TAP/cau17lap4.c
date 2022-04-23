#include <stdio.h>
#define MAX 100
#define ROW 5
#define N 5
void inputArray(int a[][N], int n, int m);
void outputArray(int a[][N], int n, int m);
int sub(int a[][N], int b[][N], int c[][N], int n, int m);

int main()
{
	int a[ROW][N], b[ROW][N], c[ROW][N];
	int n, m ;  // n hang; m cot
	
	do 
	{
		printf("Nhap so hang cho ma tran (LUU Y NHAP SO BE HON 6) ");
		scanf("%d", &n);
		printf("Nhap so cot cho ma tran (LUU Y NHAP SO BE HON 6) ");
		scanf("%d", &m);
		
	}while(n<=0 || m<=0);
	
	printf("Nhap cac phan tu cua ma tran A :\n");
	inputArray(a,n,m);
	printf("\nMang A la: \n");
	outputArray(a,n,m);
	printf("Nhap cac phan tu cua ma tran B :\n");
	inputArray(b,n,m);
	printf("\nMang B la: \n");
	outputArray(b,n,m);
	printf("\nSubtract of two matrices A-B =:\n");
	sub(a,b,c,n,m);
	
return 0;	
}

void inputArray(int a[][N], int n, int m)
{
	int i, j;
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++ )
		{
			printf("Nhap phan tu [%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
		printf("\n");
	}
	
} 
void outputArray(int a[][N], int n, int m)
{
	int i,j;	
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("\t%d", a[i][j]);
		}
		printf("\n");
	}
}
int sub(int a[][N], int b[ROW][N], int c[ROW][N], int n, int m)
{
	int i,j;
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			c[i][j]= a[i][j]-b[i][j] ;
			printf("\t%d", c[i][j]);
		}
		printf("\n");
	}
}

