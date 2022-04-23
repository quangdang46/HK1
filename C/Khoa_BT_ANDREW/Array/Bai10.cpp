#include<stdio.h>
int mark[1000001];
int min(int a, int b){
    return a < b ? a : b;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        mark[arr[i]]++;
    }
    int dem=0,res;
    for(int i=0; i<n; i++){
        if(mark[arr[i]]>dem){
            dem=mark[arr[i]];
            res=arr[i];
        }else if(mark[arr[i]]==dem){
            if(res>arr[i]) res=arr[i];
        }
    }
    printf("%d %d",res,dem);
}
