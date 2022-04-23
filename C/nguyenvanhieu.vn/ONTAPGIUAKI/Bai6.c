#include<stdio.h>
#include<math.h>
int main(){
    float x,f;
    printf("\nNhap x: ");
    scanf("%f",&x);
    if(x<0){
        f=sin(x)*cos(5*x);
        printf("Gia tri s:%f\n",f);
    }else if(x=0){
        f=pow(5,x);
        printf("Gia tri s:%f\n",f);
    }else if(x<5 &&x>0){
        f=exp(x);
        printf("Gia tri s:%f\n",f);
    }else{
        f=pow(5,x)/(x+5);
        printf("Gia tri s:%f\n",f);
    }
}