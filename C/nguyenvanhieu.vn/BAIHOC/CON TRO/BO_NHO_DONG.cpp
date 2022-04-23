// https://www.youtube.com/watch?v=wJNJaAf9p00
// Dùng Thư viện stdlib.h
/*
Hàm malloc() : cấp phát bộ nhớ
ptr = (castType*) malloc(size);
ptr = (float*) malloc(100 * sizeof(float));
Hàm calloc() : cấp phát bộ nhớ và gán giá trị bằng 0
ptr = (castType*)calloc(n, size);
ptr = (float*) calloc(25, sizeof(float));
Lưu ý: nếu không cấp phát được sẽ trả về giá trị NULL
Hàm realloc() : hay đổi kích thước của bộ nhớ được cấp phát
ptr = realloc(ptr, x); 
Hàm free() : giải phóng bộ nhớfree(ptr);
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	printf("Nhap so luong phan tu: ");
	scanf("%d", &n);
	
	//int* ptr = (int*)malloc(n*sizeof(int));
	int* ptr = (int*)calloc(n, sizeof(int));
	if(ptr==NULL){
		printf("\nError: Khong cap phat duoc vung nho");
		return 0;
	}
	
	for(int i=0; i<n; i++){
		printf("a[%d]=",i);
		scanf("%d", ptr+i);
	}
	
	// Xuat mang
	for(int i=0; i<n; i++){
		printf("%d ", *(ptr+i));
	}
	
	int x;
	printf("\nKich co mang muon thay doi la: ");
	scanf("%d", &x);
	realloc(ptr, x);
	
	
	// Xuat mang
	printf("\n");
	for(int i=0; i<x; i++){
		printf("%d ", *(ptr+i));
	}
	
	free(ptr);
}