
/*
#include <bits/stdc++.h>
using namespace std;

bool ktra(long n)
{
    long k=1, a[500];

    while(n)
    {
        a[k]=n%10;
        n=n/10;
        k++;
    }
    k--;
    //for(int i=1;i<=k;i++) cout << a[i] << " ";

    if(k==1) return true;

    for(long i=1; i<=k/2; i++)
    {
        if(a[i] != a[k+1-i]) return false;
    }
    return true;
}
int main()
{
    long l,r,dem=0;
    while(cin >> l >> r)
    {
        for(long i=l; i<=r; i++)
        {
            if(ktra(i)==true) dem++;
        }
        cout << dem << endl;
        dem=0;
    }
}
*/

#include <bits/stdc++.h>
#define MOD 1000000007
#define base 31
#define Pi 3.141592654
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const int N = 1000011;
typedef map<int, int> mii;
typedef vector<int> vti;

vector<bool> check;
int demchu(ll x) {
    int a = 0;
    while (x) {
        x /= 10;
        a += 1;
    }
    return a;
}
bool palin(ll x) {
    ll b = 0;
    string a = to_string(x);
    reverse(a.begin(), a.end());
    b = stoll(a);
    x -= b;
    if (x == 0)
        return 1;
    else
        return 0;
}
bool palin2(string a) {
    bool cnt = true;
    int len = a.size();
    a = " " + a;

    for (int i = 1, j = len; i <= len / 2; j--, i++) {
        if (a[i] != a[j])
            return 0;
    }

    return 1;
}

main() {
    ll a[17];
    a[1] = 9;
    a[2] = 9;
    for (int i = 3, j = 4; i <= 15 || j <= 16; i = i + 2, j = j + 2) {
        a[i] = a[i - 2] * 10;
        a[j] = a[i];
    }
    ll l, r;
    while (cin >> l >> r) {
        int s1, s2, s3 = 99999;
        ll dem = 0;
        string s22 = to_string(l), s33 = to_string(r);

        s1 = demchu(l);
        s2 = demchu(r);
        if (s1 == s2) {
            int cnt = 0;
            for (int i = 0; i < s1; i++) {
                if (s22[i] != s33[i]) {
                    cnt = i;
                    break;
                }
            }
            s3 = s1 - cnt;
        }

        //		cout << s3 <<' '<< r-l;
        bool cnt = true;
        if (s3 < s1 / 2) {
            string a = to_string(l), b, c, d;
            for (int i = s3; i < a.size() - s3; i++) {
                b += a[i];
            }
            ll x, y;
            if (!palin2(b))
                cnt = false;
            else {
                b = to_string(r);
                for (int i = 0; i < s3; i++) {
                    c += a[i];
                }
                x = l;
                for (int i = a.size() - s3, j = c.size() - 1; i < a.size(); j--, i++) {
                    a[i] = c[j];
                }
                x = stoll(a);

                if (l <= x && x <= r)
                    dem = 1;
                cnt = false;
            }
        }
        if (cnt) {
            if (s2 - s1 > 1) {
                for (int i = s1 + 1; i < s2; i++) {
                    dem += a[i];
                }
                for (ll i = l; i < pow(10, s1); i++) {
                    if (palin(i))
                        dem += 1;
                }
                for (ll i = pow(10, s2 - 1); i <= r; i++) {
                    if (palin(i))
                        dem += 1;
                }

            } else {
                for (ll i = l; i <= r; i++) {
                    if (palin(i))
                        dem += 1;
                }
            }
        }
        cout << dem << endl;
    }
    return 0;
}