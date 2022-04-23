// #include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int nam;
    cout<<"Nhap nam: ";
    cin>>nam;
    if((nam%4==0&&nam%100!=0) || nam%400==0){
        cout<<"Nam do la nam nhuan";
    }else{
        cout<<"Nam do khong phai nam nhuan";
    }
}