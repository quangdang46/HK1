#include<bits/stdc++.h>
using namespace std;

int giaithua(int n){
    if(n==0 || n==1) return 1;
    return n*giaithua(n-1);
}


double solve(int x){
    return (5*giaithua(x)+9*giaithua(x))/giaithua(x);
}
int main() {
    int x;
    cin >> x;
    cout <<solve(x);
}