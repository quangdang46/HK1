#include<stdio.h>
#include<math.h>
int main(){
    float x,y,r,d,a,b;
    printf("Nhap toa do tam O(x,y): ");
    scanf("%f%f",&x,&y);
    printf("Nhap ban kinh duong tron: ");
    scanf("%f",&r);
    printf("Nhap toa do diem A(a,b): ");
    scanf("%f%f",&a,&b);
    d=sqrt(pow(a-x,2)+pow(b-y,2));
    if(d>r){
        printf("Diem A nam ngoai duong tron");
    }else if(d<r){
        printf("Diem A nam trong duong tron");
    }else{
        printf("Diem A nam tren duong tron");
    }
}