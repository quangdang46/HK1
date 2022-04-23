#include<iostream>
using namespace std;
int main(){
    int p,kp;
    cin>>p>>kp;
    if(kp>=1 && kp<=2){
        cout<<"C";
    }else if(kp>=3){
        cout<<"D";
    }else{
        if(p>=4){
            cout<<"D";
        }else{
            cout<<"A";
        }
    }
}