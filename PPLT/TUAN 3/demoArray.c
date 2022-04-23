#include <stdio.h>
#define MAX 1000
void nhapMang(int A[], int n);
void xuatMang(int A[], int n);
int main()
{
    int A[MAX]; // A co chieu dai toi da la 1000
    int n;      // So luong phan tu su dung
    printf("Nhap n: ");
    scanf("%d", &n);
    nhapMang(A, n);
    xuatMang(A, n);
    return 0;
}
void nhapMang(int A[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Nhap phan tu thu %d ", i);
        scanf("%d", &A[i]);
    }
}
void xuatMang(int A[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Gia tri phan tu thu %d la %d \n", i, A[i]);
    }
}