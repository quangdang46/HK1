// #include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    float a,b,c;
    //nhap a b c
    cout<<"Nhap a,b,c: ";
    cin>>a>>b>>c;
    //tinh trung binh cong
    double tbcong=a*0.1+b*0.4+c*0.5;
    //xuat trung binh cong
    cout<<"Trung binh cong: "<<tbcong<<endl;
    //xuat ra so lon hon hoac bang trung binh cong
    cout<<"So lon hon hoac bang trung binh cong: ";
    //bien kiem tra co so lon hon hoac bang trung binh cong
    bool ok=false;
    if(a>=tbcong){
        ok=true;
        cout<<a<<" ";
    }else if(b>=tbcong){
        ok=true;
        cout<<b<<" ";
    }else if(c>=tbcong){
        ok=true;    
        cout<<c<<" ";
    }
    if(!ok){
        cout<<"khong co so lon hon hoac bang trung binh cong";
    }
}