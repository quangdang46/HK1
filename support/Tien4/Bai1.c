#include<stdio.h>
#include<limits.h>
int arr[100][100];
void nhap(int arr[][100],int c,int d,int *sum,int *sum_duong,int *cnt_duong,int *max_mt){
    int i,j;
    for(i=0;i<c;i++){
        for(j=0;j<d;j++){
            printf("Nhap phan tu thu %d cua dong %d: ",j,i);
            scanf("%d",&arr[i][j]);
            *sum+=arr[i][j];
            if(arr[i][j]>0){
                *sum_duong+=arr[i][j];
                *cnt_duong+=1;
            }
            if(arr[i][j]>*max_mt){
                *max_mt=arr[i][j];
            }
        }
    }
}

void xuat(int arr[][100],int c,int d){
    int i,j;
    for(i=0;i<c;i++){
        for(j=0;j<d;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}

void xuatK(int arr[][100],int c,int d,int k){
    int i;
    for(i=0;i<d;i++){
        printf("%d ",arr[k][i]);
    }
}

void sumK(int arr[][100],int c,int d,int k){
    int i,sum=0;
    for(i=0;i<c;i++){
        sum+=arr[i][k];
    }
    printf("Tong cua cot %d la: %d\n",k,sum);
}
int main(){
    int d,c;
    int sum=0;
    int sum_duong=0,cnt_duong=0;
    int max_mt=INT_MIN; 
    printf("Nhap so dong: ");
    scanf("%d",&c);
    printf("Nhap so cot: ");
    scanf("%d",&d);
    //a Nhap ma tran
    nhap(arr,c,d,&sum,&sum_duong,&cnt_duong,&max_mt);
    printf("\n");
    //b Xuat ma tran
    xuat(arr,c,d);
    printf("\n");
    //c Tinh tong cac phan tu
    printf("Tong cac phan tu la: %d",sum);
    printf("\n");
    //Tinh trung binh cong cac phan tu
    printf("\nTrung binh cong cac phan tu la: %f",(float)sum/(c*d));
    printf("\n");
    //Tinh trung binh cong cac phan tu duong
    if(cnt_duong!=0){
        printf("\nTrung binh cong cac phan tu duong la: %f",(float)sum_duong/(cnt_duong));
    }
    else{
        printf("\nKhong co phan tu duong nao");
    }
    printf("\n");
    //Xuat phan tu nam tren dong k
    int k;
    printf("\nNhap dong muon xuat: ");
    scanf("%d",&k);
    xuatK(arr,c,d,k);
    printf("\n");
    //Tinh tong cac phan tu nam tren cot k
    sumK(arr,c,d,k);
    printf("\n");
    //max cua ma tran la:
    printf("\nMax cua ma tran la: %d",max_mt);

}