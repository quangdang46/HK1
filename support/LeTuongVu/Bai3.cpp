#include<iostream>
#include<math.h>
using namespace std;
void nhap(int a[],int n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
bool chinhphuong(int a){
    if((int)sqrt(a)==sqrt(a)){
        return true;
    }
    return false;
}
void solve(int a[],int n){
    int cnt=0;
    cout<<"Cac so chinh phuong la: ";
    for(int i=0;i<n;i++){
        if(chinhphuong(a[i])){
            cout<<a[i]<<" ";
            cnt++;
        }
    }
    if(cnt==0){
        cout<<"Khong co so nao chinh phuong";
    }
}
int main(){
    int n,a[100];
    cout<<"Nhap n: ";
    cin>>n;
    nhap(a,n);
    solve(a,n);
}