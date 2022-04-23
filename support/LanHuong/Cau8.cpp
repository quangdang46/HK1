
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Nhap ten: ";
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(i==0) s[0]=toupper(s[0]);
        if(s[i-1]==' '&&s[i]!=' ') s[i]=toupper(s[i]);
    }
    cout<<"Chuan hoa : "<<s<<endl;
}