#include<stdio.h>
void nhap(int a[][50], int *m, int *n) {
	printf("\nNhap so hang, so cot cua ma tran A: ");
	scanf("%d%d", m, n);
	int i, j;
	for(i = 0; i < *m; i++){
		for(j = 0; j < *n; j++){
			printf("\nx[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
		printf("\n");
	}
}
void xuat(int a[][50], int m, int n){
	int i, j;
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
}
void tich(int a[][50], int b[][50], int c[][50], int m, int n, int k) {
	int i, j, l;
	for(i = 0; i < m; i++) {
		for(j = 0; j < k; j++) {
			for(l = 0; l < n; l++) {
				c[i][j] += a[i][l] * b[l][j];
			}
		}
	}
}
int main() {
	int a[50][50], b[50][50], c[50][50] = {0};
	int ma, na, mb, nb;
	printf("Nhap Ma Tran A: ");
	nhap(a, &ma, &na);
	printf("\nNhap Ma Tran B: ");
	nhap(b, &mb, &nb);
	if(na != mb){
		printf("\nKhong nhan duoc!");
	}else{
		tich(a, b, c, ma, na, nb);
		printf("\nMa tran A: \n");
		xuat(a, ma, na);
		printf("\nMa tran B: \n");
		xuat(b, mb, nb);
		printf("\nMa tran C: \n");
		xuat(c, ma, nb);
	}
}