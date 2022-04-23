#include<stdio.h>
void nhapmang(int arr[][100],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Arr[%d][%d]= ",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
}
void xuatmang(int arr[][100],int m,int n){
    for(int i=0;i<m; i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
void TinhTrungBinh(int arr[][100],int m,int n){
    int sum = 0;
    int cout=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]%5==0){
                cout++;
                sum+=arr[i][j];
            }
        }
    }
    printf("\nGia tri trung binh cac phan tu chia het cho 5:%f",(float)sum/cout);
}

int main(){
    int m,n;
    int arr[100][100];
    printf("\nNhap gia tri m,n: ");
    scanf("%d%d",&m,&n);
    nhapmang(arr,m,n);
    xuatmang(arr,m,n);
    TinhTrungBinh(arr,m,n);
}