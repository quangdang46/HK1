/* bai tap kiem tra so chan trong c */
#include<stdio.h>
int main(){
   int a;
   printf("Nhap a= ");scanf("%d",&a);
   
   if(a>0){
       if(a%2==1){
           printf("%d so le",a);
       }else{
           printf("%d la so chan",a);
       }
   }else if(a<0){
       printf("%d la so am",a);
   }else{
       printf("%d la so 0",a);
   }

}