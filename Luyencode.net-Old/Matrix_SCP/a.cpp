#include<bits/stdc++.h>
using namespace std;
// int check[10000];
// int check_range(int arr[],int n,int k){
//     for(int i=0; i<n;i++){
//         if(arr[i]==k){
//             return 0;
//         }
//     }
//     return 1;
// }
// int main(){
//     int m,n;
//     cin >> m >> n;
//     int res=0;
//     int check_1=0;
//     while(m--){
//         int k;
//         for(int i=0;i<n;i++){
//             cin >>k;
//             if(pow((int)sqrt(k),2)==k){
//                 if(check_range(check,res,k)){
//                     check[res]=k;
//                     check_1=1;
//                     res++;
//                 }
//             }
//         }
//     }
//     for(int i=0;i<res-1;i++){
//         for(int j=i+1;j<res;j++){
//             if(check[j]<check[i]){
//                 swap(check[j],check[i]);
//             }
//         }
//     }
//     for(int i=0;i<res;i++){
//         cout<<check[i]<<" ";
//     }
//     if(check_1==0){
//         cout<<"NOT FOUND";
//     }    
// }

/*
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

bool check(double n) {
    if (sqrt(n) == static_cast<int>(sqrt(n))) {
        return true;
    }
    else return false;
}

int main() {
    int m, n;
    cin >> m >> n;
    vector <double>scp;
    double** a = new double* [m];
    for (int i = 0; i < m; i++) {
        a[i] = new double[n];
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            if (check(a[i][j]) == true) {
                scp.push_back(a[i][j]);
            }
        }
    }
    if (scp.size() == 0) {
        cout << "NOT FOUND";
    }
    else {
        int res[40];
        int nRes = 1;
        res[0] = scp[0];
        for (int i = 1; i < scp.size(); i++) {
            int count = 0;
            for (int j = 0; j < nRes; j++) {
                if (scp[i] != res[j]) {
                    count++;
                }
            }
            if (count == nRes) {
                res[nRes++] = scp[i];

            }
        }

        for (int i = 0; i < nRes - 1; i++) {
            for (int j = i + 1; j < nRes; j++) {
                if (res[i] > res[j]) {
                    int tmp = res[i];
                    res[i] = res[j];
                    res[j] = tmp;
                }
            }
        }
        for (int i = 0; i < nRes; i++) {
            cout << res[i] << " ";
        }
    }

    return 0;
}
*/



#define MAX_ROW 100
#define MAX_COLUMN 100
void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                std::swap(arr[i], arr[j]);
            }
        }
    }
}

int check_square_number(int number)
{
    float result = sqrt(number);
    if (sqrt(number) == result)
    {
        return 1;
    }
    return 0;
}

void input_and_get_square_nubmer(int arr[][MAX_COLUMN], int m, int n, int brr[], int &k) // nhap va kiem tra xem co so chinh phuong khong neu co thi cho vao mang 1 chieu
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> arr[i][j];
            if (check_square_number(arr[i][j]) == 1)
            {
                brr[k] = arr[i][j];
                k++;
            }
        }
    }
}

void delete_element(int arr[], int &n, int position) // hàm xóa 1 phần tử trong mảng
{
    for (int i = position; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
}

void output_square_number_array(int arr[], int n) // hàm này là hàm xóa số trùng trong mảng nhưng mình có chỉnh lại để thành hàm xuất luôn để khỏi lặp nhiều
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                delete_element(arr, n, j);
                j--;
            }
        }
        std::cout << arr[i] << ' ';
    }
}
int main()
{
    int m, n;
    std::cin >> m >> n;
    int matrix[MAX_ROW][MAX_COLUMN];

    int square_number_array[MAX_COLUMN]; // mảng để chứa số chính phương
    int k = 0; // đếm số phần tử của mảng chứ số chính phương 

    input_and_get_square_nubmer(matrix, m, n, square_number_array, k);
    sort(square_number_array, k);
    if (k == 0)
    {
        std::cout << "NOT FOUND";
    }
    else
    {
        output_square_number_array(square_number_array, k);
    }

    return 0;
}

