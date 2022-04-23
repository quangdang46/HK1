// Tim chu so dau tien va cuoi cung cua 1 so nguyen ba ki
#include <stdio.h>
int main(){
    int n;
    printf("\nNhap so nguyen can lay so: ");
    scanf("%d",&n);
    if(n<0){
        n=n*(-1);
    }
    //
    int dau,cuoi;
    cuoi=n%10;
    n/=10;
    while(n>0){
        dau=n%10;
        n/=10;
    }
    //
    printf("\nSo dau tien la:%d",dau);
    //
    printf("\nSo cuoi cung la:%d",cuoi);
}