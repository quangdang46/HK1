#include<iostream>
using namespace std;
void solve(int ngay,int thang,int nam){
    if(thang==1 || thang==3 || thang==5 || thang==7 || thang==8 || thang==10 || thang==12){
        cout<<"Thang co 31 ngay";
    }
    else if(thang==4 || thang==6 || thang==9 || thang==11){
        cout<<"Thang co 30 ngay";
    }
    else if(thang==2){
        if((nam%4==0 && nam%100!=0) || nam%400==0){
            cout<<"Thang co 29 ngay";
        }
        else{
            cout<<"Thang co 28 ngay";
        }
    }else{
        cout<<"Khong hop le!!";
    }

}

int main(){
    int ngay,thang,nam;
    cin >> ngay >> thang >> nam;
    solve(ngay,thang,nam);
}