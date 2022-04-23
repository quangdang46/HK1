/*CHECKKKKKKKKKKKKKKK

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,money;
    cin>>n>>money;
    int arr[20];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n, greater<int>());
    int cnt = 0;
    int ans = 0;
    int check = 1;
    

    // while (money!=0){
    //     if(money<arr[n-1]){
    //         check=0;
    //         break;
    //     }
    //     else if(money>arr[ans]){
    //         int k=money/arr[ans];
    //         cnt+=k;
    //         money-=arr[ans]*k;
    //     }
    //     ans++;
    // }
    // if(check==1){
    //     cout<<cnt;
    // }else{
    //     cout<<-1;
    // }
    
}
*/
#include <bits/stdc++.h>
#define FOR(i, l, r) for(int i = l; i <= r; ++i)
using namespace std;
int n, S;
int	a[25];
int	L[25][100020];
int main()
{		
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
		cin >> n >> S;
		for(int i = 1; i <= n; ++i)
		{
			cin >> a[i];
			memset(L[i], 0, sizeof(L[i]));
			FOR(j, 1, S)
			{
				if (j == a[i]) L[i][j] = 1;
				else{
                    if (j > a[i] && L[i][j - a[i]] > 0) L[i][j] = L[i][j - a[i]] + 1;
                    
                    if (L[i][j] == 0) L[i][j] = L[i-1][j];
                    if (L[i][j] > 0 && L[i-1][j] > 0) L[i][j] = min(L[i][j], L[i-1][j]);
                }
			}
		}
		if (L[n][S] == 0) cout << -1;
		else
		cout << L[n][S];
	return 0;
}


// #include<bits/stdc++.h>
// using namespace std;
// int find(int a[], int n, int m)
// {
//     for(int i=1; i<=n; ++i)
//     {
//         if(m<a[i]) return i;
//     }
//     return n+1;
// }//những mệnh giá lớn hơn số tiền thì bỏ qua, hàm tìm vị trí của mệnh giá mà > số tiên
// int main()
// {
//     int n, m, i, j;
//     cin>>n>>m;
//     int a[n+1]; //mảng chứa các mệnh giá
//     for(i=1; i<=n; ++i)
//     {
//         cin>>a[i];
//     }
//     int b[n+1]; // mảng chứa số tờ tiền
//     int c[n+1]; //mảng chứa phần dư
//     int t=find(a, n, m);
//     if(t==1) {cout<<"-1";}// ko có mệnh giá nào nhỏ hơn số tiền thì ko thể rút
//     else
//     {
//         for(i=1; i<t; ++i)
//         {
//             b[i]=m/a[i];
//             c[i]=m%a[i];
//         }
//         for(i=t-1; i>=1; --i)
//         {
//             for(j=i-1; j>=1; --j)   
//             {
//                 if(c[i]==0) break;
//                 else
//                 {
//                     b[i]+=c[i]/a[j];
//                     c[i]=c[i]%a[j];
//                 }//sau khi đã lấy được phần nguyên của M chia cho từng mệnh giá rồi, mình lấy phần dư chia nguyên lần lượt cho các mệnh giá nhỏ hơn
//                 if(c[i]==0) break;
//             }// phần dư mà =0 thì dừng ngay đổi sang xét mệnh giá khác
//         }
//         int min=b[1]; j=0;
//         for(i=1; i<t; ++i)
//         {
//             if(c[i]==0)
//             {
//                 j+=1;
//                 if(b[i]<min) min=b[i];
//             }
//         }
//         if(j==0) cout<<-1;// phần dư mà khác 0 thì ko thể rút đc
//         else cout<<min;
//     }
//     return 0;
// }