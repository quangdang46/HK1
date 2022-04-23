#include <bits/stdc++.h>
using namespace std;
// O(N)
int Solve1(int n){
    int cnt = 0;
    for(int i = 1; i <= n; ++i){
        if(n % i == 0){
            cnt++;
        }
    }
    return cnt;
}
// O(sqrt(N))
int Solve2(int n){
    int i;
    int cnt = 0;
    for(i = 1; i * i <= n; ++i){
        if(n % i == 0){
            cnt += 2;
        }
    }
    if((i - 1) * (i - 1) == n){
        cnt--;
    }
    return cnt;
}

// O(sqrt(N))
int Solve4(int n){
    int res = 1;
    for(int i = 2; i * i <= n; ++i){
        int cnt = 0;
        while(n % i == 0){
            cnt++;
            n /= i;
        }
        if(cnt != 0){
            res *= (cnt + 1);
        }
    }
    if(n != 1){
        res *= 2;
    }
      return res;
}
int main(){
    srand(time(0));
    while(1){
        int n = 1 + rand() % 1000000000;
        cout << "n = " << n << " ";
        int res1 = Solve1(n);
        int res2 = Solve2(n);
        if(res1 == res2){
            cout << "TRUE\n";
        }
        else{
            cout << "FALSE n = " << n << endl;
            cout << "res1 = " << res1 << endl;
            cout << "res2 = " << res2;
            break;
        }
    }
    return 0;
}