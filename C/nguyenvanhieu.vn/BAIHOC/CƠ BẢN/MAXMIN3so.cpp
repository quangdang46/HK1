#include <stdio.h>
//tao ham tim max cua hai so
int max2(int a, int b){
    if(a < b)
        return b;
    else return a;   
}
//tao ham min 2 so
int min2(int a, int b){
    if(a < b)
        return a;
    else return b;
}
//tao ham max 3 so
int max3(int a, int b,int c){
    int m1=max2(a,b);
    int ans1=max3(m1,c);
    return ans1;
}
//tim min 3 so
int min3(int a, int b,int c){
    int m=min2(a,b);
    int ans=min3(m,c);
    return ans;
}

int main(){
    int a,b,c;
    printf("Nhap a= ");scanf("%d",&a);
    printf("Nhap b= ");scanf("%d",&b);
    printf("Nhap c= ");scanf("%d",&c);
    printf("\nMin 3 SO LA:%d",min3(a,b,c));
    printf("\nMax 3 SO LA:%d",max3(a,b,c));
}




// /*
//     Bài tập: Tìm min, max trong 3 số nguyên a b c nhập từ bàn phím
//     SỬ dụng hàm
//  */
 
 
// #include <stdio.h>
 
// // Hàm tìm min của 2 số
// int MinTwoNum(int a, int b){
//     return (a < b ? a : b);
//     /*
//         if (a < b) return a;
//         else return b;
//      */
// }
 
// // Hàm tìm max của 2 số
// int MaxTwoNum(int a, int b){
//     return (a > b ? a : b);
// }
 
// // Hàm tìm min 3 số nguyên
// int MinThreeNum(int a, int b, int c){
//     return MinTwoNum(a, MinTwoNum(b, c));
// }
 
 
// // Hàm tìm max 3 số
// int MaxThreeNum(int a, int b, int c){
//     int m = MaxTwoNum(a, b);
//     int ans = MaxTwoNum(m, c);
//     return ans;
// }
 
 
 
// /*
//     a = 5, b = 7, c = 1
//     min = min(min(a, b), c) // Ctrl C => Ctrl V
//     max = max(min(a, b), c)
//  */
 
// int main(){
//     int firstNum, secondNum, thirdNum;
 
//     printf("\nNhap so thu nhat: "); scanf("%d", &firstNum);
//     printf("\nNhap so thu hai: "); scanf("%d", &secondNum);
//     printf("\nNhap so thu ba: "); scanf("%d", &thirdNum);
 
//     // 
//     printf("\nMin = %d", MinThreeNum(firstNum, secondNum, thirdNum));
//     printf("\nMax = %d", MaxThreeNum(firstNum, secondNum, thirdNum));
//     return 0;
// }