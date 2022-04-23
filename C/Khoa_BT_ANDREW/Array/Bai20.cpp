#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n],b[m],c[n+m];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++){
        scanf("%d",&b[i]);
    }
    int i=0,j=0,g=0;
    while(i<n&& j<m){
        if(a[i]>=b[j]){
            c[g++]=b[++j];

        }else{
            c[g++]=a[++i];
        }
    }
    while(i<n){
        c[g++]=a[++i];
    }
    while(j<m){
        c[g++]=b[++j];
    }
    for(int k=0; k<m+n; k++){
        printf("%d ",c[k]);
    }
}