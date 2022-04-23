#include<stdio.h>
#include<math.h>
void NhapMang(float arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("arr[%d]=",i);
        scanf("%f",&arr[i]);
    }
}
int cp(int n){
    int k=sqrt(n);
    if(pow(k,2)==n){
        return 1;
    }
    return 0;
}
int nt(int n){
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n,i;
    float arr[100];
    printf("Nhap n:");
    scanf("%d",&n);
    NhapMang(arr,n);
    printf("-------------------\n");
    for(i=0;i<n;i++){
        if(cp(arr[i])==1 && arr[i]>n){
            printf("%d ",arr[i]);
        }
    }
    printf("-------------------\n");
    for(i=0;i<n;i++){
        if(nt(arr[i])==1 && arr[i]<n){
            printf("%d ",arr[i]);
        }
    }
}