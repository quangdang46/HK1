#include<stdio.h>
int arr[100][100];
void Solve(int arr[][100],int m,int n){
    int i,j;
    int ans = 0;
    int sum = 0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
            if(arr[i][j]>0){
                sum += arr[i][j];
                ans++;
            }
        }
    }
    printf("Sum=%f",(float)sum/ans);
}

int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    Solve(arr,m,n);
}