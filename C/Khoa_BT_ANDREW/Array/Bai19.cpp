#include<stdio.h>
#include<string.h>
int mark[1000001]={0};
int a[10000];
int main(){
    int n;
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);

        for(int i=0; i<n; i++){
            scanf("%d",&a[i]);
            mark[a[i]]++;
        }
        int ok=0;
        for(int i=0; i<n; i++){
            if(mark[a[i]]>1){
                ok=1;
                printf("%d",a[i]);
                break;
            }
        }
        if(ok==0){
            printf("-1\n");
        }
        memset(mark, 0,sizeof(mark));
    }



}