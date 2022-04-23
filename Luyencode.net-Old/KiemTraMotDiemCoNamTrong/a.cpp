#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,x,y;
    cin>>a>>b>>c>>d>>x>>y;
    if(x< max(a,c)&&x > min(a,c) && y< max(b,d)&& y > min(b,d)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}

/*
#include <bits/stdc++.h>
using namespace std;

// K1ethoang: 1:50 PM - 30/11/2021

int main()
{
    int x1, y1, x2, y2, x, y;
    cin >> x1 >> y1 >> x2 >> y2 >> x >> y;

    if (x1 < x2 && y1 < y2)
    {
        if ((x1 < x && x < x2) && (y1 < y && y < y2))
            cout << "YES";
        else
            cout << "NO";
    }
    else if (x1 > x2 && y1 > y2)
    {
        if ((x2 < x && x < x1) && (y2 < y && y < y1))
            cout << "YES";
        else
            cout << "NO";
    }
    else if (x1 < x2 && y1 > y2)
    {
        if ((x1 < x && x < x2) && (y2 < y && y < y1))
            cout << "YES";
        else
            cout << "NO";
    }
    else if (x1 > x2 && y1 < y2)
    {
        if ((x2 < x && x < x1) && (y1 < y && y < y2))
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}
*/