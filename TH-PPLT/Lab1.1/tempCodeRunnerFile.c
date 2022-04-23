#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    float tong=0,t;
    for (int i=2;i<=n;i++){
        t=(1/i);
        tong+=t;
    }
    printf("%0.4f",tong);
}