// #include <stdio.h>
// int main() {
// 	unsigned int n;
// 	printf("Nhap so n > 1: ");
// 	scanf("%u", &n);
	
// 	if(n < 2) {
// 		printf("Nhap n > 1");
// 	} else {
// 		unsigned int i = 2;
// 		printf("%u = ", n);
// 		while(n > 1) {
// 			if(n % i == 0) {
// 				printf("%u", i);
// 				if(n != i) {
// 					printf("x");
// 				}
// 				n /= i;
// 			} else {
// 				i++;
// 			}
// 		}
// 	}
	
// 	return 0;
// }
#include <stdio.h>

int main(){
	int n,i;
	printf("Nhap so nguyen n>1: ");scanf("%d",&n);
	if(n<1){
		printf("Hay nhap gia tri n >1");
		scanf("%d",&n);
	}else{
		i=2;
		printf("%d=",n);
		while(n>2){
			if(n%i==0){
				printf("%d",i);
				if(n!=i){
					printf("X");
				}
				n/=i;
			}else{
				i++;
			}
		}
	}
}