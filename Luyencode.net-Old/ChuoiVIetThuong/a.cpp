#include<bits/stdc++.h>
using namespace std;
string s;
int main() {
    getline(cin,s);
    for(int i = 0; i < s.length(); i++){
        if(s[i]>=65 && s[i]<=90){
            s[i]+=32;
        }
    }
    cout<<s;
}