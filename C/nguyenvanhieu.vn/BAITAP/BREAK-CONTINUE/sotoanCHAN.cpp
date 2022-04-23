// kiem tra so toan chan 
#include<stdio.h>

int main(){
    int number,last;
    printf("nhap so can kiem tra");scanf("%d",&number);
    bool kiemtra = true;
    while(number>0){
        //lay so cuoi cung 
        last=number%10;
        if(last%2==1){
            kiemtra=false;
            break;
        }
        number=number/10;

    }
    if(kiemtra){
        printf("so toan la so chan");
    }else{
        printf("so co 1 so le");
    }
}
