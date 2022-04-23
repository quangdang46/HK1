#include<stdio.h>
int main(){
    int arr[10];
    arr[0]=1;
    for(int i=0; i<10; i++){
        arr[i]=i;
    }
    for(int i=0; i<10; i++){
        printf("arr[%d]=%d\n", i, arr[i]);
    }
}