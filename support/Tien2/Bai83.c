#include<stdio.h>
void Nhap(int arr[][100],int m,int n){
    int sum1 = 0,sum2 = 0;
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
            if(i==j){
                sum1 += arr[i][j];
            }else if(i==n-1-j){
                sum2 += arr[i][j];
            }
        }
    }
    printf("chinh: %d phu: %d",sum1,sum2);
}

int main(){
    int m,n;
    int arr[100][100];
    scanf("%d%d",&m,&n);
    Nhap(arr,m,n);
}