#include<stdio.h>
int main(){
	int n,test;
	scanf("%d",&test);
	while(test--){
		int sum=0;
		scanf("%d",&n);
		while(n>0){
			sum=sum+n%10;
			n=n/10;
		}
		printf("%d\n",sum);
	}
	return 0;
}
