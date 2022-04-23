#include<stdio.h>
#include<math.h>
int main(){
    int n;
    int check = 0;
    do{
        printf("\nNhap gia tri n: ");
        scanf("%d",&n);
        check++;
        if(check==5){
            break;
        }
    }while(n<=0);
    int k=n;
    int songhichdao=0;
    do{
        int last=n%10;
        songhichdao=songhichdao*10+last;
        n/=10;
    }while(n!=0);
    printf("Gia tri n:%d",songhichdao);

    // cau b

    int x=0;
    for(int i=1;i<=k/2;i++){
        if(k%i==0){
            x+=i;
        }
    }
    if(x==k){
        printf("\nLa so hoan thien");
    }else{
        printf("\nKhong la so hoan thien");
    }
    // Cau c

    int z[100];
    int i=-1;
    while(k!=0){
        i++;
        int last=k%10;
        z[i]=last;
        k/=10;
    }
    int kiemtra=1;
    for(int j=0;j<i/2;j++){
        if(z[j]!=z[i-j]){
            kiemtra=0;
            break;
        }
    }
    if(kiemtra==1){
        printf("\nDay la so doi xung");
    }else{
        printf("\nDay khong phai so doi xung!");
    }



}