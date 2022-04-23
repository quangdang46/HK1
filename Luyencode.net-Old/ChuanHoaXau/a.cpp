#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin>>n;
	cin.ignore();
	while(n--)
	{
		string s;
		getline(cin,s);
		if(s[0] != ' ')
			cout<<s[0];
		int k =s.length();
		while(k--)
			if(s[k] != ' ')
				break;
		
		for(int i = 1 ; i <= k ; i++)
		{
			if(s[i] != ' ')
				cout<<s[i];
			else
			{
				if(s[i-1] != ' ')
					cout<<s[i];
			}
		}
		cout<<endl;
	}
}