#include<stdio.h>
//SỬ DỤNG HÀM CON 
int max2(int a, int b){
    if(a < b)
        return b;
    return a;
}
//max 3 so
int max3(int a, int b,int c){
    if(max2(a,b)<c)
        return c;
    return max2(a,b);
}
int main(){
    int a,b,c;
    printf("\nMOi ban nhap lan luot 3 so: ");scanf("%d%d%d",&a,&b,&c);
    printf("\nMax cua ba so la:%d",max3(a,b,c));
}
