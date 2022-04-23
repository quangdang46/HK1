#include<stdio.h>
#include<math.h>
#include<limits.h>
int arr[100];
int check(int arr[],int sz,int x){
    for(int i=0;i<sz;i++){
        if(arr[i]==x){
            return 0;
        }
    }
    return 1;
}
void nhap(int arr[],int n){
    int i,j;
    for(i=0;i<n;i++){
        printf("Nhap phan tu thu %d: ",i); 
        scanf("%d",&arr[i]);
        while(check(arr,i,arr[i])==0){
            printf("Phan tu da ton tai, nhap lai\n");
            printf("Nhap phan tu thu %d: ",i);
            scanf("%d",&arr[i]);            
        }
    }
}
void xuat(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
}

int cp(int n){
    if(pow((int)sqrt(n),2)==n){
        return 1;
    }
    return 0;
}
void xuatcp(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        if(i%2!=0 && cp(arr[i])==1){
            printf("%d ",arr[i]);
        }
    }
}
void index_max(int arr[],int n){
    int i,max=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("Index cua phan tu lon nhat la: ");
    for(i=0;i<n;i++){
        if(arr[i]==max){
            printf("%d ",i);
        }
    }
}
void solve(int arr[],int n){
    int max_am=INT_MIN;
    int min_duong=INT_MAX;
    int i;
    for(i=0;i<n;i++){
        if(arr[i]<0){
            if(arr[i]>max_am){
                max_am=arr[i];
            }
        }else{
            if(arr[i]<min_duong){
                min_duong=arr[i];
            }
        }
    }
    if(max_am==INT_MIN){
        printf("Khong co phan tu am nao\n");
    }else{
        printf("Phan tu lon nhat am la: %d\n",max_am);
    }
    if(min_duong==INT_MAX){
        printf("Khong co phan tu duong nao\n");
    }else{
        printf("Phan tu lon nhat duong la: %d\n",min_duong);
    }
}
int tongchan(int arr[],int n){
    int i,sum=0;
    for(i=0;i<n;i++){
        if(i%2==0){
            sum+=arr[i];
        }
    }
    return sum;
}
//sap xep tang dan dung selecion sort
void selecion_sort(int arr[],int n){
    int i,j,min,temp;
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}
int main(){
    int n;
    printf("nhap n: ");
    scanf("%d",&n);
    //nhap mang
    nhap(arr,n);
    printf("\n");
    //xuat mang
    xuat(arr,n);
    printf("\n");
    //xuat so cp vi tri le
    xuatcp(arr,n);
    printf("\n");
    //xuat index cua phan tu lon nhat
    index_max(arr,n);
    printf("\n");
    //xuat max am, max duong
    solve(arr,n);
    printf("\n");
    //tong cac phan tu o vi tri chan
    printf("Tong cac phan tu o vi tri chan la: %d\n",tongchan(arr,n));
    //sap xep tang dan
    selecion_sort(arr,n);
    printf("Mang sau khi sap xep\n");
    xuat(arr,n);
    return 0;
}