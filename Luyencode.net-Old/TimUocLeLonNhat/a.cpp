#include <bits/stdc++.h>
using namespace std;

int slove_2(int n){
	int a = n;
	if(n%2==0){
        while(n%2==0){
            n/=2;
        }
    }
    else{
        for(int i=3; i*i<=n; i++){
            if(n%i==0){
                n=n/i;
                break;
            }
        }
    }
    if(n==a) return 1;
    return n;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	int s = 0;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		cout<<slove_2(a)<<endl;
	}
}