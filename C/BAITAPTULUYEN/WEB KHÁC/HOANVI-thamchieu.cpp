#include<stdio.h>
int hoanvi(int &a, int &b){
                //      //
    int tmp = a;
    a=b;
    b=tmp;
}
int main(){
    int a,b;
    printf("\nnhap gia tri a: ");scanf("%d",&a);
    printf("\nnhap gia tri b: ");scanf("%d",&b);
    hoanvi(a,b);
    printf("\n%d  %d\n",a,b);

}