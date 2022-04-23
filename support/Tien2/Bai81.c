#include<stdio.h>
int check[10000];
int arr[100][100];
void Solve(int arr[][100],int m,int n){
    int i,j;
    int ka,kb;
    int ans = 0;
    int cnt = 0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
            check[ans]=arr[i][j];
            ans++;
        }
    }
    for(ka=0;ka<ans;ka++){
        int ok=1;
        for(kb=0;kb<ka;kb++){
            if(check[ka]==check[kb]){
                ok=0;
                break;
            }
        }
        if(ok==1) cnt+=check[ka];
    }
    printf("Count=%d",cnt);
}


int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    Solve(arr,m,n);
}