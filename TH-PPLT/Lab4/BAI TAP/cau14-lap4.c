#include <stdio.h>
void nhapmang (int a[], int n);
void xuatmang (int a[], int n);
void foundValue(int a[], int n, int found);
void main()
{
	int A[10], n, found;
	printf("Nhap so phan tu can su dung: ");
	scanf("%d", &n);
	printf("Ban muon tim phan tu o vi tri thu may: ");
	scanf("%d", &found);
	nhapmang(A, n);
	xuatmang(A, n);
	foundValue(A,n,found);
}

void foundValue(int a[], int n, int found)
{
	int i;
	for(i= 0; i<n;i++)
	{
		if(i = found)
		{
			printf("\nPhan tu o vi tri %d ban muon tim la so %d ",i,a[i]);
			break;
		}
	}
}
void nhapmang(int a[], int n)
{
	int i;
	for(i = 0;
	i < n; i++)
	{
		printf("Nhap vao gia tri phan tu thu %d: ", i+1);
		scanf("%d",&a[i]);
	}
}

void xuatmang(int a[], int n)
{
	int i;
	printf("Gia tri cac phan tu trong mang: \n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}




