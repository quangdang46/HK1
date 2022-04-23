#include<stdio.h>
#include<string.h>
void InHoaChuDau(char a[]){
    for(int i=0; i<strlen(a); i++){
        /*
        x[0] viet hoa
        x[i-1] neu la space (=32) thi x[i] in hoa
        */
        if(i==0||i>0&&a[i-1]==32){
            if(a[i]>=97&&a[i]<=122){
                a[i]=a[i]-32;
            }
        }
    }
}
int main(){
    char a[50];
    printf("\nNhap chuoi: ");
    fgets(a,sizeof(a),stdin);
    strlwr(a);
    InHoaChuDau(a);
    printf("\nChuyen doi: %s",a);
}