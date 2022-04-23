#include <stdio.h>
void nhapmang (int a[], int n);
void xuatmang (int a[], int n);
void even_odd(int a[], int n);
void main()
{
	int a[10], b[100], n, del;
	printf("Nhap so phan tu can su dung: ");
	scanf("%d", &n);

	nhapmang(a, n);
	xuatmang(a, n);
	
	even_odd(a, n);
}
void even_odd(int a[], int n)
{
	int b[10];
	int c[10];
	int i;
	int j =0, k=0;
	
	for(i=0; i<n; i++)
    {
		if(a[i] % 2==0)
		{
			b[j++] = a[i];
		}
		else
		{
			c[k++] = a[i];
		}
    }
    printf("\n Mang chan la: ");	
	for(i=0; i<j; i++)
    {
		printf("%d ",b[i]);
	}
	printf("\nMang le la: ");	
	for(i=0; i<k; i++)
    {
		printf("%d ",c[i]);
	}
	
}
void nhapmang(int a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("Nhap vao gia tri phan tu thu %d: ", i+1);
		scanf("%d",&a[i]);
	}
}
void xuatmang(int a[], int n)
{
	int i;
	printf("Gia tri cac phan tu trong mang: ");
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}




