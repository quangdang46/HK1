#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        int ok=1;
        for(int j=0; j<i;j++){
            if(arr[j]==arr[i]){
                ok=0;
                break;
            }
        }
        if (ok){
            printf("%d ",arr[i]);
        }
    }
}