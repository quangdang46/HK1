// #include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    float ccan,tbkt,thi;
    cout<<"Nhap DIEM CHUYEN CAN,DIEM TRUNG BINH,DIEM THI: ";
    cin>>ccan>>tbkt>>thi;
    if(ccan<0||ccan>10||tbkt<0||tbkt>10||thi<0||thi>10){
        cout<<"Diem khong hop le";
    }else{
        double tb=ccan*0.1+tbkt*0.4+thi*0.5;
        cout<<"Diem trung binh: "<<tb<<endl;
        if(tb<5){
            cout<<"thi lai";

        }else{
            cout<<"Dat";
        }
    }
}