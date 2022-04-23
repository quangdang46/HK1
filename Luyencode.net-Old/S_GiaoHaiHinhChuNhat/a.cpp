#include <bits/stdc++.h>
using namespace std;

long long	ax, ay, bx, by,cx, cy, dx, dy;

// Tim max cua 4 so
long long max4(int h, int i, int e, int u)
{
	return max(h, max(i, max(e, u)));
}
// Tim m cua 4 so
long long min4(int h, int i, int e, int u)
{
	return min(h, min(i, min(e, u)));
}

void solve(){
	long long 	L = abs(ax - bx) + abs(cx - dx) - (max4(ax, bx, cx, dx) - min4(ax, bx, cx, dx));
	long long	R = abs(ay - by) + abs(cy - dy) - (max4(ay, by, cy, dy) - min4(ay, by, cy, dy));
	if (L <= 0 || R <= 0) cout << '0';
	else cout << L*R;
}
int main(){		
    cin >> ax >> ay >> bx >> by;
    cin >> cx >> cy >> dx >> dy;
    solve();
}