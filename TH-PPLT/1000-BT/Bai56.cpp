// Bài 56: Hãy kiểm tra số nguyên dương n có toàn chữ số lẻ hay không
#include<stdio.h>
int main(){
    int n,a=0;
    int arr[100];
    do{
        printf("\nNhap gia tri n: ");
        scanf("%d",&n);
    }while(n<=0);
    while(n>0){
        arr[a]=n%10;
        a++;
        n/=10;
    }
    int check=1;
    for(int i=0;i<a; i++){
        if(arr[i]%2==0){
            check=0;
            break;
        }
    }
    if(check==1){
        printf("Toan chu so le!");
    }else{
        printf("Khong toan chu so le!");
    }
}