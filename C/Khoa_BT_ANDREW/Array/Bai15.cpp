#include<stdio.h>
int mark[10001];
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        mark[arr[i]]++;
    }
    for(int i=0; i<n; i++){
        if(mark[arr[i]]==1){
            printf("%d %d\n",arr[i],mark[arr[i]]);
            mark[arr[i]]=0;
        }
    }
}