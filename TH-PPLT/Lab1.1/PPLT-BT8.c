//Min max 2 so
#include<stdio.h>
int main(){
    int a,b;
    printf("Nhap 2 so can so sanh: ");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("%d > %d\n",a,b);
    }else if(a<b){
        printf("%d < %d\n",a,b);
    }else{
        printf("%d = %d\n",a,b);
    }
}