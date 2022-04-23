#include<bits/stdc++.h>
using namespace std;
int main(){
    //nhập vào họ và tên sau đo in hoa 
    string hovaten;
    cout<<"Nhap ten: ";
    getline(cin,hovaten);
    for(int i=0;i<hovaten.length();i++){
        toupper(hovaten[i]);
    }
    cout<<"Ho va ten: "<<hovaten<<endl;

}