#include <stdio.h>
#define MAX 1000
void inputArray(int A[], int n);            // Nhap cac phan tu vao mang A
void outputArray(int A[], int n);           // Xuat cac phan tu cua mang A
int sumArray(int A[], int n);               // Tinh tong cac phan tu co trong mang A
float aveArray(int A[], int n);             // Tinh trung binh cac phan tu co trong mang A
int maxOfArray(int A[], int n);             // Tim gia tri lon nhat co trong mang A
int countMaxOfArray(int A[], int n, int k); // Dem xem co bao nhieu gia tri lon hon so k
void listMaxOfArray(int A[], int n, int k); // Liet ke cac phan tu co gia tri lon hon so k
int main()
{
    int A[MAX];
    int n; // n > 0
    int k;
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
    } while (n <= 0);

    printf("Moi ban nhap %d cac phan tu vao mang \n", n);
    inputArray(A, n);
    printf("Mang A: \n");
    outputArray(A, n);
    printf("Ket qua tinh toan: \n");
    printf("Tong cac phan tu co trong mang la: %d \n", sumArray(A, n));
    printf("Gia tri trung binh cac phan tu co trong mang la: %f \n", aveArray(A, n));
    printf("Gia tri lon nhat co trong mang la %d \n", maxOfArray(A, n));
    printf("Moi ban nhap gia tri cua k: ");
    scanf("%d", &k);
    printf("Co %d phan tu lon hon %d trong mang A \n", countMaxOfArray(A, n, k), k);
    listMaxOfArray(A, n, k);
    return 0;
}
void inputArray(int A[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Nhap gia tri phan tu thu %d: ", i);
        scanf("%d", &A[i]);
    }
}
void outputArray(int A[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Gia tri cua phan tu thu %d la %d co dia chi %p \n", i, A[i], &A[i]);
    }
}
int sumArray(int A[], int n)
{
    int i;
    int Sum = 0;
    for (i = 0; i < n; i++)
    {
        Sum += A[i];
    }
    return Sum;
}
float aveArray(int A[], int n)
{
    int i;
    int Sum = 0;
    for (i = 0; i < n; i++)
    {
        Sum += A[i];
    }
    return (float)Sum / n;
}
int maxOfArray(int A[], int n)
{
    int i;
    int max = A[0];
    for (i = 1; i < n; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    return max;
}
int countMaxOfArray(int A[], int n, int k)
{
    int i;
    int count = 0;
    for (i = 0; i < n; i++)
    {
        if (k < A[i])
        {
            count++;
        }
    }
    return count;
}
void listMaxOfArray(int A[], int n, int k)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (k < A[i])
        {
            printf("Phan tu thu %d co gia tri la %d lon hon %d \n", i, A[i], k);
        }
    }
}