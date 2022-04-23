#include <bits/stdc++.h>
using namespace std;
int	n;
int	ans[9] = {0, 9, 90, 900, 9000, 90000, 900000, 9000000, 90000000};
int main()
{		
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
		while (cin >> n)
		{   
            cout << ans[(n+1) / 2] << endl;
		}
	return 0;
}