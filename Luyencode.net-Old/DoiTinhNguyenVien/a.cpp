// #include<bits/stdc++.h>
#include<iostream>
using namespace std;
int n,hmax,ans,htemp,cnt;
int a[100002];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    a[0] = a[n+1] = 0;
    hmax = ans = 0;
    htemp = cnt = 0;
    for(int i=1;i<=n+1;i++)
        if(a[i]!=a[i-1])
        {
            if(cnt>=ans)
            {
                ans = cnt;
                hmax = htemp;
            }
            htemp = a[i];
            cnt = 1;
        }
        else
            cnt++;
    cout<<hmax<<" "<<ans;
}
