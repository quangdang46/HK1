#include<stdio.h>
#include<string.h>
void ChuyenInHoa(char a[]){
    for(int i=0; i<strlen(a); i++){
        if(a[i]>=97&&a[i]<=122){
            a[i]=a[i]-32;
        }
    }
}
void ChuyenThuong(char a[]){
    for(int i=0; i<strlen(a); i++){
        if(a[i]>=65&&a[i]<=90){
            a[i]=a[i]+32;
        }
    }
}
int main(){
    char a[100];
    printf("\nNhap chuoi: ");
    fgets(a,sizeof(a),stdin);
    // printf("\nChuoi IN HOA:%s",strupr(a));
    // printf("\nChuoi viet THUONG:%s",strlwr(a));
    ChuyenInHoa(a);
    printf("\nChuoi IN HOA:%s",a);
    ChuyenThuong(a);
    printf("\nChuoi viet THUONG:%s",a);
}