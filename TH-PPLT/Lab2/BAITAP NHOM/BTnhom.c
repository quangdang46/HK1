#include <stdio.h>
#include<math.h>
int chon;
int main(){
	printf("=======Menu=======\n");
	printf("0.Thoat CT\n");
	printf("1.Bai8\n");
	printf("2.Bai12\n");
	printf("3.Bai19\n");
	printf("Chon truong trinh muon chay:");
	scanf("%d",&chon);
	switch(chon){
	case 1:{
		long long n;
		int count = 0;
		printf("Nhap 1 so nguyen: ");
		scanf("%lld", &n);
       	do{
			n /= 10;
			++count;
		} while (n != 0);
        printf("So chu so cua so da nhap la: %d", count);
		break;
	}	
	case 2:{
		int a, i, mark;
		printf("Nhap gia tri can kiem tra: "); scanf("%d", &a);
		if (a < 2) {
			printf("\nKhong phai so nguyen to");
		}
		else {
			mark = 1;
			for (i = 2; i <= sqrt(a); i++) {
				if (a % i == 0) {
					mark = 0;
					break;
				}
			}
			if (mark == 1) {
				printf("so nguyen to\n");
			}
			else {
				printf("\nkhong phai so nguyen to");
				}
		}
		break;
	}
	case 3:{
		int n, fact = 1, i;
		printf("Enter n:");
		scanf("%d", &n);
		for (i = 1; i <= n; i++) {
			fact *= i;
		}
		printf("Giai thua cua %d = %d\n", n, fact);
		break;
	}
	case 0:{
	break;
	}
	}
}