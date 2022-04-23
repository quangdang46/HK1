#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#include<time.h>
int arr[100][100];
int mark[100];
void nhap(int arr[][100],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            arr[i][j] =rand()%100;
        }
    }
}
void xuat(int arr[][100],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d   ",arr[i][j]);
        }
        printf("\n");
    }
}

void xuatcheochinh(int arr[][100],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                printf("%d ",arr[i][j]);
            }
        }
    }
}


void xuatcheophu(int arr[][100],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==n-j-1){
                printf("%d ",arr[i][j]);
            }
        }
    }
}
int sumK(int arr[][100],int n,int k){
    int i,sum=0;
    for(i=0;i<n;i++){
        sum+=arr[k][i];
    }
    return sum;
}
void xuatsumdong(int mark[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",mark[i]);
    }
}
int maxmang(int mark[],int n){
    int i,max=mark[0];
    for(i=1;i<n;i++){
        if(mark[i]>max){
            max=mark[i];
        }
    }
    return max;
}
void xuatdongmax(int arr[][100],int n,int mark[],int max){
    int i,k;
    for(i=0;i<n;i++){
        if(mark[i]==max){
            for(k=0;k<n;k++){
                printf("%d ",arr[i][k]);
            }
        }
        printf("\n");
    }
}
int main(){
    int n;
    srand(time(0));
    printf("Nhap n: ");
    scanf("%d",&n);
    //a Nhap ma tran
    nhap(arr,n);
    printf("\n");
    //b Xuat ma tran
    xuat(arr,n);
    //xuat cac phan tu tren duong cheo chinh
    printf("Cac phan tu tren duong cheo chinh: ");
    xuatcheochinh(arr,n);
    printf("\n");
    // //xuat cac phan tu tren duong cheo phu
    printf("Cac phan tu tren duong cheo phu: ");
    xuatcheophu(arr,n);
    printf("\n");
    //tong cac phan tu nam tren dong thu k
    int k;
    printf("Nhap k: ");
    scanf("%d",&k);
    printf("Tong cac phan tu nam tren dong thu %d la: %d",k,sumK(arr,n,k));
    printf("\n");
    //tong cac phan tu tren moi dong
    int j=0;
    while (j<n) {
        int i;
        int sum=0;
        for(i=0;i<n;i++){
            sum+=arr[j][i];
        }
        mark[j]=sum;
        j++;
    }  
    printf("Tong cac phan tu tren moi dong la: ");
    xuatsumdong(mark,n);
    printf("\n");
    //xuat ra dong co tong lon nhat
    int max=maxmang(mark,n);
    printf("Dong co tong lon nhat la:\n");
    xuatdongmax(arr,n,mark,max);
    printf("\n");

}