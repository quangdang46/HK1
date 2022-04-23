#include<stdio.h>
int arr[100][100];
void Solve(int arr[][100],int m,int n,int x){
    int i,j;
    int ans = 0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==x){
                ans++;
            }
        }
    }
    printf("Count=%d",ans);
}

int main(){
    int m,n,x;
    scanf("%d%d%d",&m,&n,&x);
    Solve(arr,m,n,x);
}