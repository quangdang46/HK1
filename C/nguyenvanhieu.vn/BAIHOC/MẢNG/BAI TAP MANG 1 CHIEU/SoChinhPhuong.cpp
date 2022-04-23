#include<stdio.h>
#include<math.h>
void sochinhphuong(int n){
    int k=sqrt(n);
    if(pow(k,2)==n){
        printf("\nSo chinh phuong");
    }else{
        printf("\nKhong phai so chinh phuong");
    }
}
int main(){
    int n;
    printf("\nNhap n: ");
    scanf("%d",&n);
    sochinhphuong(n);

}