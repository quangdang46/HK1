#include<stdio.h>

//sap xep dong
void Nhap(int arr[][100],int m,int n){
    int ka,kb,k;
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
        for(ka=0;ka<n-1;ka++){
            for(kb=ka+1;kb<n;kb++){
                if(arr[i][ka]>arr[i][kb]){
                    k=arr[i][ka];
                    arr[i][ka]=arr[i][kb];
                    arr[i][kb]=k;
                }
            }
        }
    }

}

int main(){
    int m,n;
    int arr[100][100];
    scanf("%d%d",&m,&n);
    Nhap(arr,m,n);
}
