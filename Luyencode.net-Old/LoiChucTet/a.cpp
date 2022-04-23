#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n;
    string s;
    set <string> A;
    cin >> n;
    getline(cin,s);
    for(int i =1; i<=n; i++)
    {
        getline(cin,s);
        A.insert(s);
    }
    cout<<A.size();
}



// #include <bits/stdc++.h>

// #define FOR(i, l, r) for(int i = l; i <= r; ++i)
// #define FOD(i, l, r) for(int i = l; i >= r; --i)

// #define ll long long

// using namespace std;
// 	// Topic variable.
// 		int		T;
// 		string 	s;
// 	// Auxiliary variable.
// 		map<string, bool> f;
// 		int		d = 0;
// 	//___________________
// int main()
// {		
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(NULL);
// 		cin >> T;
// 		cin.ignore();
// 		while (T)
// 		{
// 			getline(cin, s);
// 			if (f[s] == false)
// 			{
// 				++d;
// 				f[s] = true;
// 			}
// 			--T;
// 		}
// 		cout << d;
// 	return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main () {
// 	int n, i, j;
// 	scanf ("%d\n", &n);
// 	char s[n][31];
// 	for (i=0; i<n; i++) {
// 		gets (s[i]);
// 	}
// 	for (i=0; i<n; i++) {
// 		for (j=i+1; j<n; j++) {
// 			if (strcmp (s[i], s[j]) > 0) {
// 				char t[31];
// 				strcpy (t, s[i]);
// 				strcpy (s[i], s[j]);
// 				strcpy (s[j], t);
// 			}
// 		}
// 	}
// 	int count = 0;
// 	for (i=0; i<n; i++) {
// 		if (strcmp (s[i], s[i+1]) != 0) count++;
// 	}
// 	printf ("%d", count);
// 	return 0;
// }


/*
Ý tưởng của mình là tạo một chuỗi a chứa tất cả các lời chúc phân biệt = ký tự '/'. Thêm một mảng d chứa các chỉ số của ký tự '/' làm mốc, Mảng c có số phần tử là số lời chúc, lời nào bị trùng phía sau thì c[i]=0, còn lại =1. cuối cùng đếm số phần tử =1 của c thôi.
Kèm theo một số cách xử lý chuỗi sau đây;
substr(s1,start, length) : trả về chuỗi con của s1, với chỉ số bắt đầu và số lượng ký tự
s1.compare(s2) =0 : chuỗi s1 giống hoàn toàn s2.
*/


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	string a="0", b;
// 	int n, i, j;
// 	cin>>n;
// 	int c[n+1], d[n+1]; d[0]=0;
// 	for(int i=1; i<=n; i++)
// 	{
// 		c[i]=1;
// 	}
// 	cin.ignore();
// 	for(i=1; i<=n; ++i)
// 	{
// 		getline(cin,b);
// 		a=a+b+'/';
// 		d[i]=d[i-1]+b.length()+1;
// 	}
// 	string s1, s2;
// 	for(i=1; i<n; ++i)
// 	{
// 		s1=a.substr(d[i-1]+1, d[i]-d[i-1]-1);
// 		for(j=i+1; j<=n; ++j)
// 		{
// 			if(c[j]!=0)
// 			{
// 				s2=a.substr(d[j-1]+1, d[j]-d[j-1]-1);
// 				if(s1.compare(s2)==0) c[j]=0;
// 			}
// 		}
// 	}
// 	j=0;
// 	for(i=1; i<=n; ++i)
// 	{
// 		if(c[i]!=0) j+=1;
// 	}
// 	cout<<j;
// 	return 0;
// }