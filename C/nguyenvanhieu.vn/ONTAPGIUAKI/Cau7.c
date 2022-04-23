#include<stdio.h>
#include<math.h>
int main(){
    int x;
    printf("\nNhap n ");
    scanf("%d",&x);
    int y1,y3;
    float y2,y4,y5;
    y1=2*pow(x,3)+5*pow(x,2)+7*x+15;
    y2=pow(sin(x),2)+pow(cos(2*x),2)+pow(tan(3*x),2);
    y3=pow(10+x,x+5);
    y4=3*exp(cos(x+1));
    y5=log(x+100);
    printf("\ny1=%d",y1);
    printf("\ny2=%f",y2);
    printf("\ny3=%d",y3);
    printf("\ny4=%f",y4);
    printf("\ny5=%f",y5);
}