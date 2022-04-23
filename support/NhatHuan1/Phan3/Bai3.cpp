#include<iostream>
using namespace std;
int max(int a,int b){
    return a>b?a:b;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b &&b==c) cout<<"3 so bang nhau";
    else cout<<"Max: "<<max(a,max(b,c));
}