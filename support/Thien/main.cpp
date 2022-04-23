#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
    int a[100],b[100],c[200],m,n;
    fast
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(a[i]<b[j]){
            c[k++]=a[i];
            i++;
        }
        else{
            c[k++]=b[j];
            j++;
        }
    }
    while(i<m){
        c[k++]=a[i];
        i++;
    }
    while(j<n){
        c[k++]=b[j];
        j++;
    }
    for(int i=0;i<k;i++){
        cout<<c[i]<<" ";
    }
    return 0;
}