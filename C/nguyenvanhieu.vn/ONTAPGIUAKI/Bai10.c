#include<stdio.h>
int main(){
    int tien,n,x,luachon;
    printf("\nNhap so tien can mua:");
    scanf("%d",&tien);
    printf("1.Tra Xanh C2\n");
    printf("2.Sting\n");
    printf("3.Pepsi\n");
    printf("4.Warrior\n");
    printf("5.Nuoc Suoi\n");
    printf("6.Nhap Lua Chon:");
    scanf("%d",&luachon);
    switch (luachon){
        case 1:{
            printf("\nTra Xanh C2");
            n=tien/9000;
            x=tien%9000;
            if(n!=0){
                printf("Tra Xanh C2 - %d chai - Tien du: %d",n,x);
            }else{
                printf("Loi!");
            }
            break;
        }
        case 2: {
            printf("\nSting: ");
            n=tien/11000;
            x=tien%11000;
            if(n!=0){
                printf("Sting - %d chai - Tien du: %d",n,x);
            }else{
                printf("Loi!");
            }
            break;
        }
        case 3: {
            printf("\nPepsi: ");
            n=tien/10000;
            x=tien%10000;
            if(n!=0){
                printf("Pepsi - %d chai - Tien du: %d",n,x);
            }else{
                printf("Loi!");
            }
            break;
        }
        case 4: {
            printf("\nWarrior: ");
            n=tien/13000;
            x=tien%13000;
            if(n!=0){
                printf("Warrior - %d chai - Tien du: %d",n,x);
            }else{
                printf("Loi!");
            }
            break;
        }
        case 5:{
            printf("\nNuoc Suoi: ");
            n=tien/5000;
            x=tien%5000;
            if(x>=0){
                printf("Nuoc Suoi - %d chai - Tien du: %d",n,x);
            }else{
                printf("Loi!");
            }
            break;
        }
    }

}