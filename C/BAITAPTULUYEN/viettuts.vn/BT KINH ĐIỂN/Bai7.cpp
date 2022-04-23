/*
Viết chương trình C tìm ước số chung lớn nhất (UCLN) và bội số chung nhỏ nhất (BCNN) của hai số a và b.
*/
// #include <stdio.h>
// int main(){
//     int a,b,bc;
//     printf("\nNhap a,b lan luot: ");
//     scanf("%d%d",&a,&b);
//     if(a>=0&&b>=0){
//         if(a==0&&b==0){
//             printf("\nkhong co ucln");
//         }else if(a==0||b==0){
//             printf("\nkhong co ucln");
//         }else{
//             bc=a*b;
//             while(a!=b){
//                 if(a>b){
//                     a=a-b;
//                 }else{
//                     b=b-a;
//                 }
//             }
//             printf("\nUCLN=%d",a);
//             printf("\nBCNN=%d",bc/a);
//         }

//     }else{
//         printf("\nnhap a>=0: ");
//         printf("\nnhap b>=0: ");
//     }
// }

//SỬ DỤNG HÀM FUNCTION
#include <stdio.h>
//
int UCLN(int a, int b){
    if(a*b==0)
        return a+b;
    if(a>b){
        return UCLN(b,a-b);
    }else{
        return(a,b-a);
    }
}
//
int BCNN(int a, int b){
        return (a*b)/UCLN(a,b);
}
//

int main() {
    int a,b;
    printf("Nhap 2 so a,b: ");scanf("%d%d",&a,&b);
    printf("\nUCLN cua %d va %d la: %d", a, b, UCLN(a, b));
    // tinh BSCNN cua a và b
    printf("\nUCLN cua %d va %d la: %d", a, b, BCNN(a, b));
}