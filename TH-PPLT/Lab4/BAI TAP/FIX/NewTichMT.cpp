#include<stdio.h>
void nhapmang(int arr[10][10],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n; j++){
            printf("arr[%d][%d]= ",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
}
void xuatmang(int arr[10][10],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
void TichMaTran(int a[][50], int b[][50], int c[][50], int m, int n, int k) {
	int i, j, l;
	for(i = 0; i < m; i++) {
		for(j = 0; j < k; j++) {
			for(l = 0; l < n; l++) {
				c[i][j] += a[i][l] * b[l][j];
			}
		}
	}
}
void KetQua(){
    int a[50][50], b[50][50], c[50][50] = {0};
    int ma, na, mb, nb;
	printf("Nhap Ma Tran A: ");
	nhapmang(a,ma,na);
	printf("\nNhap Ma Tran B: ");
	nhapmang(b,mb,nb);
	if(na != mb) {
		printf("\nKhong nhan duoc!");
	} else {
		TichMaTran(a, b, c, ma, na, nb);
		printf("\nMa tran A: \n");
		xuatmang(a, ma, na);
		printf("\nMa tran B: \n");
		xuatmang(b, mb, nb);
		printf("\nMa tran C: \n");
		xuatmang(c, ma, nb);
	}
}
int main(){
    KetQua();
}