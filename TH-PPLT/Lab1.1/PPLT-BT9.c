#include<stdio.h>
int max2(int a, int b){
    if(a < b)
        return b;
    return a;
}
//
int max3(int a, int b,int c){
    if(max2(a,b)<c)
        return c;
    return max2(a,b);
}
//
int main(){
    int a,b,c;
    printf("Nhap 3 so can tim so lon nhat: ");
    scanf("%d%d%d",&a,&b,&c);
    int max=max3(a,b,c);
    printf("%d la gia tri lon nhat",max);
}
