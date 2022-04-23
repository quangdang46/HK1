#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int CheckSNT(int n){
    int dem=0;
    if(n>=2){
        for(int i=1;i<=n;i++){
            if(n%i==0){
                dem++;
            }
        }
    }
    return dem;
}
int CheckTanCung(int n){
    if(n<0){
        n*=-1;
    }
    int check=0,last;
    last=n%10;
    if(last==6 && n%4==0){
        check=1;
    }
    return check;
}
#define MAX 101
int main(){
    int n,i;
    int arr[MAX];
    printf("Nhap gioi han n: ");
    scanf("%d",&n);
    srand(time(NULL));
    for(i=0;i<n;i++){
        arr[i] = rand()%(50+50+1)-50;
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    // Cau c
    for(i=0;i<n;i++){
        if(CheckSNT(arr[i])==2){
            printf("\nSo nguyen to trong mang:");
            printf("%d ",arr[i]);
        }
    }
    //Cau d
    int a,b;
    printf("\nNhap gioi han [a,b]: ");
    scanf("%d%d",&a,&b);
    for(i=a; i<=b; i++){
        printf("%d ",arr[i]);
    }
    // cau f
    int sum=0;
    for(i=0;i<n;i++){
        sum+= arr[i];
    }
    printf("\nGia tri trung binh cua mang:%f",1.0*sum/n);
    // cau g
    int dem=0;
    for(i=0;i<n;i++){
        if(CheckTanCung(arr[i])==1){
            dem++;
        }
    }
    printf("\nSo phan tu thoa man cau g la:%d",dem);

}


