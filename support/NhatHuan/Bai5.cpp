// #include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    double dienCu,dienMoi,tien=0;
    cout<<"Nhap dien cu,dien moi: ";
    cin>>dienCu>>dienMoi;
    //xuat so dien su dung
    double dienSuDung=dienMoi-dienCu;
    cout<<"So dien su dung: "<<dienSuDung<<" kWH"<<endl;
    if(dienSuDung<=100){
        tien=dienSuDung*1200;
    }else if(dienSuDung<=150){
        tien=100*1200+(dienSuDung-100)*1800;
    }else{
        tien=100*1200+50*1800+(dienSuDung-150)*2200;
    }
    cout<<"Tien phai tra: "<<tien*1.1<<" VND"<<endl;
}