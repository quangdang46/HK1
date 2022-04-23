#include<iostream>
using namespace std;
void solve(int a,int b){
    if(a>b){
        cout<<"So lon la "<<a<<",so be la "<<b;
    }else if(a<b){
        cout<<"So lon la "<<b<<",so be la "<<a;
    }else{
        cout<<"Hai so bang nhau";
    }
}
int main(){
    int a,b;
    cin >> a >> b;
    solve(a,b);
}