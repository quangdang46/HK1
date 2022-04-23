#include<stdio.h>
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int sum1=0,sum2=0,res=0;
    for(int i=0; i<k; i++){
        sum1+=arr[i];
    }
    sum2=sum1;
    for(int i=1; i<n-k+1; i++){
        sum1=sum1-arr[i-1]+arr[i+k-1];
        if(sum1>=sum2){
            sum2=sum1;
            res=i;
        }
    }
    printf("%d\n",sum2);
    for(int i=res; i<=res+k-1; i++){
        printf("%d ",arr[i]);
    }
}