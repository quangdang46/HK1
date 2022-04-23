#include<stdio.h>
#include<limits.h>
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
int TimMax(int arr[][100],int m,int n){
    int max=INT_MIN; //Hoac dung max=ar[0][0]
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    return max;
}
int TimMin(int arr[][100],int m,int n){
    int min=INT_MAX; //Hoac dung min=ar[0][0]
    for(int i=0;i<m; i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
    }
    return min;
}
int main(){
    int m,n;
    int arr[100][100];
    printf("\nNhap gia tri m,n: ");
    scanf("%d%d",&m,&n);
    nhapmang(arr,m,n);
    // xuatmang(arr,m,n);
    printf("\nGia tri lon nhat cua mang:%d",TimMax(arr,m,n));
    printf("\nGia tri nho nhat cua mang:%d",TimMin(arr,m,n));
}