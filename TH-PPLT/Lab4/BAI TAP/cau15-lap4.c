#include <stdio.h>
void nhapmang(int a[], int n);
void xuatmang(int a[], int n);
void sortAscend(int a[], int n);
void main()
{
	int a[10], n;
	printf("Nhap so phan tu can su dung: ");
	scanf("%d", &n);

	nhapmang(a, n);
	xuatmang(a, n);
	printf("\nMang xap sep theo thu tu tang dan la ");
	sortAscend(a, n);
}

void sortAscend(int a[], int n)
{
	int i,j,temp;
	for(i = 0;i<n;i++)
	{
		for(j = i+1;j<n;j++)
		{
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(i = 0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	

}
void nhapmang(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("Nhap phan tu trong mang thu %d: ", i+1);
		scanf("%d", &a[i]);
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




