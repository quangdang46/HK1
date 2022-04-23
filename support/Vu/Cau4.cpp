#include<bits/stdc++.h>
using namespace std;

void nhap(int a[][100],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
}
void xuat(int a[][100],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
//tim va in ra so chan trong mang
void solve(int a[][100],int n){
    int cnt = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]%2==0){
                cout << a[i][j] << " ";
            }
        }
    }
}

int main(){
    int a[100][100];
    int n;
    cout<<"Nhap n";
    cin>>n;
    nhap(a,n);
    xuat(a,n);
    cout<<"cac so chan trong mang: ";
    solve(a,n);
}