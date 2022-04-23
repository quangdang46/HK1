#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[100];
    cout<<"Nhap chuoi: ";
    cin.getline(str,100);
    char *token=strtok(str," ");
    token=strtok(NULL," ");
    cout<<"Chuoi con: "<<token<<endl;
}