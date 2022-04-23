#include <bits/stdc++.h>
int main()
{
    long long a, b;
    std::cin >> a >> b;
    std::cout << floor(sqrt(b)) - ceil(sqrt(a)) + 1;
    
    return 0;
}
// #include <bits/stdc++.h>

// #define FOR(i, l, r) for(int i = l; i <= r; ++i)
// #define FOD(i, l, r) for(int i = l; i >= r; --i)

// #define ll long long
// #define ug unsigned long long

// using namespace std;
// 	// Topic variable.
// 		ll	L, R;
// 	// Auxiliary variable.
		
// 	//___________________
// int	Dem(ll l, ll r)
// {
// 	int	S = sqrt(l);
// 		while (pow(S, 2) < l) ++S;
// 	int	E = sqrt(r);
// 		return (E - S + 1);
// }
// int main()
// {		
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(NULL);
// 		cin >> L >> R;
// 		cout << Dem(L, R);
// 	return 0;
// }