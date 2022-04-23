#include <bits/stdc++.h>
using namespace std;
int main() {
    int s;
    cin >> s;
    printf("%02d:%02d:%02d", s/3600, (s%3600)/60, (s%3600)%60);
    return 0;
}