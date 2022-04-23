// Them phan tu vao mang 1 chieu
 
#include <stdio.h>
#define MAX 1000
 
void NhapMang(int a[], int n){
    for(int i = 0;i < n; i++){
        printf("Nhap so thu %d: ", i);
        scanf("%d", &a[i]);
    }
}
 
void XuatMang(int a[], int n){
    for(int i = 0;i < n; i++){
        printf("%4d", a[i]);
    }
}
 
// void ThemPhanTu(int a[], int &n, int val, int pos){
//     // Mang da day, khong the them.
//     if(n >= MAX){
//         return;
//     }
//     // Neu pos <= 0 => Them vao dau
//     if(pos < 0){
//         pos = 0;
//     }
//     // Neu pos >= n => Them vao cuoi
//     else if(pos > n){
//         pos = n;
//     }
//     // Dich chuyen mang de tao o trong truoc khi them.
//     for(int i = n; i > pos; i--){
//         a[i] = a[i-1];
//     }
//     // Chen val tai pos
//     a[pos] = val;
//     // Tang so luong phan tu sau khi chen.
//     ++n;
// }
 
// void XoaPhanTu(int a[], int &n, int pos){
//     // Mang rong, khong the xoa.
//     if(n <= 0){
//         return;
//     }
//     // Neu pos <= 0 => Xoa dau
//     if(pos < 0){
//         pos = 0;
//     }
//     // Neu pos >= n => Xoa cuoi
//     else if(pos >= n){
//         pos = n-1;
//     }
//     // Dich chuyen mang
//     for(int i = pos; i < n - 1; i++){
//         a[i] = a[i+1];
//     }
//     // Giam so luong phan tu sau khi xoa.
//     --n;
// }
 
int main(){
    int a[MAX];
    int n;
    printf("\nNhap so luong phan tu: ");
    scanf("%d", &n);
    NhapMang(a, n);
    XuatMang(a, n);
    printf("\n=======THEM PHAN TU======\n");
    int val, pos;
    printf("\nNhap so can them: ");
    scanf("%d", &val);
    printf("\nNhap vi tri muon chen: ");
    scanf("%d", &pos);
    // ThemPhanTu(a, n, val, pos);
    printf("\nMang sau khi them: ");
    XuatMang(a, n);
    printf("\n=======XOA PHAN TU======\n");
    printf("\nNhap vi tri muon xoa: ");
    scanf("%d", &pos);
    // XoaPhanTu(a, n, pos);
    printf("\nMang sau khi xoa: ");
    XuatMang(a, n);
    printf("\nDone!"); 
}

// XOA PHAN TU======
// #include <stdio.h>

// void nhap(int *arr, int *n) {
// 	*n = 0;
// 	while(*n <= 0) {
// 		printf("Nhap n > 0: ");
// 		scanf("%d", n);
// 	}
// 	int i;
// 	for(i = 0; i < *n; i++) {
// 		printf("arr[%d] = ", i);
// 		scanf("%d", &arr[i]);
// 	}
// }

// int nhapK(int n) {
// 	int k = -1;
// 	while(k < 0 || k >= n) {
// 		printf("Nhap k(0 <= k < n): ");
// 		scanf("%d", &k);
// 	}
// 	return k;
// }

// void xoa(int *arr, int *n, int k) {
// 	int i;
// 	for(i = k; i < *n - 1; i++) {
// 		arr[i] = arr[i + 1];
// 	}
// 	*n -= 1;
// }

// void hienThi(int *arr, int n) {
// 	int i;
// 	for(i = 0; i < n; i++) {
// 		printf("%-10d", arr[i]);
// 	}
// }

// int main() {
// 	int n;
// 	int arr[100];
// 	nhap(arr, &n);
// 	int k = nhapK(n);
// 	xoa(arr, &n, k);
// 	hienThi(arr, n);
// 	return 0;
// }
