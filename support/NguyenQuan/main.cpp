#include<bits/stdc++.h>
using namespace std;
void solve(int a,int b){
    if(a==0 || b==0 || (a<0 && b>0) || (a>0 && b<0)){
        cout<<"Zero";
    }else{
        int cnt=b-a;
        if((cnt%2==0 && ((a<0 && b<0) || (a>0 && b>0) ))   ||   ( cnt%2==1 && ((a<0 && b>0)||(a>0 && b<0)) )){
            cout<<"Negative";
        }else if((a>0&&b>0) || (cnt%2==0 && ((a>0 && b>0)||(a<0 && b<0))  ||  (cnt%2==1 && ((a>0 && b<0)||(a<0 && b>0))))){
            cout<<"Positive";
        }
    }
}

int main(){
    int a,b;
    cin >> a >> b;
    solve(a,b);
}