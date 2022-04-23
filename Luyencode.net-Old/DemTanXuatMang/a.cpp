#include <bits/stdc++.h>
int main()
{
    int n, x;
    std::cin >> n;
    // std::vector<long long> v(n);
    int v[n];
    std::unordered_map<long long, int> freg;
    
    for(int i = 0; i < n; i++)
    {
        std::cin >> v[i];
        freg[v[i]]++;
    }
    // for(auto it :freg){
    //     std::cout << it.first << " " << it.second<< std::endl;
    // }
    std::cout << freg.size() << "\n";
    for(int i = 0; i < n; i++)
    {
        if(freg[v[i]] != 0)
        {
            std::cout << v[i] << " " << freg[v[i]] << "\n";
            freg.erase(v[i]);
        }
    }
    
    return 0;
}