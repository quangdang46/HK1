#include<stdio.h>
#include<math.h>
void TinhKichThuoc(float x, float y, float z);
int main(){
    float x,y,z;
    printf("\nNhap lan luot 3 canh cua 1 tam giac: ");
    scanf("%f%f%f",&x,&y,&z);
    if(x<=0 || y<=0 ||z<=0){
        printf("Khong ton tai tam giac\n");
    }else{
        if(x+y>z || x+z>y || y+z>x){
            printf("Tam giac: ");
            if(x==y && y==z){
                printf("DEU\n");
                TinhKichThuoc(x,y,z);
            }else if(x==y || y==z ||z==x){
                printf("CAN\n");
                TinhKichThuoc(x,y,z);
            }else if(x*x+y*y==z*z || x*x+z*z==y*y || y*y+z*z==x*x){
                printf("VUONG\n");
                TinhKichThuoc(x,y,z);
            }else{
                printf("BINH THUONG\n");
                TinhKichThuoc(x,y,z);
            }
        }else{
            printf("Khong ton tai tam giac\n");
        }
    }
}

void TinhKichThuoc(float x, float y, float z){
    float p,s,c;
    p=(x+y+z)/2;
    s=sqrt(p*(p-x)*(p-y)*(p-z));
    c=x+y+z;
    printf("Dien tich la:%f\n",s);
    printf("Chu vi la:%f\n",c);
}
