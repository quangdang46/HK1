// #include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    //viet chuong trinh nhap vao mot thang xuat ra thang do thuoc mua nao
    int thang;
    cout<<"Nhap thang: ";
    cin>>thang;
    if(thang<1||thang>12){
        cout<<"Thang khong hop le";
    }else{
        if(thang==1 ||thang==2 || thang==3){
            cout<<"Thang do thuoc mua XUAN";
        }else if(thang==4 || thang==5 || thang==6){
            cout<<"Thang do thuoc mua HA";
        }else if(thang==7 || thang==8 || thang==9){
            cout<<"Thang do thuoc mua THU";   
        }else{
            cout<<"Thang do thuoc mua DONG";
        }
    }
}