#include<iostream>
using namespace std;
void solve(double tien){
    int n;
    cout<<"1.USD(22000) 2.EURO(27000) 3.YEN(175) ";
    cin >> n;
    int doi;
    if(n==1){
        doi=tien/22000;
    }else if(n==2){
        doi=tien/27000;
    }else if(n==3){
        doi=tien/175;
    }
    cout<<"So tien doi duoc la: "<<doi;
}
int main(){
    double tien;
    int n;
    cin >> tien;
    solve(tien);
}