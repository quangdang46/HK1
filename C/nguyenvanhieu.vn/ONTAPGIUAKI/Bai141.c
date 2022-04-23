#include<stdio.h>
#include<math.h>
int CheckSNT(int n){
    int KiemSNT = 1;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            KiemSNT = 0;
            break;
        }
    }
    return KiemSNT;
}
int main(){
    int n;
    printf("\nNhap n: ");
    scanf("%d",&n);
    if(CheckSNT(n)==1){
        printf("\nDay la so nguyen to");
    }else{
        for(int h=2;h<=n;h++){
            if(CheckSNT(h)==1){
                printf("%d ",h);
            }
        }
    }
}