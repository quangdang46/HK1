#include<stdio.h>
#include<math.h>

int main(){
    int x,y;
    int t;
    printf("NHAP X LA SO THUC--NHAP Y LA SO TU NHIEN");
    printf("\nnhap x ");scanf("%d",&x);
    printf("\nnhap y ");scanf("%d",&y);
    if(y>=0){
        t=pow(x,y);
        printf("%d",t);
    }else{
        printf("\nKIEM TRA DIEU KIEN");
    }
}
