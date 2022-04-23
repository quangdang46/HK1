// #include<stdio.h>

// int main(){
//     int n,snd;
//     printf("\nNhap so can dao nguoc: ");scanf("%d",&n);
//     snd=0;
//     do{
//         //bieu thuc so nghich dao
//         snd=snd*10+n%10;
//     }while(n/=10);
//     printf("so nghich dao la:%d",snd);
// }
 
#include <stdio.h>
 
int main(){
    int n, tmp;
    printf("nhap ");
    scanf("%d", &n);
    bool first = true;
    while(n > 0){
        tmp = n % 10;
        if(first == true){
            if(tmp != 0){
                printf("%d", tmp);
                first = false;
            }
        }else{
            printf("%d", tmp);
        }
        n = n / 10;
    }
}
