#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        long long MOD=998244353;
        long long a, b, c;
        cin >> a >> b >> c;
        long long m1 = a * (a + 1) / 2, m2 = b * (b + 1) / 2, m3 = c * (c + 1) / 2;
        m1 %= MOD, m2 %= MOD, m3 %= MOD;
        long long res = (m1 * m2) % MOD;
        res = (res * m3) % MOD;
        cout << res << "\n";
    }
    return 0;
}


