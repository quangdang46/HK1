#include<stdio.h>
int main(){
    int n,j=0,i;
    int S[100];
    printf("Nhap n: ");
    scanf("%d",&n);
    n<0?-1*n:n;
    while(n!=0){
        S[j]=n%10;
        j++;
        n/=10;
    }
    // 4321
    // 1 2 3 4
    int check = 1;
    for(i=1;i<j;i++){
        if(S[i]<S[i-1]){
            check = 0;
            break;
        }
    }
    if(check==0){
        printf("No");
    }else{
        printf("Yes");
    }
}