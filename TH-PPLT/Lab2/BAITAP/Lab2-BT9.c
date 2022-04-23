#include<stdio.h>
#include<math.h>
int main(){
    int n,swapnum;
    int firstnum,last,cout;
    printf("\nNhap so can thay doi: ");
    scanf("%d",&n);
    last=n%10;
    cout=(int)log10(n);
    firstnum=(int)(n/pow(10,cout));
    swapnum=last;
    swapnum*=(int)pow(10,cout);
    swapnum+=n%((int)pow(10,cout));
    swapnum-=last;
    swapnum+=firstnum;
    printf("\nSau khi hoan doi:%d",swapnum);
}