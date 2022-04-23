#include<iostream>
using namespace std;
void nhap(int a[],int n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
void solve(int a[],int n){
    int cnt=0;
    cout<<"Cac so chia het cho 2,3,5 la: ";
    for(int i=0;i<n;i++){
        if(a[i]%2==0&&a[i]%3==0&&a[i]%5==0){
            cout<<a[i]<<" ";
            cnt++;
        }
    }
    if(cnt==0){
        cout<<"Khong co so nao chia het cho 2,3,5";
    }else{
        cout<<"\nSo luong cac so chua het cho 2,3,5 la: "<<cnt;
    }

}
int main(){
    int n,a[100];
    cout<<"Nhap n: ";
    cin>>n;
    nhap(a,n);
    solve(a,n);

}