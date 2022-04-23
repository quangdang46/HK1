#include <bits/stdc++.h>
using namespace std;
int C(int k, int n)
{
    if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    return C(k - 1, n - 1) + C(k, n - 1);
}
int main(){
    map <int,int> mp;
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        int k;
        cin>>k;
        mp[k]+=1;
    }
    int cnt=0;
    for(auto it:mp){
        if(it.second>=2){
            cnt+=C(2, it.second);
        }
    }
    cout<<cnt;

}