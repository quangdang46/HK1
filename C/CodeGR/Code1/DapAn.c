#include<stdio.h>
int main(){
    int n;
    int a,sum=0,dem=0,arr[100],i=0,max=0,last;
    do{
        printf("\nNhap gia tri n: ");
        scanf("%d",&n);
    }while(n<0);
    while(n>0){
        last=n%10;
        arr[i]=last;
        a=last;
        sum+=last;
        dem++;
        max=max>last?max:last;
        i++;
    }
    //cau 1;
    printf("\nChu so dau tien la:%d",a);
    //Cau 2;
    printf("\nTong cac chu so:%d",sum);
    // Cau 3;
    printf("\nSo lon nhat trong cac chu so:%d",max);
    // Cau4;
    printf("\nSo luong chu so:%d",dem);
    // Cau5;
    int check=1;
    for(int j=0;j<i;j++){
        if(arr[j]==arr[j+1]){
            check=0;
            break;
        }
    }
    if(check==1){
        printf("Cac chu so doi 1 khac nhau!");
    }else{
        printf("Cac chu so khong doi mot khac nhau!");
    }
}   
