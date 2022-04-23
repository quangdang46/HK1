#include <bits/stdc++.h>
using namespace std;
string cong(string a,string b)
{
    if(a.size()<b.size())
        swap(a,b);
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    b+=string(a.size()-b.size(),'0');
    string res="";
    int nho=0;
    for(int i=0;i<a.size();i++)
    {
        int tmp=a[i]-48+b[i]-48+nho;
        res+=char(tmp%10+48);
        nho=tmp/10;
    }
    if(nho){
        res+=char(nho+48);
    };
    reverse(res.begin(),res.end());
    return res;
}
string nhan(string a,char b)
{
    string res="";
    int nho=0;
    reverse(a.begin(),a.end());
    for(int i=0;i<a.size();i++)
    {
        int tmp=(a[i]-48)*(b-48)+nho;
        res+=char(tmp%10+48);
        nho=tmp/10;
    }
    if(nho) res+=char(nho+48);
    reverse(res.begin(),res.end());
    return res;
}
int main(){
    string a,b;
    cin>>a>>b;
    if(a=="0"||b=="0")
    {
        cout<<0;
        return 0;
    }
    if(a.size()<b.size())
        swap(a,b);
    // chuoi a dai hon chuoi b
    string res="",kq="";
    int dem=0;
    for(int i=b.size()-1;i>=0;i--)
    {
        res=nhan(a,b[i]);
        res+=string(dem,'0');
        dem++;
        kq=cong(kq,res);
    }
    cout<<kq;
    return 0;
}