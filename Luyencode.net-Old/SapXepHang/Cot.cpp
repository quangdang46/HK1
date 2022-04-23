#include<bits/stdc++.h>
using namespace std;

int arr[1000][1000];
int main() {
    int m,n,k;
    cin>>m>>n>>k;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m-1;i++){
        for(int j=i+1;j<m;j++){
            if(arr[j][k-1]<arr[i][k-1]){
                int tmp=arr[j][k-1];
                arr[j][k-1]=arr[i][k-1];
                arr[i][k-1]=tmp;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


