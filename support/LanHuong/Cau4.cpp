#include<bits/stdc++.h>
using namespace std;
int main(){
    //nhập một chuỗi và sắp xếp giảm dần
    string str;
    cout<<"Nhap chuoi: ";
    getline(cin,str);
    sort(str.begin(),str.end());
    cout<<"Chuoi sau khi sap xep: "<<str<<endl;
    
}