/*Ý tưởng tính tổng các số lẻ trong mảng 1 chiều:

Khởi tạo biến tong = 0;
Duyệt qua từng phần tử trong mảng sử dụng vòng lặp for. Với mỗi phần tử, ta dùng cấu trúc if để kiểm tra xem nếu là số lẻ thì thêm vào biến tong.
Xuất ra kết quả.
*/

#include <stdio.h>
#define MAX 100
void nhapmang(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
int tongphantule(int arr[],int n){
    int tong=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==1){
            tong+=arr[i];
        }
    }
    return tong;
}
int main(){
    int n;
    int arr[MAX];
    do{
        printf("\nNhap gioi han cua mang: ");
        scanf("%d",&n);
    }while(n<0||n>=MAX);
    nhapmang(arr,n);
    printf("\ntong so le la:%d",tongphantule(arr,n));
}