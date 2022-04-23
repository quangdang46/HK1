#include<stdio.h>
#include<limits.h>
int arr[100][100];
void Solve(int arr[][100],int m,int n){
    int i,j;
    int maxd=INT_MIN,kld;
    int sumd=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
            sumd+=arr[i][j];
        }
        if(sumd>maxd){
            maxd=sumd;
            kld=i;
        }
    }
    printf("Dong thu %d co tong lon nhat : %d",maxd,kld);
}


int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    Solve(arr,m,n);
}