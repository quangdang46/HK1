/*
Nhập 2 số nguyên a và b từ bàn phím. Tính tổng các số chẵn trong [a, b] với a <= b
Ý tưởng giải quyết bài toán:
Nhập vào 2 số nguyên a và b
Kiểm tra điều kiện a < b mà không hợp lệ => thông báo cho người dùng biết
Khai báo biến lưu tổng các số chẵn và gán giá trị ban đầu
Duyệt qua từng số trong đoạn [a, b] => Nếu là số chẵn thì thêm vào biến tổng
In ra kết quả của bài toán
*/
//CÁCH 1
#include<stdio.h>
int main(){
    int a,b,sum,i;
    sum=0;
    
    printf("Nhap a= ");scanf("%d",&a);
    printf("Nhap b= ");scanf("%d",&b);
    if(a<=b){
        for(i=a;i<=b;i++){
            if(i%2==0){
                sum+=i;
            }
        }
        printf("sum=%d",sum);
    }else{
        printf("Ban hay kiem tra lai gia tri a&b");
    }
}
//CÁCH 2
/*
#include <stdio.h>
 
int main()
{
    int a, b;
    int sum = 0;
 
    printf("Nhap a = ");
    scanf("%d", &a);
 
    printf("Nhap b = ");
    scanf("%d", &b);
 
    // Nếu a > b => thoát chương trình
    if (a > b)
    {
        printf("Khong hop le!");
        return 0;
    }
 
    // Cách thứ nhất
    // for(int i = a; i <= b; i++){
    //     if(i % 2 == 0){
    //         sum += i;
    //     }
    // }
 
    // Cách 2: tốt hơn
    if (a % 2 != 0)
        a++;
 
    for(int i = a; i <= b; i+=2){
        sum += i;
    }
    
    printf("Sum = %d", sum);
}*/