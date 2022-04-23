/*thực hiện yêu cầu sau: Viết chương trình nhập vào 3 cạnh của một tam giác.
Kiểm tra xem 3 cạnh này có tạo thành tam giác không ? Nếu tạo thành tam giác thì đó là tam giác đều, cân, hay vuông.
Tính diện tích của tam giác
*/
#include<stdio.h>
#include<math.h>
//
float dientich(float a,float b,float c){
    float p,s; 
    p=(a+b+c)/2;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    return s;
}
//
int main(){
    float a,b,c;
    printf("\nNhap canh thu nhat: ");scanf("%f",&a);
    printf("\nNhap canh thu hai: ");scanf("%f",&b);
    printf("\nNhap canh thu ba: ");scanf("%f",&c);
    //kiem tra tam giac
    if(a>0 && b>0 && c>0){
        if(a+b>c && a+c>b && b+c>a){
            printf("Day la tam giac ");
            if(a==b&&a==c){
                printf("deu");
                printf("\nCo dien tich la:%0.2f",dientich(a,b,c));
            
            }else if(a==b||a==c||b==c){
                printf("can");
                printf("\nCo dien tich la:%0.2f",dientich(a,b,c));
            
            }else if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a){
                printf("vuong");
                printf("\nCo dien tich la:%0.2f",dientich(a,b,c));
            
            }else{
                printf("thuong");
                printf("\nCo dien tich la:%0.2f",dientich(a,b,c));
            
            }
        }else{
            printf("\nDay khong phai tam giac");
        }
    }else{
        printf("Ban kiem tra lai cac canh da nhap!");
    }
}