/*
Bài 1. Các bài toán làm quen với mảng một chiều.
Cho mảng một chiều bao gồm các số nguyên.
Input
Dòng đầu tiên là số lượng phần tử trong mảng n. (1≤n≤106
).
Dòng thứ 2 là các phần tử trong mảng a1, a2, a3… an được đặt cách nhau một vài khoảng 
trắng. (-109≤ai≤109
).
Output
In ra kết quả tương ứng với yêu cầu của đề bài.
a.In ra số lớn nhất và nhỏ nhất trong mảng
b. Đếm số lượng số chẵn, lẻ trong mảng.
c. Liệt kê các số nguyên tố trong mảng.
d. Tìm và in ra chỉ số của số nhỏ nhất (lớn nhất) trong mảng, nếu có nhiều số có cùng giá 
trị nhỏ nhất thì in ra chỉ số đầu tiên ( cuối cùng).
e. Tìm và in ra số lớn nhất và lớn thứ 2 trong mảng. Các bạn làm thêm với số nhỏ nhất và 
nhỏ thứ 2.
f. Tìm và in ra số lớn nhất và lớn thứ 2 trong mảng, 2 số này là 2 số có giá trị khác nhau . 
Nếu không có số lớn thứ 2 in ra -1 cho số thứ 2. Các bạn làm thêm với số nhỏ nhất và nhỏ
thứ 2.
g. Đếm và liệt kê các số toàn chữ số lẻ trong 
h. Cho mảng các số nguyên khác nhau đôi một. Liệt kê các phần tử trong mảng có ít nhất 
2 phần tử khác lớn hơn nó.
i. Một số được định nghĩa là số đẹp nếu nó chứa cả chữ số 1 và chữ số 9. In ra các số đẹp 
trong mảng. Nếu mảng không tồn tại số đẹp thì in ra -1
j. Cho mảng một chiều các số nguyên, liệt kê các phần tử có ít nhất một phần
tử liền kề trái dấu với nó.
k. Kiểm tra xem mảng có đối xứng hay không, nếu có in YES, ngược lại in NO
*/

#include<iostream>
#include<limits.h>
#include<math.h>
using namespace std;
// int nt(int n){
//     int check = 1;
//     for(int i=2; i<=sqrt(n); i++){
//         if(n%i==0){
//             check=0;
//             break;
//         }
//     }
//     return check;
// }
// bool Check(int n){
//     while(n!=0){
//         int last=n%10;
//         if(last%2==0){
//             return false;
//         }
//         n/=10;
//     }
//     return true;
// }
// int checkSoDep(int n){
//     int c1=0,c2=0;
//     while(n!=0){
//         int last=n%10;
//         if(last==1){
//             c1=1;
//         }
//         if(last==9){
//             c2=9;
//         }
//         n/=10;
//     }
//     return c1&&c2;
// }

int dx(int arr[], int n){
    int l=0,r=n-1;
    while(l<r){
        if(arr[l]!=arr[r]){
            return 0;
        }
        l++;
        r--;
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    int max=INT_MIN, min=INT_MAX;
    int chan=0,le=0;
    for (int i=0;i<n; i++){
        cin >>arr[i];
    }
    // Cau a
    // for (int i=0;i<n; i++){
    //     if(arr[i]>max){
    //         max=arr[i];
    //     }
    //     if(arr[i]<min){
    //         min= arr[i];
    //     }
    // }
    // cout<<max<<" "<<min;
    // Cau b
    // for (int i=0;i<n; i++){
    //     if(arr[i]%2==0){
    //         chan++;
    //     }else{
    //         le++;
    //     }
    // }
    // cout <<chan<<" "<<le;
    // cau c
    // for(int i=0;i<n; i++){
    //     if(nt(arr[i])){
    //         cout<<arr[i]<<" ";
    //     }
    // }
    // cau d
    // int min1=INT_MAX;
    // int index;
    // for(int i=0;i<n;i++){
    //     if(arr[i]<=min1){
    //         min1=arr[i];
    //         index=i;
    //     }
    // }
    // // dau tien khong lay dau = cho arr[i]<min1 cuoi cung them dau =
    // cout<<index;
    // cau e
    // int max1=INT_MIN;int max2=INT_MIN;
    // for(int i=0;i<n;i++){
    //     if(arr[i]>max1){
    //         max2=max1;
    //         max1=arr[i];
    //     }else if(arr[i]>max2){
    //         max2=arr[i];
    //     }
    // }
    // cout <<max1<<" "<<max2;
    // cau f
    // for(int i=0;i<n;i++){
    //     if(arr[i]>max1){
    //         max2=max1;
    //         max1=arr[i];
    //     }else if(arr[i]>max2 && arr[i]!=max1){
    //         max2=arr[i];
    //     }
    // }
    // if(max2=INT_MIN){
    //     cout<<max1<<"-1";
    // }else{
    //     cout<<max1<<" "<<max2;
    // }
    // cau g
    // int res=0,b[res];
    // for(int i=0;i<n; i++){
    //     if(Check(arr[i])==true){
    //         b[res]=arr[i];
    //         res++;
    //     }
    // }
    // cout <<res<<endl;
    // for(int i=0;i<res;i++){
    //     cout<<b[i]<<" ";
    // }
    // cau h
    // chỉ cần phần tử nhỏ hơn số lớn nhất thứ hai thì thỏa mãn điều kiện đề
    // int max1=INT_MIN;int max2=INT_MIN;
    // for(int i=0;i<n;i++){
    //     if(arr[i]>max1){
    //         max2=max1;
    //         max1=arr[i];
    //     }else if(arr[i]>max2){
    //         max2=arr[i];
    //     }
    // }
    // for(int i=0; i < n; i++){
    //     if(arr[i]<max2){
    //         cout<<arr[i]<<' ';
    //     }
    // }
    // cau i
    // int check=0;
    // for(int i=0;i<n;i++){
    //     if(checkSoDep(arr[i])){
    //         cout<<arr[i]<<' ';
    //         check=1;
    //     }
    // }
    // if(check==0){
    //     cout<<"-1";
    // }
    // cau j
    // for(int i=0;i<n;i++){
    //     if(i==0 && arr[0]*arr[1]<0){
    //         cout<<arr[0]<<' ';
    //     }else if(i==n-1 && arr[n-1]*arr[n-2]<0){
    //         cout<<arr[n-1]<<' ';
    //     }else if(arr[i]*arr[i-1]<0 || arr[i]*arr[i+1]<0){
    //         cout<<arr[i]<<' ';
    //     }
    // }
    // cau k;
    if(dx(arr,n)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

}