#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long a[200004];
    cin>>n;
    vector<long long> v;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n,greater<long long>());
    for(int i=0;i<n-1;){
        if(a[i]==a[i+1]){
            v.push_back(a[i]);
            i+=2;
        }else{
            i++;
        }
    }
    long long s = 1;
    int k = 0;
    for(auto i = v.begin();i!=v.end();i++){
        s*=*i;
        k++;
        if(k==2) break;
    }
    if(s==1 ||k==1) cout<<0;
    else
    cout<<s;

}