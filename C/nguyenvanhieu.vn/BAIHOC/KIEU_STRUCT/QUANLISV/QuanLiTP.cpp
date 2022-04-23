// #include<stdio.h>
// #include<string.h>
// struct THANHPHO{
//     char ten[20];
//     float thunhap;
//     int danso;
// };
// typedef struct THANHPHO TP;
// void XoaXuongDong(char x[]){
//     size_t len = strlen(x);
//     if(x[len-1]== '\n'){
//         x[len-1] = '\0';
//     }
// }
// void nhap(TP &tp){
//     printf("Nhap ten thanh pho: ");
//     fflush(stdin);
//     fgets(tp.ten,sizeof(tp.ten),stdin);
//     XoaXuongDong(tp.ten);
//     printf("Nhap so luong dan so: ");
//     scanf("%d",&tp.danso);
//     printf("Nhap tong thu nhap: ");
//     scanf("%f",&tp.thunhap);
// }

// void nhapN(TP city[],int &n){
//     printf("BAN DANG CHON NHAP THANH PHO\n");
//     printf("______________________\n");
//     do{
//         printf("Nhap so luong thanh pho: ");
//         scanf("%d",&n);
//     }while(n<=0);
//     for(int i=0;i<n;i++){
//         nhap(city[i]);
//         printf("\n");
//     }
//     printf("\n______________________\n");
// }
// int timMINThuNhap(TP city[],int n){
//     float min = city[0].thunhap;
//     printf("\n_______________\n");
//     printf("THANH PHO CO THU NHAP THAP NHAT\n");
//     for(int i=1;i<n; i++){
//         if(city[i].thunhap<min){
//             city[i].thunhap=min;
//         }
//     }
//     return min;
// }
// float timMaxDanSo(TP city[],int n){
//     float max = city[0].danso;
//     printf("\n________________\n");
//     printf("THANH PHO CO DAN SO DONG NHAT:\n");
//     for(int i=1;i<n; i++){
//         if(city[i].danso>max){
//             max=city[i].danso;
//         }
//     }
//     return max;
// }
// void xuat(TP tp){
//     printf("Ten thanh pho:%s\n",tp.ten);
//     printf("So luong dan so:%d\n",tp.danso);
//     printf("Tong thu nhap cua thanh pho:%2.f\n",tp.thunhap);
// }
// void timTenThanhPho(TP city[],int n){
//     fflush(stdin);
//     char timTen[10];
//     printf("Nhap ten thanh pho can tim:");
//     fgets(timTen,sizeof(timTen),stdin);
//     XoaXuongDong(timTen);
//     for(int i=0; i<n;i++){
//         if(strstr(strupr(city[i].ten),strupr(timTen))){
//             xuat(city[i]);
//             printf("\n");
//         }
//     }
// }

// void xuatN(TP city[], int n){
//     for(int i=0;i<n; i++){
//         xuat(city[i]);
//         printf("\n");
//     }
// }
// int main(){
//     TP city[20];
//     int n;
//     nhapN(city,n);
//     timMINThuNhap(city,n);
//     xuatN(city,n);
//     timMaxDanSo(city,n);
//     xuatN(city,n);
//     timTenThanhPho(city,n);
// }

#include<stdio.h>
#define MAX 50
 
struct city {
    char name[50];
    long int population;
    float income;
} ct[MAX]; /* khai bao mang cac ctruct */
 
int main() {
    int i, n, mp, mi, maxPopulation, maxIncome;
    float rate;
    mp = mi = -1;
    maxPopulation = maxIncome = 0;
 
    printf("Nhap so thanh pho: ");
    scanf("%d", &n);
 
    for (i = 0; i < n; i++) {
        printf("\nNhap chi tiet thanh pho thu %d: \n", i + 1);
 
        printf("Nhap ten thanh pho: ");
        scanf("%s", &ct[i].name);
 
        printf("Nhap tong so dan: ");
        scanf("%ld", &ct[i].population);
 
        printf("Nhap tong thu nhap: ");
        scanf("%f", &ct[i].income);
    }
 
    for (i = 0; i < n; i++) {
        // tim thanh pho co dan so dong nhat
        if (ct[i].population >= maxPopulation) {
            maxPopulation = ct[i].population;
            mp++;
        }
        // tim thanh pho co thong thu nhap cao nhat
        if (ct[i].income > maxIncome) {
            maxIncome = ct[i].income;
            mi++;
        }
    }
 
    printf("\nThanh pho co dan so dong nhat: %s", ct[mp].name);
    printf("\nThanh pho co tong thu nhap cao nhat: %s", ct[mi].name);
 
    return (0);
}