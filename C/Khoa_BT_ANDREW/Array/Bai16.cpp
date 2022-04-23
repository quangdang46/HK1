#include<stdio.h>
int mark[10001];
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    long long prefix[n];
    for(int i=0; i<n; i++){
        if(i==0){
            prefix[0]=arr[0];
        }else{
            prefix[i]=prefix[i-1]+arr[i];
        }
    }
    int t;
    scanf("%d",&t);
    while(t--){
        int l,r;
        scanf("%d%d",&l,&r);
        l--,r--;
        if(l==0){
            printf("%lld\n",prefix[r]);
        }else{
            printf("%lld\n",prefix[r]-prefix[l-1]);
        }
    }


}