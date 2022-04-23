#include<stdio.h>
void Nhap(int a[],int n);
void Inmang(int a[],int n);
int Tong(int a[],int n);
int Max(int a[],int n);
int Min(int a[],int n);
float Avg(int a[],int n);
void Sort(int a[],int n);
int Count(int a[],int n);
int main(){
    int n;
    int a[100];
    printf("Nhap so phan tu cua mang: ");
    scanf("%d",&n);
    Nhap(a,n);
    printf("\n");
    Inmang(a,n);
    printf("Tong cac phan tu trong mang: %d\n",Tong(a,n));
    printf("Phan tu lon nhat trong mang: %d\n",Max(a,n));
    printf("Phan tu nho nhat trong mang: %d\n",Min(a,n));
    printf("Trung binh cong cac phan tu trong mang: %.2f\n",Avg(a,n));
    Sort(a,n);
    printf("\n");
    Inmang(a,n);
    printf("\n");

    printf("So phan tu chia het 5 trong mang: %d\n",Count(a,n));
}
void Nhap(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("Nhap phan tu thu %d: ",i+1);
        scanf("%d",&a[i]);
    }
}
void Inmang(int a[],int n){
    int i;
    printf("\nMang vua nhap: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
int Tong(int a[],int n){
    int i;
    int sum=0;
    for(i=0;i<n;i++){
        sum+=a[i];
    }
    return sum;
}
int Max(int a[],int n){
    int i;
    int max=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}
int Min(int a[],int n){
    int i;
    int min=a[0];
    for(i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    return min;
}
float Avg(int a[],int n){
    int i;
    float avg=0;
    for(i=0;i<n;i++){
        avg+=a[i];
    }
    return avg/n;
}
void Sort(int a[],int n){
    int i,j;
    int temp;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int Count(int a[],int n){
    int i;
    int count=0;
    for(i=0;i<n;i++){
        if(a[i]%5==0){
            count++;
        }
    }
    return count;
}
