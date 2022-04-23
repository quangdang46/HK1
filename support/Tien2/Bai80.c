#include<stdio.h>

int checknt(int n) {
    if(n<2) return 0;
    for (int i = 2; i*i <= n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
void Nhap(int arr[][100],int m,int n){
    int sum = 0;
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
            if(checknt(arr[i][j])) sum += arr[i][j];
        }
    }
    printf("%d",sum);
}

int main(){
    int m,n;
    int arr[100][100];
    scanf("%d%d",&m,&n);
    Nhap(arr,m,n);
}