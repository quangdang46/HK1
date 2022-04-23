#include <stdio.h>
#define ROW 3
#define N 3
void inputMultiArray(int A[][N], int row);  // Nhap mang da chieu
void outputMultiArray(int A[][N], int row); // Xuat mang da chieu
int sumOfMultiArray(int A[][N], int row);   // Tong cac phan tu co trong mang da chieu
int main()
{
    int A[ROW][N];
    int n = 3; // so luong phan tu su dung

    inputMultiArray(A, n);
    printf("Mang da chieu la: \n");
    outputMultiArray(A, n);
    printf("Ket qua tinh: \n");
    printf("Tong cac phan tu cua mang da chieu la %d \n", sumOfMultiArray(A, n));

    return 0;
}
void inputMultiArray(int A[][N], int row)
{
    int i, j;
    for (i = 0; i < row; i++) // Duyet tung dong
    {
        printf("Moi ban nhap dong thu %d \n", i);
        for (j = 0; j < N; j++)
        {
            printf("Nhap phan thu %d cua dong thu %d ", j, i);
            scanf("%d", &A[i][j]);
        }
    }
}
void outputMultiArray(int A[][N], int row)
{
    int i, j;
    for (i = 0; i < row; i++) // Duyet tung dong
    {

        for (j = 0; j < N; j++)
        {

            printf("Gia tri cua phan tu thu %d cua dong %d la %d \n", j, i, A[i][j]);
        }
    }
}
int sumOfMultiArray(int A[][N], int row)
{
    int i, j;
    int sum = 0;
    for (i = 0; i < row; i++) // Duyet tung dong
    {
        for (j = 0; j < N; j++)
        {
            sum += A[i][j];
        }
    }
    return sum;
}