#include <bits/stdc++.h>
using namespace std;
const long long mod=pow(10,9)+7;
long long multiply_modulo(long long A, long long B, long long M)
{
    if (B == 0)
        return 0;

    long long T = multiply_modulo(A, B / 2, M) % M;

    if (B & 1)
        return ((T + T) % M + A % M) % M;
    else
        return (T + T) % M;
}

long long power_modulo(long long A, long long B, long long M)  
{
    if (B == 0)
        return 1LL;

    int half = power_modulo(A, B / 2LL, M) % M;
    half = multiply_modulo(half, half, M);

    if (B & 1)
        return multiply_modulo(half, A, M);
    else
        return half;

}
int main()
{
    int A, B;
    cin >> A >> B ;
    cout << power_modulo(A, B, mod);
}