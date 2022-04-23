// #include<bits/stdc++.h>
// #define ll long long
// #define endl '\n'
// #define ull unsigned long long
// using namespace std;
// vector <bool> checkPrime(1000001,1);
// vector <int > F(1000001,0);
// void solve(){
// int l,r,res=0;
// cin >> l >> r;
// cout<<F[r]-F[l-1]<<endl;
// }

// int main()
// {
// 	srand(time(NULL));
// 	ios_base::sync_with_stdio(false); cin.tie(0); //cout.tie(0);
// 	int q;
// 	// sieve of Eratosthenes
// 	checkPrime[0]=false;
// 	checkPrime[1]=false;
// 		for(int i =2;i <= 100001;i++)
// 			if(checkPrime[i])
// 				for(int j =2*i;j<=100001;j+=i)
// 					checkPrime[j]=false;
// 		//dung mang tong tien to de tinh tat ca cac so nguyen to
// 		for(int i = 1;i<=100001;i++)
// 			F[i]=F[i-1]+((checkPrime[i]) ? 1 : 0); // F[i] = F[i-1] + 1 nếu i là số nguyên tố cộng 0 nếu i là hợp số
// 	cin >> q;
// 	while(q--)
// 	solve();
// }


// #include <bits/stdc++.h>

// #define FOR(i, l, r) for(int i = l; i <= r; ++i)
// #define FOD(i, l, r) for(int i = l; i >= r; --i)

// #define ll long long
// #define ug unsigned long long

// const int Nmax = pow(10, 6);

// using namespace std;
// 	// Topic variable.
// 		int	T;
// 		int	l, r;
// 	// Auxiliary variable.
// 		bool	snt[1000100];
// 		int	ans[1000100];
// 	//___________________
// void seive()
// {
// 	int	i = 2;
// 	snt[1] = true;
// 	while (i <= 1000)
// 	{
// 		while (snt[i] == true) ++i;
// 		FOR(j, 2, Nmax / i) snt[i*j] = true;
// 		++i;
// 	}
// 	ans[0] = 0;
// 	FOR(i, 1, Nmax)
// 	{
// 		ans[i] = ans[i-1] + abs((int) snt[i] - 1);
// 	}
// }
// int main()
// {		
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(NULL);
// 		seive();
// 		cin >> T;
// 		while (T)
// 		{
// 			cin >> l >> r;
// 			cout << ans[r] - ans[l-1] << endl;
// 			--T;
// 		}
// 	return 0;
// }

/*
1->12 có 5 snt (2, 3, 5, 7, 11)
1->6 có 3 snt (2,3,5)
=> 7 -> 12 có 5-3= 2 snt (7, 11)

Tổng quát (prefix sum)

F[R] là số các snt từ 1->R
F[L] ................................1->L
=> các snt từ L->R sẽ là F[R] - F[L-1]
Hàm F:

For i từ 1->10^6 kiểm tra nếu i là snt thì F[i] = F[i-1] + 1 ngược lại thì F[i] = F[i-1]
Và để kiểm tra i có là snt hay không trong thời gian O(1) thì dùng sàng eratosthenes
*/



#include <bits/stdc++.h>
using namespace std;
int main(){
/* Bước sàng nguyên tố Eratosthenes */
    int n = 1000001;
    int a[n] = {0};
    a[0] = a[1] = 1;
    for(int i = 2; i * i <= n; ++i){
        if(a[i] == 0){
            for(int j = i * i; j <= n; j += i){
                if(a[j] == 0){
                    a[j] = 1;
                }
            }
        }
    }

	// 1 ;la sai 0 la dung
/* Bước biến mảng sàng nguyên tố thành mảng thống kê số lượng các số nguyên tố tính từ 1 */
    int cnt = 0;
    for(int i = 0; i < n; ++i){
        if(a[i] == 0){
            cnt++;
        }
        a[i] = cnt;
    }
/* Bước đọc dữ liệu từng bộ test và xử lý in ra kết quả ngay lập tức */
    int t;
    cin >> t;
    while(t--){
        int l, r;
        cin >> l >> r;
        cout << a[r] - a[l] + (a[l] != a[l - 1]) << endl;
    }
    return 0;

}