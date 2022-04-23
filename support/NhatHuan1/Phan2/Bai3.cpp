#include<iostream>
using namespace std;
int solve(int a,int b){
    return a>b?a:b;
}

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    cout << solve(solve(a,b),c);
}