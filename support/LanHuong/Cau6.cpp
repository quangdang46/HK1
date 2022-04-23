#include<bits/stdc++.h>
using namespace std;
int main(){
    //nhập một chuỗi và sắp xếp giảm dần
    string str;
    cout<<"Nhap chuoi: ";
    getline(cin,str);
    int cnt=0;
    for(char c:str){
        if(c>='0' && c<='9') ++cnt;
    }
    cout<<"So ki tu so: "<<cnt<<endl;
    
}