#include<bits/stdc++.h>
using namespace std;
int main(){
    //nhập một chuỗi đếm số từ
    string str;
    cout<<"Nhap chuoi: ";
    getline(cin,str);
    int dem=0;
    if(str[0]!=' ') ++dem;
    for(int i=1;i<str.length()-1;i++){
        if(str[i]==' '&&str[i+1]!=' ') ++dem;
    }
    cout<<"So tu: "<<dem<<endl;
}