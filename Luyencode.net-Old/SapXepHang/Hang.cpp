#include<bits/stdc++.h>
// using namespace std;

// int arr[1000][1000];
// int main() {
//     int m,n,k;
//     cin>>m>>n>>k;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[k-1][j]<arr[k-1][i]){
//                 int tmp=arr[k-1][j];
//                 arr[k-1][j]=arr[k-1][i];
//                 arr[k-1][i]=tmp;
//             }
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


int main()
{
    int m, n, x;
    std::cin >> m >> n >> x;
    int arr[m][n];

    int brr[n]; // mang phu

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> arr[i][j];
            if ((x - 1) == i) // Vi: x(1 -> m) con i(0 -> m - 1).
            {
                brr[j] = arr[i][j]; // xep cac phan tu mang 2 chieu qua mang 1 chieu
            }
        }
    }

    // sap xep

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (brr[i] > brr[j])
            {
                std::swap(brr[i], brr[j]);
            }
        }
    }

    // xuat

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((x - 1) == i)
            {
                std::cout << brr[j] << ' ';
            }
            else
            {
                std::cout << arr[i][j] << ' ';
            }
        }
        std::cout << std::endl;
    }
}