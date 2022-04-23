#include <stdio.h>
#include <math.h> // Su dung ham sqrt
const int MAX = 100000;
int arr[MAX];
 
int main(){
    int n;
    printf("\nNhap so luong phan tu n = ");
    scanf("%d", &n);
    
    // Nhap mang
    for(int i = 0;i < n; ++i){
        printf("\nNhap a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    /*------------------------------------*/
    // 1 .Tinh trung binh cong cac so le o vi tri chan
    // Chu y: Vi tri chan = chi so le
    int sum = 0;
    int count = 0;
    for(int i = 1; i < n; i+=2){
        if(arr[i] % 2 == 1){
            ++count;
            sum += arr[i];
        }
    }
    printf("\nTrung binh cong = %f", (float)sum/count);
    
    /*------------------------------------*/
    // 2. Tim so lon nhat trong mang vua nhap
    int maxNum = arr[0];
    for(int i = 1;i < n;++i){
        if(arr[i] > maxNum) maxNum = arr[i];
    }
    printf("\nPhan tu lon nhat: %d", maxNum);
    
    /*------------------------------------*/
    // 3. Tim vi tri cac so nho nhat trong mang
    // Can lam 2 buoc:
    //     1. Tim gia tri nho nhat minNum.
    //     2. In ra cac vi tri co gia tri = minNum
    // Luu y: Vi tri = chi so + 1
    
    // Tim gia tri nho nhat
    int minNum = arr[0];
    for(int i = 1;i < n;++i){
        if(arr[i] < minNum) minNum = arr[i];
    }
    
    // In ra vi tri co gia tri nho nhat
    printf("\nVi tri co gia tri nho nhat la: ");
    for(int i = 0;i < n;++i){
        if(arr[i] == minNum) printf("%d ", i+1);
    }
    
    /*------------------------------------*/
    // 4. Dem cac so chinh phuong co trong mang
    // So chinh phuong la so co can la so nguyen nhu: 1, 4, 9,...
    int scp = 0;
    float rs;
    for(int i = 0;i < n;++i){
        rs = sqrt(arr[i]);
        if(rs == (int)rs) ++scp;
    }
    printf("\nMang co %d so chinh phuong!", scp);
    
    /*------------------------------------*/
    // 5. Hien thi cac so nguyen to co trong mang
    // So nguyen to la so chi co 2 uoc duy nhat la 1 va chinh no.
    // So nguyen to nho nhat la so 2
    printf("\nCac so nguyen to co trong mang la: ");
    bool snt;
    for(int i = 0;i < n;i++){
        // Kiem tra a[i] co phai so nguyen to?
        // gia su no la so nguyen to
        // Neu no chia het cho so bat ky trong [2, a[i]] -> khong phai so nguyen to
        snt = true;
        for(int j = 2;j < arr[i]; ++j){
            if(arr[i] % j == 0) snt = false;
        }
        if(arr[i] >= 2 && snt == true) printf("%d ", arr[i]);
    }
    
    /*------------------------------------*/
    // 6. Thay the cac phan tu am trong mang = 0.
    for(int i = 0;i < n;++i){
        if(arr[i] < 0) arr[i] = 0;
    }
    // Muon xem thay doi thi bo comment
//  printf("\nMang sau khi thay the la: ");
//  for(int i = 0;i < n;++i){
//      printf("%d ", arr[i]);
//  }
    
    // 7. Xoa cac phan tu am co trong mang
    // Neu muon xem ket qua phan nay thi comment phan so 6 lai nhe
    // Cai nay ma giai thich bang ca 1 bai van luon ^^
    for(int i = 0;i < n;++i){
        if(arr[i] < 0){
            for(int j = i; j < n-1;j++){
                arr[j] = arr[j+1];
            }
            --n;
        }
    }
    // Muon xem thay doi thi bo comment
//  printf("\nMang sau khi xoa phan tu am la: ");
//  for(int i = 0;i < n;++i){
//      printf("%d ", arr[i]);
//  }
 
    /*------------------------------------*/
    // 8. Sap xep mang da nhap theo chieu tang dan
    int tg;
    for(int i = 0;i < n-1;++i){
        for(int j = i+1; j < n;++j){
            if(arr[i] > arr[j]){
                // Hoan vi
                tg = arr[i];
                arr[i] = arr[j];
                arr[j] = tg;
            }
        }
    }
    // Muon xem thay doi thi bo comment
    printf("\nMang sau khi sap xep tang dan la: ");
    for(int i = 0;i < n;++i){
        printf("%d ", arr[i]);
    }
}