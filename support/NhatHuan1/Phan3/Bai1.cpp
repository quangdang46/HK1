#include<iostream>
using namespace std;
int main(){
    double x,y;
    cin >> x >> y;
    cout<<(x+y)/2<<endl;
    if(x<5 && y<5) cout<<"thi lai va hai";
    else{
        if(x<5) cout<<"Thi lai ly thuyet";
        if(y<5) cout<<"Thi lai thuc hanh";
    }

}