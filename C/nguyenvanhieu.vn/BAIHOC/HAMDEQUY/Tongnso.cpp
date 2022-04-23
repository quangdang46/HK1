#include<stdio.h>
int tong(int n){
    if(n<0){
        n*=-1;
    }else{
        return n+tong(n-1);
    }
}
/*giả sử n=3
    3+tong(2)
    3+2+tong(1)
    3+2+1+0
*/

int main(){
    int n;
    printf("Nhap n");
    scanf("%d",&n);
    printf("tong la:%d",tong(n));
}