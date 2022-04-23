#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<limits.h>
void nhap(int arr[][100],int m,int n,int *min,float *avg){
    int i,j;
    int sum = 0,cnt=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            arr[i][j] = rand()%101;
            if(arr[i][j]<*min)
                *min = arr[i][j];
            if(arr[i][j]%3==0){
                sum += arr[i][j];
                cnt++;
            }
            
        }
    }
    if(cnt!=0)
        *avg = (float)sum/cnt;
}

void xuat(int arr[][100],int m,int n){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
void FindX(int arr[][100],int m,int n,int x){
    int i,j,ok=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(arr[i][j]==x){
                printf("Vi tri dong %d\t",i);
                ok=1;
                break;
            }
        }
    }
    if(!ok){
        printf("-1");
    }
    
}
int main(){
    int arr[100][100];
    int m,n;
    int min=INT_MAX;
    float avg;
    scanf("%d %d",&m,&n);
    srand(time(0));
    nhap(arr,m,n,&min,&avg);
    xuat(arr,m,n);
    printf("min = %d\n",min);
    printf("Avg = %.2f\n",avg);
    int x;
    printf("Nhap x: ");
    scanf("%d",&x);
    FindX(arr,m,n,x);
    return 0;
}