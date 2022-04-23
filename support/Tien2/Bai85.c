#include<stdio.h>
int arr[100][100];
void Solve(int m,int n){
    printf("S1=%g S2=%g S3=%g",m*n*1.0/4,m*n*1.0/2,m*n*1.0/4);
}


int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    Solve(m,n);
}