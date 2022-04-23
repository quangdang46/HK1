#include<stdio.h>
int main(){
    float tb,n1,n2,n3,n4,n;
    printf("\nNhap diem: ");
    scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
    tb=(n1*0.1+n2*0.2+n3*0.2+n4*0.5);
    if(tb<5){
        printf("Hoc lai");
    }else if(tb<6.5){
        printf("Trung Binh");
    }else if(tb<9){
        printf("\nGioi");
    }else{
        printf("Xuat Xac");
    }
}
