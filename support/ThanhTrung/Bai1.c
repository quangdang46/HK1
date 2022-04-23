#include<stdio.h>
int main(){
    int a,b;
    printf("Nhap a,b:");
    scanf("%d%d",&a,&b);
    if(a>0){
        printf("a la so duong\n");
    }else if(a<0){
        printf("a la so am\n");
    }
    if(b>0){
        printf("b la so duong\n");
    }else if(b<0){
        printf("b la so am\n");
    }


    if(a>b){
        printf("a lon hon b\n");
    }
    else if(a<b){
        printf("a nho hon b\n");
    }
    else{
        printf("a bang b\n");
    }

    //in ra kết quả a,b có là bội số của nhau hay không
    if(a%b==0){
        printf("a la boi so cua b\n");
    }
    else if(b%a==0){
        printf("b la boi so cua a\n");
    }else{
        printf("a,b khong la boi so cua nhau\n");
    }

}