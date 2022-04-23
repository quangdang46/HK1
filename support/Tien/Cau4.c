#include<stdio.h>
int main(){
    int i,j,arr[4],max;
    int a,b,c,d;
    printf("Nhap a b c d:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    arr[0]=a;arr[1]=b,arr[2]=c;arr[3]=d;
    for(i=0;i<3;i++){
        for(j=i+1;j<4;j++){
            if(arr[j]>arr[i]){
                int tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
    max=arr[0]*arr[1]>arr[2]*arr[3]?arr[0]*arr[1]:arr[2]*arr[3];
    printf("Max:%d",max);
    
}