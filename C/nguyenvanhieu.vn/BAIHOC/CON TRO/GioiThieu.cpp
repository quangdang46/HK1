// https://tlot.cc/sbM6M
// #include<stdio.h>
// int main(){
//     int c=5;
//     int *pc;
//     pc=&c;
//     printf("\nGia tri cua c: %d",*pc);
//     printf("\nVi tri cua c: %p",pc);
// }
#include <stdio.h>
int main(){
//	int x[]={1,2,3,4,5};
//	printf("Mang x: \n");
//	for(int i=0; i<5; i++){
//		printf("%d ", &x[i]);
//	}
//	
//	printf("\nDia chi cua x la: %p", &x);
//	printf("\nDia chi cua x[0] la: %p", &x[0]);
	
	int x[10];
	int n=10;
	
	printf("Nhap vao cac gia tri cua mang: ");
	for(int i=0; i<n; i++){
		printf("a[%d]=", i);
		//scanf("%d", &x[i]);
		scanf("%d", x+i);
	}
	
	printf("Gia tri cua mang la: ");
	for(int i=0; i<n; i++){
		//printf("%d ", x[i]);
		printf("%d ", *(x+i));
	}
}