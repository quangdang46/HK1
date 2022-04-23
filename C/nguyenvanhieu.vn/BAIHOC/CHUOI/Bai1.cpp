/*
Bài 3. Bài tập mảng ký tự có lời giải – Nhập vào 1 chuỗi và 1 ký tự, kiểm tra ký tự có trong chuỗi hay không, 
nếu có đưa ra số lần xuất hiện của ký tự đó trong chuỗi.
*/
#include <string.h>
#include<stdio.h>
void TimKiem(char a[],char kt){
    int check = 0,cout=0;
    size_t len = strlen(a);
    for(int i = 0; i < len-1;i++){
        if(a[i]==kt){
            check=1;
            cout++;
        }
    }
    if(check==1){
        printf("Tim thay ki tu %c \nSo lan xuat hien:%d",kt,cout);
    }else{
        printf("Ki tu %c khong tim that!",kt);
    }
}

int main(){
    char a[100];
    printf("\nNhap chuoi: ");
    fgets(a,sizeof(a),stdin);
    char kt;
    printf("\nNhap ki tu can tim kiem:");
    scanf("%c", &kt);
    TimKiem(a,kt);
}

/*
#include <stdio.h>
#include <string.h>
dem ki tu xuat hien trong xau
char kiemtra(char chuoi[100], char n){
    int i, dem = 0;
    for (i = 0; i < strlen(chuoi); i++){
        if (chuoi[i] == n){
            dem++;
        }
    }
    if (dem > 0){
        printf("\nki tu %c trong chuoi xuat hien %d lan ", n, dem);
    }
    if (dem == 0){
        return 1;
    }
}
int main(){
    char chuoi[100], n;
    int dem = 0;
    printf("nhap chuoi: ");
    gets(chuoi);
    printf("chuoi vua nhap la : %s", chuoi);
    printf("\nxin moi ban nhap vao ki tu can dem\n");
    scanf("%c", &n);
    if (kiemtra(chuoi, n) == 1){
        printf("\nki tu %c khong co trong chuoi\n", n);
    }
}
*/