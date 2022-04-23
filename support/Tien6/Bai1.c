#include <stdio.h>
void nhap(int arr[], int n)
{
	if (n == 0)
		return;
	nhap(arr, n - 1);
	printf("Nhap phan tu thu %d: ", n - 1);
	scanf("%d", &arr[n - 1]);
}
void xuat(int arr[], int n)
{
	if (n == 0)
		return;
	xuat(arr, n - 1);
	printf("%d ", arr[n - 1]);
}
// tinh tong cac phan tu dung de qui
int tong(int arr[], int n)
{
	if (n == 0)
		return 0;
	return arr[n - 1] + tong(arr, n - 1);
}
// tinh tong cac phan tu chan cua mang dung de qui
int tongchan(int arr[], int n)
{
	if (n == 0)
		return 0;
	if (arr[n - 1] % 2 == 0)
		return arr[n - 1] + tongchan(arr, n - 1);
	return tongchan(arr, n - 1);
}

// dem so luong phan tu duong cua mang dung de qui
int count(int arr[], int n)
{
	if (n == 0)
		return 0;
	if (arr[n - 1] > 0)
		return 1 + count(arr, n - 1);
	return count(arr, n - 1);
}

// tim phan tu lon nhat cua mang dung de qui
int max(int arr[], int n)
{
	if (n == 0)
		return 0;
	if (arr[n - 1] > max(arr, n - 1))
		return arr[n - 1];
	return max(arr, n - 1);
}
//tim phan tu chan cuoi dung cua mang dung de qui
int maxchan(int arr[], int n){
	if (n == 0)
		return 0;
	if (arr[n - 1] % 2 == 0)
		return arr[n - 1];
	return maxchan(arr, n - 1);
}
//tim vi tri x cuoi cung trong mang dung de qui
int find(int arr[], int n, int x)
{
	if (n == 0)
		return -1;
	if (arr[n - 1] == x)
		return n - 1;
	return find(arr, n - 1, x);
}
int main()
{
	// a
	int arr[100], n;
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	nhap(arr, n);
	printf("\n");
	// b
	xuat(arr, n);
	// c
	printf("\nSum=%d", tong(arr, n));
	// d
	printf("\nSum of even=%d", tongchan(arr, n));
	// e
	printf("\nCount of positive=%d", count(arr, n));
	//
	printf("\nMax=%d", max(arr, n));
	// f
	printf("\nFinnal even=%d", maxchan(arr, n));
	//g
	int x;
	printf("\nNhap x: ");
	scanf("%d", &x);
	printf("\nFinnal X= %d", find(arr, n, x));
	return 0;
}