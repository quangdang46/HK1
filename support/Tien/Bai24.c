#include<stdio.h>
int main(){
    int n,i,j;
    int a[50];
    printf("Nhap n:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    // Cau 1
    for(int i=0;i<n;i++){
        int ok = 1;
        for (j=0;j<i;j++){
            if(a[i] == a[j]){
                ok = 0;
                break;
            }
        }
        if(ok==1){
            printf("%d ",a[i]);
        }
    }
    // Cau 2
    printf("\n________________\n");
    int res = 0,cnt=1,b[100],dem=1;
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]) ++dem;
        else dem = 1;
        if(dem > res){
            res = dem;
            b[0] = i-res+1;
            cnt=1;
        }
        else if(dem==res){
            b[cnt] = i-res+1;
            ++cnt;
        }
    }
    for(i=0;i<cnt;i++){
        for(j=0;j<res; j++){
            printf("%d ",a[b[i]+j]);
        }
        printf("\n");
    }
    // Cau 3
    

}