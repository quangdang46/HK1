#include<stdio.h>
#include<math.h>
//dùng đệ quy kiểm tra số siêu nguyên tố
int nt(int n){
    if(n<2) return 0;
    int i;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int SNT(int n){
    if(nt(n))
        return nt(n/10);
    else{
        return 0;
    }
    return 1;
}
int main(){
    //so 
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d",&n);
    if(SNT(n)){
        printf("%d la so nguyen to",n);
    }else{
        printf("%d khong phai la so nguyen to",n);
    }
}