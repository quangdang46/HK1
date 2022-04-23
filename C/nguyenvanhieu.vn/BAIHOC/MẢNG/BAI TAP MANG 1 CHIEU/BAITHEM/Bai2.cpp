/*Bài tập sắp xếp mảng, tìm trung bình cộng
Nhập 1 dãy số nguyên không quá 50 phần tử, in ra màn hình dãy số đã nhập
Đưa ra màn hình số lớn nhất có trong dãy và vị trí của nó trong dãy.
*/
#include<stdio.h>
void swap(int &x, int &y){
    int tmp=x;
    x=y;
    y=tmp;
}
void nhapmang(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\narr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
void xuatmang(int arr[],int n){
    for(int i=0; i < n; i++){
        printf("\narr[%d]=%d",i,arr[i]);
    }
}
void sapxep(int arr[],int n){
    for(int i=0;i< n; i++){
        for(int j=i+1;j<n; j++){
            if(arr[i]> arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}
void MaxMang(int arr[],int n){
    int max=arr[0];
    int cout = 0;
    for(int i = 1;i < n;i++){
        if(arr[i]>max){
            max=arr[i];
            cout++;
        }
    }
    printf("\nGia tri lon nhat:%d\nO vi tri:%d",max,cout+1);
}
void trungbinh(int arr[],int n){
    float tong=0;
    for(int i=0; i < n; i++){
        tong+=arr[i];
    }
    printf("Trung binh cua mang:%f",(float)tong/n);
}
int main() {
    int n;
    int arr[50];
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    nhapmang(arr,n);
    sapxep(arr,n);
    xuatmang(arr,n);
    MaxMang(arr,n);
    trungbinh(arr,n);
}
