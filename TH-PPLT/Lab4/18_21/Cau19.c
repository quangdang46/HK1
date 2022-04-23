#include<stdio.h>
void nhapmang(int arr[][100],int m,int n){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n; j++){
            printf("arr[%d][%d]= ",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
}
void xuatmang(int arr[][100],int m,int n){
    int i,j;
    for(i=0; i < m; i++){
        for(j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
void CheckBangNhau(int a[][100],int m,int n,int b[][100],int x,int y){
    if(m==x&&n==y){
        int check = 1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]!=b[i][j]){
                    check=0;
                    break;
                }
            }
        }
        if(check==1){
            printf("Hai ma tran bang nhau!");
        }else{
            printf("Hai ma tran khong bang nhau!");
        }
    }else{
        printf("Hai ma tran khong bang nhau!");
    }
}
int main(){
    int m,n,x,y;
    int a[100][100];
    int b[100][100];
    printf("\nNhap gia tri hang va cot ma tran 1 m,n: ");
    scanf("%d%d",&m,&n);
    nhapmang(a,m,n);
    printf("\nNhap gia tri hang va cot ma tran 2 x,y: ");
    scanf("%d%d",&x,&y);
    nhapmang(b,x,y);
    CheckBangNhau(a,m,n,b,x,y);
}