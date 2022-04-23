// #include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    //bien luan pt ax+b=0
    float a,b;
    //nhap a b
    cout<<"Nhap a,b: ";
    cin>>a>>b;
    if(a==0){
        if(b==0){
            cout<<"Phuong trinh vo so nghiem";
        }else{
            cout<<"Phuong trinh vo nghiem";
        }
    }else{
        //xuat nghiem
        cout<<"Nghiem duy nhat: "<<-b/a<<endl;
    }

}