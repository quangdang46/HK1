#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int sum1=0,sum2=-1e18;
    for(int i=0; i<n; i++){
        sum1+=arr[i];
        if(sum1>sum2){
            sum2=sum1;
        }else if(sum1<0){
            sum1=0;
        }
    }
    printf("%d",sum2);
}