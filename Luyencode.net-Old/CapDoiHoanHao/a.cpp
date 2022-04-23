#include<bits/stdc++.h>
using namespace std;
int main(){
//    srand(time(NULL));
    // ios_base::sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);
    int n,res=INT_MAX;
    cin >> n;
    int Arr[n+1];
    for(int i =0;i<n;i++)
        cin >> Arr[i];
    sort(Arr,Arr+n);
    for(int i = 1;i<n;i++)
        res=min(res,Arr[i]-Arr[i-1]);
    cout<<res;
}