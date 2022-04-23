#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
}
void xuat(int a[],int n){
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
}
int findMax(int a[],int n){
    int max = a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max) max = a[i];
    }
    return max;
}

void solve(int a[],int n,int *sum,int *eve){
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            *sum+=a[i];
            cnt++;
        }
    }
    if(cnt!=0) *eve = *sum*1.0/cnt;
    else *eve = 0;

}
int main(){
    int a[100];
    int n;
    cin >> n;
    nhap(a,n);
    xuat(a,n);
    int sum = 0;
    int eve = 0;
    solve(a,n,&sum,&eve);
    cout<<endl;
    cout <<"Tong so am: "<<sum << " "<< "Trung binh so am: "<< eve;
}
