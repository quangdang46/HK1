#include<bits/stdc++.h>
using namespace std;
int stringtonum(char c) {
    return c - '0';
}
char numtostring(int n) {     
    return (char)(n+48);
}
void chuanhoa(string &a, string &b) {
    int la=a.length(), lb=b.length();
    if (la>=lb) b.insert(0, la-lb, '0');   
    else a.insert(0, lb-la, '0');    
}
string sum(string a, string b) {
    string s = "";
    chuanhoa(a,b);   
    int l=a.length();
    int temp=0;
    for (int i=l-1; i>=0; i--) {
        temp=stringtonum(a[i])+stringtonum(b[i])+temp;    
        s.insert(0,1,numtostring(temp%10));        
        temp/=10;    
    }
    if (temp>0) s.insert(0,1,numtostring(temp));
    return s;
}
int n;
string fibo[100000];
int main() {
	fibo[0]="1";
	fibo[1]="1";
	for (int i=2; i<=10000; ++i) {
		fibo[i]=sum(fibo[i-2],fibo[i-1]);
	}
	cin >> n;
    while(n--){
        int k;
        cin>>k;
        cout<<fibo[k]<<endl;
    }
}